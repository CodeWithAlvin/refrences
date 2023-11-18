#include <iostream>
using namespace std;

class Employee{
public: // public | private | protected
	string name;
	int salary;

	// init function
	Employee(string name, int salary,string secret){
		this->name = name;
		this->salary = salary;
		this->secret = secret;
	}

	void info(){
		cout << "<Employee> name : " << this->name << "   salary : " << this->salary;
	}

	void getSecret(){
		cout << " secret password is " << this->secret;
	}

private:
	string secret;

};


// inheritance

class Programmer : public Employee
{
public:
	string language;

	Programmer(string name, int salary,string secret,string language) : Employee(name,salary,secret) {
		this->language = language;
	}

	void languageDetails(){
		info(); // inhrited function
		cout << " Programming Freak of " << this->language;
	}
};






int main()
{
	Employee john("JohnDoe",5690,"jkdfusyr9jn");
	// john.name = "johndoe";
	// john.salary = 78900;

	john.info();
	john.getSecret();
	// john.secret; gives error because it is private

	Programmer rahul("Rahul",93749,"skdjf","Scrach");

	rahul.languageDetails();

	return 0;
}