// this stack is functionally impelemented without any classes  

#include <iostream>
using namespace std;

const int s = 20;
int top = -1, arr[s];
bool isFull()
{
	return top == s - 1;
}
bool isEmpty()
{
	return top == -1;
}
void push(int value)
{
	if (isFull())
	{
		cout << "Stack is overflow" << endl;
		return;
	}
	top++;
	arr[top] = value;
}
void pop()
{
	if (isEmpty())
	{
		cout << "stack is underflow" << endl;
		return;
	}

	cout << "the poped value is : " <<arr[top] << endl;
	top--;
}
void print()
{
	int ind = top;
	cout << "the stack contents : " << endl;
	cout << "top --->";
	while (ind >= 0)
	{
		cout <<arr[ind] << endl;
		ind--;
	}
}
int main()
{
	push(10);
	push(12);
	push(11);
	push(51);
	push(30);
	push(5);
	print();
	pop();
	print();

}
