#include"stdafx.h"
#include "stack.h"
#include<iostream>

using namespace std;

int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " poped out of the stack" << endl;
	cout << s.pop() << " poped out of the stack" << endl;
	cout << s.pop() << " poped out of the stack" << endl;
	return 0;
}
