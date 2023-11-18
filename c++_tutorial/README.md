# helloworld

```
#include <iostream>
using namespace std;

int main()
{
	// print the string to console
	cout << "Hello World";
	// to use newline do endl OR \n
	cout << "Hello," << endl << "This is \nalvin";
	return 0;
}
```

# variables&datatype

```
#include <iostream>
using namespace std;

// genrally use camelCase

int main()
{
	// pre declaration
	int a,b,c;
	// declaration and assining
	// amount of byte taken depend upon your hardware archeticture
	// short < int < long < long long     --> No of bytes
	// float < double < long double		  ---> Precision

	int d = 2;
	short e = 67;
	long f = 65;
	long long g = 78;
	float const score = 99.1; // const doesnt change once assinged
	double score2 = 99.16;
	long double score3 = 99.16574;
	string str = "this is me ";
	bool isCorrect = true;

	// reassingning value
	g=75;
	str = "my percentile is ";
	cout << str << score;
	cout << endl << g;
	return 0;
}


```

# userinput

```
#include <iostream>
using namespace std;

int main()
{
	int a,b;

	cout << "Lets Add Two Number\n";

	cout << "Enter first Number : ";
	cin >> a; 


	cout << "Enter second Number : ";
	cin >> b; 

	cout << a+b;
	return 0;
}
```

# operators

```
#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = 7;
	cout << "a is " << a << " b is " << b << endl;
	cout << "a+b is " << a+b << endl;
	cout << "a-b is " << a-b << endl;
	cout << "a*b is " << a*b << endl;
	cout << "a/b is if only int is used " << a/b << endl;
	cout << "a/b is if typecast to float " <<(float) a/b << endl;
	cout << "a%b is " << a%b << endl;

	cout << "a==b is " << (a==b) << endl;
	cout << "a!=b is " << (a!=b) << endl;
	cout << "a>b is " << (a>b) << endl;
	cout << "a<b is " << (a<b) << endl;
	cout << "a>=b is " << (a>=b) << endl;
	cout << "a<=b is " << (a<=b) << endl;

	cout << "a&&b is " << (a&&b) << endl;
	cout << "a||b is " << (a||b) << endl;
	cout << "!b is " << !b << endl;
	
	// there is also
	// +=
	// -=
	// *=
	// /=
	// %=
	// ++
	// --
	// & Bitwise AND 
	// | Bitwise OR
	// ^ Bitwise XOR
	// ~ Bitwise NOT
	// << Bitwise LEFT SHIFT
	// >> Bitwise RIGHT SHIFT
	
	return 0;
}
```

# conditionals

```
#include <iostream>
using namespace std;

int main()
{
	int const age = 17;
	int const haveLiscense = true;

	// Example 1
	if (age >= 18)
	{
		cout << "You are now a Major Citizen" << endl;
	}
	else if (age >=16)
	{
		cout << "You are going to be a Major Citizen" << endl;
	}

	// Example 2
	if (age > 18 && haveLiscense)	
	{
		cout << "You can Drive" << endl;
	}
	else
	{
		cout << "You are free to break rules" << endl;
	}

	// Switch case

	switch (age)
	{
	case 10:
		cout << "Astronaut";
		break;
	case 12:
		cout << "Pilot";
		break;
	case 14:
		cout << "ARMY";
		break;
	case 16:
		cout << "Engineer";
		break;
	case 18:
		cout << "Shit Poster";
		break;
	default:
		break;
	}

	
	return 0;
}
```

# loops

```
#include <iostream>
using namespace std;

int main()
{
	int index = 0;
	// while
	while (index<34){
		printf("%d\n", index);
		index++;
	}
	// do while 
	do{
		printf("DO while %d\n",index );
	}while(index < 33);

	// for
	for (int i = 0; i < 20; ++i)
	{
		printf("%d\n",i );
	}
	return 0;
}
```

# functions

```
#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

// returnType name(argument with tpe){
	// function code
// }

int main()
{
	int result = add(45,2);
	printf("%d\n",result );
	return 0;
}
```

# array

```
#include <iostream>
using namespace std;

int main()
{
	int arr[3] = {1,5,6}; //of given length
	int arr2[] = {1,4,6,8,4,7};

	printf("%d",arr[2]);


	// 2d array

	int arr2d[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	printf("%d\n",arr2d[1][2] );
	return 0;
}
```

# strings

```
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "johndoe";

	cout <<name.length() << endl;
	cout << name.substr(1,4) << endl;
	cout <<name.empty() << endl; // check if empty
	cout <<name.append("john") << endl; // append at last
	cout <<name.insert(3,"the") << endl; // insert at a purticular place
	cout <<name.find("the") << endl; // find for the
	cout <<name.erase(2,5) << endl; // erase from index 2,5
	cout <<name.c_str() << endl; //return pointer to null terminated character
	// cout <<name.clear() << endl; // clear string

	return 0;
}
```

# pointer

```
#include <iostream>
using namespace std;

int main()
{
	int var = 4;
	int* ptrvar = &var;

	cout << var << endl;
	cout << ptrvar << endl;
	cout << *ptrvar << endl;

	return 0;
}
```

# classes&Objects

```
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
```