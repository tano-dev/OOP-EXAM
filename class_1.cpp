#include <iostream>
#include <string.h>

using namespace std;
class person {
private:
	string theName;
	string theDateOfBirth;
public:
	person(string name, string birthdate) {
		this-> setName(name);
		this-> setBirth(birthdate);
	}
	void setName(string name) {
		this->theName = name;
	}
	void setBirth(string date) {
		this->theDateOfBirth = date;
	}
	string getName() {
		return this->theName;
	}
	string getBirth() {
		return this->theDateOfBirth;
	}
	void display() {
		cout << "Name: " << this->getName() << endl;
		cout << "Date of birth: " << this->getBirth() << endl;
	}
};
class Account {
private:
	int theID;
	string theName;
	int theBalance;
public:
	//Contructor
	Account (int id, string name, int balance) {
		this->setID(id);	
		this->setName(name);
		this->setBalance(balance);
		/*
		this->theID = id;
		this->theName = name;
		this->theBalance = balance;
		*/ 
		// Vi pham an ninh bao mat
	}
	//Access method
	//Setters
	void setID(int id) {
		this->theID = id;
	}
	void setName(string name) {
		this->theName = name;
	}
	void setBalance(int balance) {
		this->theBalance = balance;
	}
	//Getters
	int getID() {
		return this->theID;
	}
	string getName() {
		return this->theName;
	}
	int getBalance() {
		return this->theBalance;
	}
	//Output
	void display() {
		cout << "ID: " << this->getID() << endl;
		cout << "Name: " << this->getName() << endl;
		cout << "Balance " << this->getBalance() << endl;
	}
};
//int main() {
//	Account accClone69(1,"A",1000);
//	accClone69.display();
//
//	person p("Nuoc Tinh Khiet", "2005");
//	p.display();
//	return 0;	
//}