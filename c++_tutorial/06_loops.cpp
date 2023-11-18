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