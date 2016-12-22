#ifndef MYFONCTOR_H_INCLUDED
#define MYFONCTOR_H_INCLUDED

class MyFonctor
{
public:
	int operator()(int, int);

};

int MyFonctor::operator()(int a, int b)
{
	return a + b;

}
#endif // !MYFONCTOR_H_INCLUDED
