#include <iostream>
#include <string>


using namespace std;

string f(string& name)
{
	name = "The Two Towers";
	return name;
}

int f(int *i)
{
	return *i;
}

int main()
{
	int y(2003);
	int* p(0);

	p = &y;

	int const myVar(10);

	string name("The Lord of the Rings is a film series consisting of three");
	string film("The Return of the King");

	cout << name << endl;

	f(name);

	cout << name << endl;

	cout << film << " (" << *p << ")" << endl;
	
	return 0;
}