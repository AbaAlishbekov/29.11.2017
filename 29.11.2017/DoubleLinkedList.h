#pragma once
#include "stdafx.h"
#include"Element.h"

//template<typename T>
class DoubleLinkedList
{
public:
	Element  *first, *last;
	DoubleLinkedList();
	~DoubleLinkedList();
	void addToLast(const int &);
	void addToFirst(const int &);
	void show();
};
