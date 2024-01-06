//MoveStack.cpp
//MoveStack.h function file
#include "MoveStack.h"

MoveStack::MoveStack()
{
	head = nullptr;
}

int MoveStack::getSize()
{

	int count = 0;
	for (Node* currNode = head; currNode != nullptr; currNode = currNode->next)
	{
		count++;
	}
	return count;

}

void MoveStack::push(Move move)
{
	Node* Pusher = new Node;
	Pusher->a = move.x;
	Pusher->b = move.y;

	Pusher->next = head;
	head = Pusher;


}

Move MoveStack::top()
{
	Move OnTop;
	OnTop.x = head->a;
	OnTop.y = head->b;
	return OnTop;
}

void MoveStack::pop()
{
	Node* Popper = head;
	head = head->next;
	delete Popper;

}

MoveStack::~MoveStack()
{
	for (int i = 0; i < this->getSize(); i++)
	{
		pop();
	}
}