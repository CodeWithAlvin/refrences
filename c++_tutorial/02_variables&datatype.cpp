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

