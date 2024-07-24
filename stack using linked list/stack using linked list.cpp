// stack using linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}

};

class Stack
{
	Node* top;

public:
	Stack()
	{
		top = NULL;
	}
	bool isEmpty()
	{
		if (top == NULL)
			return true;
		else
			return false;
	}
	bool isFull()
	{
		Node* ptr = new Node();
		if (ptr == NULL)
			cout << "The Stack is Full , cannot add more items \n";
	}

	void push(int item)
	{
		Node* newnode = new Node();
		newnode->data = item;
		if (isEmpty())
		{
			newnode->next = NULL;
			top = newnode;
		}
		else
		{
			newnode->next = top;
			top = newnode;
		}
	}

	int pop()
	{
		int value;
		Node* delptr = top;
		value = top->data;
		top = top->next;
		delete delptr;
		return value;
	}

	int Peek()
	{
		return top->data;
	}






	void display()
	{
		Node* temp = top;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	int  count()
	{
		int counter = 0;
		Node* temp = top;
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;
		}
		return counter;
	}

	bool IsFound(int item)
	{
		bool found = false;
		Node* temp = top;
		while (temp != NULL)
		{
			if (temp->data == item)
				found = true;
			temp = temp->next;
		}
		return found;
	}

};


int main()
{
	int item;
	Stack s;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Item to push \n";
		cin >> item;
		s.push(item);
		s.display();
	}

	/*cout << s.pop() << " was deleted from stack \n";
	s.display();
	cout << s.pop() << " was deleted from stack \n";
	s.display();*/
	cout << "Enter Item to search for \n";
	cin >> item;

	if (s.IsFound(item))
		cout << "Is Found \n";
	else
		cout << "Not found \n";
	cout << s.count() << endl;

}// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
