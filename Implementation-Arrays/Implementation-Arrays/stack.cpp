#include "stdafx.h"
#include "stack.h"
#include <iostream>

using namespace std;


stack::stack()
{
	top = -1;
}

bool stack::push(int x) 
{
	if (top >= max_sz)
	{
		cout << "\nStack Overflow\n";
		return false;
	}
	else
	{
		a[++top] = x;
		return true;
	}
}

int stack::pop()
{
	if (top < 0)
	{
		cout << "\nStack Underflow\n";
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}

bool stack::isEmpty()
{
	return (top < 0);
}


