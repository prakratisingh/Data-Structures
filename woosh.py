from whoosh.index import create_in, open_dir
from whoosh.fields import Schema, TEXT, ID
from whoosh.qparser import QueryParser
# define a schema for the index
schema = Schema(title=TEXT(stored=True), content=TEXT(stored=True), path=ID(stored=True))
# create an index
index_dir = 'index'
ix = create_in(index_dir, schema)
# define some documents to add to the index
documents = [
    {'title': 'Document 1', 'content': 'This is the content of document 1.'},
    {'title': 'Document 2', 'content': 'This is the content of document 2.'},
    {'title': 'Document 3', 'content': 'This is the content of document 3.'},
    {'title': 'Document 4', 'content': 'This is the content of document 4.'},
]
# add the documents to the index
writer = ix.writer()
for doc in documents:
    writer.add_document(title=doc['title'], content=doc['content'], path=doc['title'])
writer.commit()
# search the index
searcher = ix.searcher()
query_parser = QueryParser('content', schema=ix.schema)
query = query_parser.parse('document')
results = searcher.search(query)
# print the results
for result in results:
    print(result['title'])


