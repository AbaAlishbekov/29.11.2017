#include"stdafx.h"

using namespace std;

class List {
private:
	class Element {
	public:
		Element(int value) {
			this->value = value;
			next = NULL;
		}
		int value;
		Element *next;
	};
	Element *first;
	List() {
		first = NULL;
	}
	void add(int value) {
		if (first == NULL) {
			first = new Element(value);
		}
		else {
			Element *it = first;
			while (it->next != NULL) {
				it = it->next;
			}
			it->next = new Element(value);
		}
	}
	void show() {
		Element *it = first;
		while (it->next != NULL) {
			cout << it->value;
			it = it->next;
		}
	}
};

class Human {

};
class Country {
	Human *people;
	Country(const int &size) {
		people = new Human[size];
	}
	~Country() {
	}
};

int main()
{
	return 0;
}