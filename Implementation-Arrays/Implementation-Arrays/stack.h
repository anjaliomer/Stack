#pragma once
#define max_sz 1000

class stack
{
	int top = -1;

public:

	int a[max_sz];
	stack();
	bool push(int);
	int pop();
	bool isEmpty();
};

