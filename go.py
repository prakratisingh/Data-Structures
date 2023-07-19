import nltk
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize, sent_tokenize
from nltk.stem import WordNetLemmatizer
from collections import Counter
# download required nltk data
nltk.download('stopwords')
nltk.download('punkt')
nltk.download('wordnet')
# load stop words and lemmatizer
stop_words = set(stopwords.words('english'))
lemmatizer = WordNetLemmatizer()
# define a function to preprocess the text
def preprocess_text(text):
    # tokenize the text
    tokens = word_tokenize(text.lower())
    # remove stop words
    filtered_tokens = [token for token in tokens if token not in stop_words]
    # lemmatize the tokens
    lemmatized_tokens = [lemmatizer.lemmatize(token) for token in filtered_tokens]
    # join the lemmatized tokens into a string
    preprocessed_text = ' '.join(lemmatized_tokens)
    return preprocessed_text
# define a function to get the most common sentence containing the answer
def get_most_common_sentence(text, answer):
    # preprocess the text
    preprocessed_text = preprocess_text(text)
    # tokenize the text into sentences
    sentences = sent_tokenize(preprocessed_text)
    # count the occurrences of the answer in each sentence
    sentence_counts = Counter([sentence.count(answer) for sentence in sentences])
    # get the most common sentence length
    most_common_count = sentence_counts.most_common(1)[0][0]
    # get the most common sentence(s)
    most_common_sentences = [sentence for sentence in sentences if sentence.count(answer) == most_common_count]
    return most_common_sentences
# define a function to ask and answer a question
def ask_question(text, question):
    # preprocess the question
    preprocessed_question = preprocess_text(question)
    # tokenize the question
    question_tokens = word_tokenize(preprocessed_question)
    # remove question words
    question_words = ['what', 'who', 'when', 'where', 'why', 'how']
    question_tokens = [token for token in question_tokens if token not in question_words]
    # join the question tokens into a string
    preprocessed_question = ' '.join(question_tokens)
    # get the most common sentence(s) containing the answer
    most_common_sentences = get_most_common_sentence(text, preprocessed_question)
    # return the most common sentence(s)
    return most_common_sentences
# example usage
text = "John likes to play basketball. He plays basketball every weekend with his friends. He also watches basketball games on TV."
question = "What does John like to play?"
answer = ask_question(text, question)
print(answer)


