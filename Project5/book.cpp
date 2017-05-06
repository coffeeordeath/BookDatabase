#include "book.h"
#include<string>
namespace bookDatabase {
	Book::Book():author(""), title(""), date("") {}

	Book::Book(string newAuthor, string newTitle, string newDate) : author(newAuthor), title(newTitle), date(newDate) {}

	void Book::setData(string newAuthor, string newTitle, string newDate) {
		author = newAuthor;
		title = newTitle;
		date = newDate;
	}

	string Book::getAuthor() const {
		return author;
	}

	string Book::getTitle() const {
		return title;
	}
	
	string Book::getDate() const {
		return date;
	}

	bool operator<(const Book &book1, const Book &book2) {
		return book1.author < book2.author;
	}

}