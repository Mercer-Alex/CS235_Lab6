#pragma once
#include <stdexcept>
#include <string>
#include <iostream>
#include "LinkedListInterface.h"

using namespace std;

template<typename T>
class LinkedList: public LinkedListInterface<T> {
private:
    struct Node {
        T value;
        Node* next;
    };
    Node* head;
    int _size;

public:

    LinkedList(void) {
        head = nullptr;
        _size = 0;
    };
    ~LinkedList(void) { };

    bool is_empty() {
        return _size == 0;
    }

    bool ifDuplicate(T value) {
        for (Node* node = head; node != nullptr; node = node->next) {
            if (value == node->value) {
                return false;
            }
        }
        return true;
    }

    void insertHead(T value) {
        struct Node* new_node = new Node{value};

        if (head == nullptr) {
            head = new_node;
        }
        else if (ifDuplicate(value)) {
            Node* temp_node = head;
            head = new_node;
            new_node->next = temp_node;
        }
        _size++;
    }

    void insertTail(T value) {
        struct Node* new_node = new Node{value};

        if(is_empty()) {
            head = new_node;
        }

        if (ifDuplicate(value)) {
            Node* node;
            for (node = head; node != nullptr; node = node->next) {
                if (node->next == nullptr) {
                    node->next = new_node;
                    break;
                }
            }
            _size++;
        }
    }

    void insertAfter(T value, T insertionNode) {
        struct Node* new_node = new Node{value};

        if(ifDuplicate(value) && !ifDuplicate(insertionNode)) {
            Node* iterate_node = head;

            while(iterate_node->value != value) {
                if (iterate_node->value == insertionNode) {
                    Node* temp_node = iterate_node->next;
                    iterate_node->next = new_node;
                    new_node->next = temp_node;
                    _size++;
                }
                iterate_node = iterate_node->next;
            }
        }
    }

    /*
    remove

    The node with the given value should be removed from the list.

    The list may or may not include a node with the given value.
    */
    void remove(T value) {}


    void clear() {
        if (is_empty()) {
        }
        else {
            Node* old_head = head;
            head = head->next;
            delete old_head;
            _size--;
        }
    }

    T at(int index) {
        if ((index < 0) || (index >= size())) {
            throw out_of_range("out of range");
        }
        else {
            Node* temp_node = head;
            for (int i = 0; i < index; ++i) {
                temp_node = temp_node->next;
            }
            return temp_node->value;
        }

    }

    int size() {
        return _size;
    }

    string toString() {
        stringstream ss;
        for (Node* node = head; node != nullptr; node = node->next) {
            ss << node->value;
            if (node->next != nullptr) {
                ss << " ";
            }
        }
        return ss.str();
    }

};
