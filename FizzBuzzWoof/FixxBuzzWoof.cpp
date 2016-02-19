#include<iostream>
using namespace std;

int main()
{
	int i;

	for (i = 1; i < 21; i ++ )
	{
		if ((i % 3) == 0 && ((i % 5) == 0))
			cout << "\tFizzBuzz\n" << endl; 
		else if ((i % 5) == 0)
			cout << "\tBuzz\n" << endl;
		else if ((i % 3) == 0)
			cout << "\tFizz\n" << endl;
		else cout <<"\t"<< i << "\n" << endl;

	}
}