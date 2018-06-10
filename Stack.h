#include "LinkedList.h"

class stack { /*This is a stack. It is essentially the same as the linkedlist, except that Add has been changed to push, and
			  now pop is remove but it also returns the value stored by the tail before deleting it*/
public:
	LinkedList * ll = new LinkedList();
	int count = 0;
	stack()
	{

	}

	void push(int val) //adds a value
	{
		ll->Add(val);
		count++;
	}

	int pop() // returns the tail's value and deletes the tail
	{
		int value = ll->getTail()->getValue();
		ll->Remove();
		return value;
	}

	node * peek() /* Peek was origionally created for helping me debug. I ended up using it in my code.
				  It does what Peek is supposed to do (pop without removing the item)*/
	{
		return ll->getTail();
	}

};
