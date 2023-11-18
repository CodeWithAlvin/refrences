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