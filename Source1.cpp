#include <iostream>
using std::string;

class Employee {
public:
	string Name;
	string Company;
	int Wage;
	int Age; 
	void printInfo() {
		std::cout << Name << " works at " << Company << " and earns " << Wage << " per month. He is " << Age << " years old." << std::endl;
	}
	void init(string name, string company, int wage, int age) {
		Name = name;
		Company = company;
		Wage = wage;
		Age = age;
	}
};

//int main() {
//    std::cout << "Hello world";
//	int number;
//	Employee employee1;
//	employee1.Name = "MrBeast";	
//	employee1.Company = "Youtube";
//	employee1.Wage = 1000000;
//	employee1.Age = 22;
//	std::cout << employee1.Name;
//	std::cout << employee1.Company;
//	std::cout << employee1.Age;
//	std::cout << employee1.Wage << std::endl;
//	Employee employee2;
//	employee2.init("tano", "Youtube", 2000, 20);
//	employee2.printInfo();	
//	return 0;
//}