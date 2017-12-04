#include "stdafx.h"




using namespace std;

class Human {
protected:
	string *name;
	int *number;
public:
	Human(){}
	Human(string name, int number) {
			
		this->name = new string (name);
		this->number = new int (number);
	
	};
	~Human()
	{
		delete name;
		delete number;
	}

};

class Student : Human {
public:

	string *group;

	Student() {

	}
	Student(string group) {

	this->group = new string(group);
	}
	
	void show() {
		cout << *name << endl;
		cout << *number << endl;
		cout << *group << endl;
	}
	~Student()
	{
		delete group;
	}
};

class Cop : Human {
	Cop() {
	
	
	}
	~Cop()
	{

	}
};

int main() {

	Human a("Katya", 8708);
	Student b("PUB.162.1");

	b.show();

	system("pause");
	return 0;
}