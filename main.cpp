#include <iostream>
using namespace std;
#include "Linkedlist.h"

void main() {
	Linkedlist ex;

	ex.insertvalue(3);
	ex.insertvalue(5);
	ex.insertvalue(4);
	ex.insertvalue(1);
	ex.insertvalue(7);
	delete ex;
}
