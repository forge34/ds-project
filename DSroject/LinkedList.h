#pragma once
#include "Node.h"
#include <iostream>

template <class T>
class LinkedList
{
public :
	Node<T>* head;
	LinkedList();
	bool is_empty();
	int count();
	void insert_first(T data);
};

template<class T>
LinkedList<T>::LinkedList()
{
    this->head = NULL;
}

template<class T>
bool LinkedList<T>::is_empty()
{
    return (this->head == NULL);
}

template<class T>
void LinkedList<T>::insert_first(T data)
{
    Node<T>* newnode = new Node<T>;
    newnode->data = data;
    if (this->is_empty()) {

        newnode->next = NULL;
        this->head = newnode;
    }
    else {


        newnode->next = this->head;
        this->head = newnode;
    }
}

template<class T>
int LinkedList<T>::count()
{
    int count = 0;

    Node <T>* temp = this->head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;

    }
    return count;
}