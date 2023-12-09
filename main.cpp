#include <iostream>
using namespace std;
#include "Linkedlist.h"

void main() {
	Linkedlist obj;
	
	cout << "Let me know length of the Linkedlist" << endl;
	int len_list; cin >> len_list;
	while (len_list != 0) {
		cout << "Type number : " << endl;
		len_list--;
		int a;
		cin >> a;
		obj.insertvalue(a);
	}
	cout << "Linkedlist is ready to use" << endl;

	while (true) {
		int Mode_num;
		cout << "Select the function in Linkedlist" << endl;
		cout << "1. Show length                   " << endl;
		cout << "2. Print all of the values       " << endl;
		cout << "3. Show nth value                " << endl;
		cout << "4. Exit                          " << endl;
		cin >> Mode_num;

		switch (Mode_num) {
		case 1:
			cout << "Length of the list is : " << obj.len() << endl;
			break;
		case 2:
			cout << "values of the list are : ";
			obj.print_all();
			break;
		case 3:
			cout << "Type index number" << endl;
			int a;
			cin >> a;
			if (obj.len() >= a) {
				cout << a << "th node's number is " << obj[a] << endl;
			}
			else {
				cout << " Wrong index number has been typed in. Please choose another number." << endl;
			}
		case 4:
			break;
		default:
			cout << "Please select one number among 1~4" << endl;
		}
		cout << endl;
	}
}
