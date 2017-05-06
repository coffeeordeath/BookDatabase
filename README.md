# BookDatabase
Book Database Project for CIS 202
Programming Project 6


In this project you are to create a database of books that are stored using a vector. Keep track of the author, title, and publication date of each book. You program should have a main menu that allows the user to select from the following: (1) Add a book’s author, title, and date; (2) Print an alphabetical list of the books sorted by author; and (3) Quit.

You must use a class to hold the data for each book. This class must hold three string fields: one to hold the author’s name, one for the publication date, and another to hold the book’s title. Store the entire database of books in a vector in which each vector element is a book class object.

To sort the data, use the generic sort function from the <algorithm> library. Note that this requires you to define the < operator to compare two objects of type Book so that the author field from the two books are compared. 

A sample of the input/output behavior might look as follows. Your I/O need not look identical, this is just to give you an idea of the functionality.

Select from the following choices:
1.  Add new book
2.  Print listing sorted by author
3.  Quit
1

Enter title:
More Than Human

Enter author:
Sturgeon, Theodore

Enter data:
1953

Select from the following choices:
1.  Add new book
2.  Print listing sorted by author
3.  Quit
1

Enter title:
Problem Solving with C++

Enter author:
Savitch, Walter

Enter date:
2015

Select from the following choices:
1.  Add new book
2.  Print listing sorted by author
3.  Quit
2

The books entered so far, sorted alphabetically by author are:
Savitch, Walter.		Problem Solving with C++.		2015.
Sturgeon, Theodore.	More Than Human.		1953.

Select from the following choices:
1.  Add new book
2.  Print listing sorted by author
3.  Quit
1

Enter title:
At Home in the Universe

Enter author:
Kauffman

Enter date
1996

Select from the following choices:
1.  Add new book
2.  Print listing sorted by author
3.  Quit
2


The books entered so far, sorted alphabetically by author are:
Kauffman.	At Home in the Universe.	1996.
Savitch, Walter.		Problem Solving with C++.	2015.
Sturgeon, Theodore.	More Than Human.		1953.
