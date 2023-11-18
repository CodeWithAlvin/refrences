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