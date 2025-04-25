#include <iostream>
#include <string>
#include <list>

using namespace std;

class Book {
private:
	string number;
	string author;
	string title;
public:
	Book(string number, string author, string title) {
		this->setNumber(number);
		this->setAuthor(author);
		this->setTitle(title);
	}
	void setNumber(string number) {
		this->number = number;
	}
	void setAuthor(string author) {
		this->author = author;
	}
	void setTitle(string title) {
		this->title = title;
	}
	string getNumber() {
		return this->number;
	}
	string getAuthor() {
		return this->author;
	}
	string getTitle() {
		return this->title;
	}
	void display() {
		cout << "Number: " << this->getNumber() << endl;
		cout << "Author: " << this->getAuthor() << endl;
		cout << "Title: " << this->getTitle() << endl;
	}
};

class Library {
private:
	string name;
	list<Book*> stock;
public:
	Library(string name) {
		this->setName(name);
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	void addBook(Book* book) {
		this->stock.push_back(book);
	}
	void display() {
		cout << "Name: " << this->getName() << endl;
	}
	void displayAllBooks() {
		for (Book* i : this->stock) {
			i->display();
		}
	}
};

//int main() {
//	cout << "The Library Application\n" << endl;
//
//	Book* first = new Book("000", "Aso Haro", "Alice in Borderland");
//
//
//	Book* second = new Book("001", "Ha Van Thao", "Co so lap trinh huong doi tuong");
//	
//	
//	Library* lib = new Library("HCMUS Library");
//	lib->display();
//	lib->addBook(first);
//	lib->addBook(second);
//	lib->displayAllBooks();
//
//	Library lib2("HCMUS Library 2");
//	lib2.display();
//
//	delete first;
//	delete second;
//	delete lib;
//
//	return 0;
//}
