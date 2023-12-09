#pragma once
class Node {
public:
	int value;
	Node* nextNode; // Pointer for the next node

	// Constructor - Initialize a Node object
	Node(int input_value) { // Node 만들기
		value = input_value;
		nextNode = nullptr;
	}
};
