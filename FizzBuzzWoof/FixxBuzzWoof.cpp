#include<iostream>
using namespace std;

int main()
{
	int i;

	for (i = 1; i < 21; i ++ )
	{
		if ((i % 3) == 0 && ((i % 5) == 0))
			cout << "FizzBuzz\n" << endl; 
		else if ((i % 5) == 0)
			cout << "Buzz\n" << endl;
		else if ((i % 3) == 0)
			cout << "Fizz\n" << endl;
		else cout << i << "\n" << endl;

	}
}