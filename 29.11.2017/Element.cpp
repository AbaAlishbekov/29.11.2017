#include "Element.h"
#include"stdafx.h"

//template <typename T>
Element::Element()
{
}

//template<typename T>
Element::Element(const int &value)
{
	this->value = value;
	prev = next = NULL;
}

//template <typename T>
Element::~Element()
{
}

