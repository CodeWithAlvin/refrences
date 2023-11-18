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