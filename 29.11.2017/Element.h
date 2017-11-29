#pragma once
#include"stdafx.h"
//template <typename T>
class Element
{
	
public:
	Element();
	//Element<T> *prev, *next;
	Element(const int &);
	~Element();
	int value;
	Element *prev, *next;
};

