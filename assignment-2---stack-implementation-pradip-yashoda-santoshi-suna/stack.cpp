// This is the header file used in other files as stack.cpp
#include <iostream>
using namespace std;

class Stack
{
public:
	int top;
	int maxSize;
	int *array;
	int a;
	Stack(int max) // Constructor for creating stack
	{
		top = -1;
		maxSize = max;
		array = new int[max];
	}

	bool isFull()
	{
		 return top == maxSize - 1;
	}

	bool isEmpty()
	{
		 return (top < 0);
	}

	int push(int x)
	{

		if (top >= (maxSize - 1))
		{
			cout << "Stack Overflow";
			return false;
		}
		else
		{
			top++;
			array[top]=x;
			cout << x << " pushed into stack\n";
			return true;
		}
	}

	int pop()
	{
		if (top < 0)
		{
			cout << "Stack Underflow i.e No elements to pop";
			return 0;
		}
		else
		{
			int x = array[top--];
			return x;
		}
	}

	int peek()
	{
		if (top < 0)
		{
			cout << "Stack is Empty";
			return 0;
		}
		else
		{
			int x = array[top];
			return x;
		}
	}

	void displayStack()
	{
		if (isEmpty())
		{
			cout << "Stack is empty!\n";
		}
		else
		{
			cout << "\nStack: ";
			for (int i = 0; i <= top; i++)
				cout << array[i] << " ";
			cout << "\n";
		}
	}
};
