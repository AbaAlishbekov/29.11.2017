#include "DoubleLinkedList.h"
#include "Element.h"
#include "stdafx.h"

//template<typename T>
DoubleLinkedList::DoubleLinkedList()
{
	
	first = last = NULL;

}
//template<typename T>
DoubleLinkedList::~DoubleLinkedList()
{
	
}

//template<typename T>
void DoubleLinkedList::addToLast(const int &value)
{
	if (first == NULL)
	{
		last = first = new Element(value);
	}
	else
	{
		Element *temp = new Element(value);
		// создаем следующий временный элемент
		last->next = temp;
		//”казание на предыдущий элемент
		temp->prev = last;
		//”казываем на последний элемент
		last = temp;
	}
}

//template<typename T>
void DoubleLinkedList::addToFirst(const int &value)
{
	if (first == NULL)
	{
		last = first = new Element(value);
	}
	else
	{
		Element *temp = new Element(value);
		first->prev = temp;
		temp->next = first;
		first = temp;
	}
}

//template<typename T>
void DoubleLinkedList::show()
{
	if (first == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
	{
		Element  *temp = first;
		for (Element  *temp = first; temp!=NULL; temp=temp->next )
		{
			cout << temp->value << '\t';
		}
		/*while (temp != NULL)
		{
			cout << temp->value << '\t';
			temp = temp->next;
		}*/
	}
}

