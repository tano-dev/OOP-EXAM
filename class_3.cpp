#include <iostream>
#include <string>
#include <list>

using namespace std;

class BorrowerRecord; // Forward declaration

class Book {
private:
    string number;
    string author;
    string title;
    BorrowerRecord* borrower;
public:
    Book(string number, string author, string title);
    void setNumber(string number);
    void setAuthor(string author);
    void setTitle(string title);
    string getNumber();
    string getAuthor();
    string getTitle();
    void display();
    BorrowerRecord* getBorrower();
    void attachBorrower(BorrowerRecord* borrower);
};

class BorrowerRecord {
private:
    string theName;
public:
    BorrowerRecord(string theName);
    void setName(string theName);
    string getName();
    void display();
};

class Library {
private:
    string name;
    list<Book*> stock;
    list<BorrowerRecord*> borrower;
public:
    Library(string name);
    void setName(string name);
    string getName();
    void addBook(Book* book);
    void registerOneBorrower(BorrowerRecord* borrower);
    void display();
    void displayAllBooks();
    void displayAllBorrowers();
    void displayAll();
    ~Library();
};

// Book class implementation
Book::Book(string number, string author, string title) {
    this->setNumber(number);
    this->setAuthor(author);
    this->setTitle(title);
}

void Book::setNumber(string number) {
    this->number = number;
}

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setTitle(string title) {
    this->title = title;
}

string Book::getNumber() {
    return this->number;
}

string Book::getAuthor() {
    return this->author;
}

string Book::getTitle() {
    return this->title;
}

void Book::display() {
    cout << "Number: " << this->getNumber() << endl;
    cout << "Author: " << this->getAuthor() << endl;
    cout << "Title: " << this->getTitle() << endl;
}

BorrowerRecord* Book::getBorrower() {
    return this->borrower;
}

void Book::attachBorrower(BorrowerRecord* borrower) {
    this->borrower = borrower;
}

// BorrowerRecord class implementation
BorrowerRecord::BorrowerRecord(string theName) {
    this->setName(theName);
}

void BorrowerRecord::setName(string theName) {
    this->theName = theName;
}

string BorrowerRecord::getName() {
    return this->theName;
}

void BorrowerRecord::display() {
    cout << "Borrower: " << this->getName() << endl;
}

// Library class implementation
Library::Library(string name) {
    this->setName(name);
}

void Library::setName(string name) {
    this->name = name;
}

string Library::getName() {
    return this->name;
}

void Library::addBook(Book* book) {
    this->stock.push_back(book);
}

void Library::registerOneBorrower(BorrowerRecord* borrower) {
    this->borrower.push_back(borrower);
}

void Library::display() {
    cout << "Library Name: " << this->getName() << endl;
}

void Library::displayAllBooks() {
    for (Book* i : this->stock) {
        i->display();
    }
}

void Library::displayAllBorrowers() {
    for (BorrowerRecord* i : this->borrower) {
        i->display();
    }
}

void Library::displayAll() {
    this->display();
    this->displayAllBooks();
    this->displayAllBorrowers();
    cout << "----------------------------------------" << endl;
}

Library::~Library() {
    for (auto i : this->stock) {
        delete i;
    }
    this->stock.clear();
    for (auto i : borrower) {
        delete i;
    }
    this->borrower.clear();
}

//// Main function
//int main() {
//    cout << "The Library Application\n" << endl;
//
//    Book* first = new Book("000", "Aso Haro", "Alice in Borderland");
//    Book* second = new Book("001", "Ha Van Thao", "Co so lap trinh huong doi tuong");
//
//    Library* lib = new Library("HCMUS Library");
//    lib->display();
//    lib->addBook(first);
//    lib->addBook(second);
//    lib->displayAllBooks();
//
//    Library lib2("HCMUS Library 2");
//    lib2.display();
//
//    BorrowerRecord* borrower1 = new BorrowerRecord("Nguyen Van C");
//    BorrowerRecord* borrower2 = new BorrowerRecord("Nguyen Van B");
//    lib->registerOneBorrower(borrower1);
//    lib->registerOneBorrower(borrower2);
//    lib->displayAllBorrowers();
//
//    delete first;
//    delete second;
//    lib->~Library();
//    delete lib;
//
//    
//    return 0;
//}
////a
