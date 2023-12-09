#pragma once
#include "Node.h"
class Linkedlist {
private:
	// Member data
	Node* headNode; // Node class ��ü ���� Node* �� �ƴϰ� class ��ü�� ����Ű�� ptr �� ����

public:
	// Constructor
	Linkedlist() {
		headNode = nullptr;
	}

	// DeConstructor
	~Linkedlist() {
		Node* currentNode = headNode;
		Node* next;
		while (currentNode != nullptr) {
			next = currentNode->nextNode;
			delete currentNode;
			currentNode = next;
		}
		if (headNode != nullptr) {
			headNode = nullptr;
		}
	}
	// Member Functions
	void insertvalue(int value) {
		Node* newNode = new Node(value); // new : ���� �޸� �Ҵ�
		if (headNode == nullptr) {
			headNode = newNode;
		}
		else {
			Node* currentNode = headNode;
			while (currentNode->nextNode != nullptr) { // headNode ���� tailNode ���� �̵� O(N)
				currentNode = currentNode->nextNode; // nextNode �� currentNode �� ����
			}
			currentNode->nextNode = newNode;
		}
	}
	int len() {
		Node* currentNode = headNode;
		int cnt = 1;
		while (currentNode != nullptr) {
			currentNode = currentNode->nextNode;
			cnt++;
		}
		return cnt;
	}

	void print_all() {
		Node* currentNode = headNode;
		while (currentNode != nullptr) {
			cout << currentNode->value << endl; // value ���
			currentNode = currentNode->nextNode; //  nextNode �� �̵�
		}
	}

	int operator[](int n) {
		Node* currentNode = headNode;
		int cnt = 1;

		while (currentNode != nullptr) {
			if (cnt == n) {
				return currentNode->value;
			}
			currentNode = currentNode->nextNode;
			cnt++;
		}
	}

	void print_val_nth_node(int n) {
		// n ��° node �� value �� return
		Node* currentNode = headNode;
		int cnt = 1;
		while (cnt != n) {
			cnt++;
			currentNode = currentNode->nextNode;
		}
		cout << n << "�� ° node�� value : " << currentNode->value;
	}
};