#include <iostream>  
using namespace std;

int main()
{
	// do while 
	// sh
	int num = 100;
	
	do
	{
		int a = num / 100;
		int b = (num - a * 100) / 10;
		int c = (num - a * 100 - b * 10);
		int d = a * a * a + b * b * b + c * c * c;

		if (d = num)
			cout << num << endl;

		num++;

	} while (num <1000);


	system("pause");
	
	return 0;
}

