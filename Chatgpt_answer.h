#pragma once

/*
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    // ������
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    // ������
    LinkedList() : head(nullptr) {}

    // �Ҹ���
    ~LinkedList() {
        // ����Ʈ �Ҹ� �� �޸� ����
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    // ��带 ����Ʈ�� ���� �߰�
    void appendNode(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            // ����Ʈ�� ������� ���
            head = newNode;
        }
        else {
            // ����Ʈ�� ������� ���� ���
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // ����Ʈ�� ������ ���
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

    // ��� �߰�
    linkedList.appendNode(3);
    linkedList.appendNode(5);
    linkedList.appendNode(7);

    // ����Ʈ ���
    linkedList.printList();

    return 0;
}
*/
