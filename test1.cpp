#include<iostream>
#include<string>
#include<list>

using namespace std;

class a; // Forward declaration
class b; // Forward declaration

class a {
private:
    int value1;
    int value2;
    b* b1;
    list<b*> b2;
public:
    //cons
    a() {
        this->value1 = 0;
        this->value2 = 0;
        this->b1 = nullptr;
    }
    a(int value1, int value2) {
        this->setValue1(value1);
        this->setValue2(value2);
    }
    //set
    void setValue1(int value1) {
        this->value1 = value1;
    }
    void setValue2(int value2) {
        this->value2 = value2;
    }
    //get
    int getValue1() {
        return this->value1;
    }
    int getValue2() {
        return this->value2;
    }
    //display
    void display() {
        cout << "Value1: " << this->getValue1() << endl;
        cout << "Value2: " << this->getValue2() << endl;
    }
    void showAll();
    //attach
    void addB(b* b1) {
        this->b1 = b1;
    }
    void removeB(b* b1) {
        this->b1 = nullptr;
    }
    void addB2(b* b2) {
        this->b2.push_back(b2);
    }
    ~a() {
        this->b1 = nullptr;
        for (auto i : this->b2) {
            delete i; // Ensure 'b' destructor is called
        }
        this->b2.clear();
    }
};

class b {
private:
    int beta1;
    int beta2;
    list<a*> a1;
public:
    //con
    b() {
        this->beta1 = 0;
        this->beta2 = 0;
    }
    b(int beta1, int beta2) {
        this->setBeta1(beta1);
        this->setBeta2(beta2);
    }
    //set
    void setBeta1(int beta1) {
        this->beta1 = beta1;
    }
    void setBeta2(int beta2) {
        this->beta2 = beta2;
    }
    //get
    int getBeta1() {
        return this->beta1;
    }
    int getBeta2() {
        return this->beta2;
    }
    //display
    void display() {
        cout << "Beta1: " << this->getBeta1() << endl;
        cout << "Beta2: " << this->getBeta2() << endl;
    }
    //attach
    void addA(a* a1) {
        this->a1.push_back(a1);
    }
    void removeA(a* a1) {
        this->a1.remove(a1);
    }
    void detachA(a* a1) {
        this->a1.remove(a1);
    }
    void clearA() {
        this->a1.clear();
    }
    void displayA() {
        cout << "List a: " << endl;
        for (auto i : this->a1) {
            i->display();
        }
    }
    //destructor
    ~b() {
        for (auto i : this->a1) {
            delete i; // Ensure 'a' destructor is called
        }
        this->a1.clear();
    }
};

void a::showAll() {
    cout << "Value1: " << this->getValue1() << endl;
    cout << "Value2: " << this->getValue2() << endl;
    if (this->b1 != nullptr) {
        this->b1->display();
    }
    cout << "Books in Library: " << endl;
    for (auto i : this->b2) {
        cout << "Book: " << endl;
        i->display();
        cout << endl;
    }
};

int main() {
    a* a1 = new a(1, 2);
    b* b1 = new b(3, 4);
    a1->addB(b1);
    b1->addA(a1);
    a1->display();
    b1->display();
    cout << "----------------------------------------" << endl;
    a1->showAll();
    b1->displayA();
    delete a1;
    delete b1;
    return 0;
}
