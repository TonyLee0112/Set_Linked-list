#pragma once
#include "Node.h"
class Linkedlist {
private:
	// Member data
	Node* headNode; // Node class 객체 안의 Node* 가 아니고 class 객체를 가리키는 ptr 로 선언

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
		Node* newNode = new Node(value); // new : 동적 메모리 할당
		if (headNode == nullptr) {
			headNode = newNode;
		}
		else {
			Node* currentNode = headNode;
			while (currentNode->nextNode != nullptr) { // headNode 부터 tailNode 까지 이동 O(N)
				currentNode = currentNode->nextNode; // nextNode 로 currentNode 를 변경
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
			cout << currentNode->value << endl; // value 출력
			currentNode = currentNode->nextNode; //  nextNode 로 이동
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
		// n 번째 node 의 value 를 return
		Node* currentNode = headNode;
		int cnt = 1;
		while (cnt != n) {
			cnt++;
			currentNode = currentNode->nextNode;
		}
		cout << n << "번 째 node의 value : " << currentNode->value;
	}
};