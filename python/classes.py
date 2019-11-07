class book:
	author=""
	date=""
	title=""

first=book()
first.title="Classical Mechanics"
first.date="2019"
first.author="Taylor"
print("The first book is:", first.title,"by", first.author, end=", ")
print(first.date)
