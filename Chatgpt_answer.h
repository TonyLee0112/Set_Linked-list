#pragma once

/*
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    // 생성자
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    // 생성자
    LinkedList() : head(nullptr) {}

    // 소멸자
    ~LinkedList() {
        // 리스트 소멸 시 메모리 해제
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    // 노드를 리스트의 끝에 추가
    void appendNode(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            // 리스트가 비어있을 경우
            head = newNode;
        }
        else {
            // 리스트가 비어있지 않을 경우
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // 리스트의 내용을 출력
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList linkedList;

    // 노드 추가
    linkedList.appendNode(3);
    linkedList.appendNode(5);
    linkedList.appendNode(7);

    // 리스트 출력
    linkedList.printList();

    return 0;
}
*/
