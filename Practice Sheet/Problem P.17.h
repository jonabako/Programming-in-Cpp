class Book {
	private:
		char* title;
		int pages;
	public:
		Book(const Book&);
		Book(const char* t, int p);
		Book();
};

Book::Book(const Book& temp){
	title = new char[sizeof(temp.title)];
	pages = temp.pages;
}

/*
Normally the compiler automatically creates a copy constructor 
for each class (known as an implicit copy constructor) but for 
special cases the programmer creates the copy constructor, 
known as a user-defined copy constructor. In such cases, 
the compiler does not create one. 
*/

/*
A user-defined copy constructor is generally needed when an object 
owns pointers or non-shareable references, such as the created Book class.
*/
