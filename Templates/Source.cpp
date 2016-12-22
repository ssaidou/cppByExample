#include <iostream>
#include <string>
#include "MyStack.h"


using namespace std;

int main()
{
	MyStack<int> intStack;
	intStack.push(123456);
	cout << intStack.top() << endl;

	MyStack<string> stringStack;
	stringStack.push("abcdefghijklmnopqrstuvwxyzABCDEF");
	cout << stringStack.top() << endl;


	return 0;
}