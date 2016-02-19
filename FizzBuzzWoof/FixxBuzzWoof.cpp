//Name:Ruvania Naicker
//Student Number: 214521716
//Computer Methods 3 : Tutorial 1

#include<iostream>
using namespace std;

int main()
{
	int i;

	for (i = 1; i < 51; i ++ ) //counter from 1 to 50
	{
		if (((i % 3) == 0) && ((i % 5) == 0) && ((i % 7) == 0))//divisible by 3,5,7 prints FizzBuzzWoof
			cout << "\tFizzBuzzWoof\n" << endl;
		else if ((i % 3) == 0 && ((i % 5) == 0)) //divisible by 3 and 5 prints FizzBuzz
			cout << "\tFizzBuzz\n" << endl;
		else if ((i % 3) == 0) && ((i % 7) == 0))//divisible by 3 and 7 prints FizzWoof
			cout << "\tFizzWoof\n" << endl;
		else if ((i % 5) == 0) && ((i % 7) == 0))//divisible by 5 and 7 prints BuzzWoof
			cout << "\tBuzzWoof\n" << endl;
		else if ((i % 5) == 0) //divisible by 5 prints Buzz
			cout << "\tBuzz\n" << endl;
		else if ((i % 3) == 0) //divisible by 3 prints Fizz
			cout << "\tFizz\n" << endl;
		else if ((i % 7) == 0) //divisible by 7 prints Woof
			cout << "\tWoof\n" << endl;
		else cout <<"\t"<< i << "\n" << endl; //not divisible by 3 or 5 prints number

	}
	
}

