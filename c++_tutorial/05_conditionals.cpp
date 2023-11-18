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