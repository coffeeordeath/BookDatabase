#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;

namespace bookDatabase {
	class Book
	{
	public:
		Book();
		Book(string newAuthor, string newTitle, string newDate);
		void setData(string newAuthor, string newTitle, string newDate);
		string getAuthor() const;
		string getTitle() const;
		string getDate() const;
		friend bool operator<(const Book &book1, const Book &book2);

	private:
		string author, title, date;
	};
}


#endif