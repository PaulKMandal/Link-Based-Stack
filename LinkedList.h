#include "node.h"
#include <iostream>

using namespace std;

class LinkedList { //This is a linked list. It works simply by indexing the tail of the node
public:

	node * tail = nullptr;

	LinkedList()
	{

	}

	void Add(int val) //Works by simply changing the tail to the new node
	{
		tail = new node(val, tail); //creates a new node consisting of a value and the index of the last tail
	}

	void Remove() //Removes the tail by setting it to the index of the link stored by the node
	{
		if (tail != nullptr)
		{
			tail = tail->getLink();
		}
		else
		{
			cout << "Error, LinkedList is empty.\n";
		}
	}

	void print()
	{
		if (tail == nullptr)
		{
			cout << "No values in list.\n";
		}

		else
		{
			node * temp = tail;
			cout << "The values in the list are: \n";
			while (temp != nullptr)
			{
				cout << temp->getValue() << "\n";
				temp = temp->getLink();
			}
		}
	}

	node * getTail()
	{
		return tail;
	}
};
