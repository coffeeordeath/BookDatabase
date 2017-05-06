#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>

#include "book.h"

using namespace std;
using namespace bookDatabase;

void addNewBooks(vector<Book> &bookdata);
void printBooks(vector<Book> &bookdata);
void sortBooks(vector<Book> &bookdata);
void printMenu();

int main()
{
	vector<Book> bookdata;
	int choice;
	do {
		printMenu();
		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 1: addNewBooks(bookdata);
			break;
		case 2: printBooks(bookdata);
			break;
		}
	} while (choice != 3);
	return 0;
}

void addNewBooks(vector<Book> &bookdata) {
	string new_author, new_title, new_date;
	cout << "Enter author name(last, first): " << endl;
	getline(cin, new_author);
	cout << "Enter book title(in \"\"): " << endl;
	getline(cin, new_title);
	cout << "Enter publication date(ex. 2016): " << endl;
	getline(cin, new_date);
	Book b(new_author, new_title, new_date);
	bookdata.push_back(b);
}

void printBooks(vector<Book> &bookdata) {
	sortBooks(bookdata);
	cout << "The books entered so far, sorted by author: " << endl;

	for (unsigned int i = 0; i < bookdata.size(); i++) {
		cout << " " << bookdata[i].getAuthor() << ", " << bookdata[i].getTitle() << ", " << bookdata[i].getDate() << endl;
	}
}

void sortBooks(vector<Book> &bookdata) {
	sort(bookdata.begin(), bookdata.end());
}

void printMenu() {
	cout << "Select from the following choices: " << endl;
	cout << "1. Add new book" << endl;
	cout << "2. Print book listing" << endl;
	cout << "3. Quit" << endl;
}