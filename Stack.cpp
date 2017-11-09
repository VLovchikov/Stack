// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>

using namespace std;


class Stack
{
	int *a;
	int top;
	int size;
public:
	Stack(int s)
	{
		size=s;top=-1;
		a=new int [size];
	}
	Stack(Stack &s)
	{
		top=s.top;size=s.size;
		a=new int [size];
		for(int i=0;i<=top;i++)
		{
			a[i]=s.a[i];
		}
	}
	Stack &operator=(Stack &s)
	{
		if(this==&s) return *this;
		delete [] a;
		top=c.top;
		size=s.size;
		a=new int [size];
		for(int i=0;i<=top;i++)
		{
			a[i]=s.a[i];
		}
	}
	bool isFull()
	{
		return (top==size-1);
	}
	bool isEmpty()
	{
		return (top==-1)
	}
	void push(int v)
	{
		if (this->isFull()) throw -1;
		top++;a[top]=v;
	}
	int pop()
	{
		if (this->isEmpty()) throw -2;
		return a[top--];
	}
}




int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

