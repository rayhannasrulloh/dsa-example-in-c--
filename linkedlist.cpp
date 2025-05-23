#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main(){

    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node();
    head->data = 1;
    head->next = nullptr;

    second = new Node();
    second->data = 2;
    second->next = nullptr;
    head->next = second;

    third = new Node();
    third->data = 3;
    third->next = nullptr;
    second->next = third;

    Node* current = head;
    std::cout << "Linked List elements: ";
    while (current != nullptr) 
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;

    delete third;
    delete second;
    delete head;
    
    return 0;
}