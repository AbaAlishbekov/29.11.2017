#include "stdafx.h"
#include "Element.h"
#include "DoubleLinkedList.h"

int main() {


	DoubleLinkedList  *a = new DoubleLinkedList();
	a->addToLast(5);
	a->addToLast(6);
	a->addToLast(4);
	a->show();


	delete a;
	system("pause");
	return 0;
}
