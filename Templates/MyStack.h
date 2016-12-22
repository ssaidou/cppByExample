#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED

#include <vector>

template <class T>
class MyStack
{
public:
	void push(T const&);
	void pop();
	T top();


private:
	std::vector<T> elems;

};

template <class T>
void MyStack<T>::push(T const& elem)
{
	elems.push_back(elem);
}

template <class T>
void MyStack<T>::pop()
{
	elems.pop_back();
}

template <class T>
T MyStack<T>::top()
{
	return elems.back();
}
#endif //MYSTACK_H_INCLUDED

