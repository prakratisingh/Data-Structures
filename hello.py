from textblob import TextBlob
# Sample text to analyze
text = "I love this restaurant! The food is amazing."

# Create a TextBlob object
blob = TextBlob(text)

# Get the sentiment polarity (-1 to 1)
sentiment = blob.sentiment.polarity

# Print the sentiment polarity
print(sentiment)

# Output: 0.65 (positive)


