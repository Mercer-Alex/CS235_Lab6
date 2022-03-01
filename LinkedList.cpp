////
//// Created by mercera on 2/24/22.
////
//#include <sstream>
//#include "LinkedList.h"
//
//template <typename T>
//
///*
//   insertHead
//
//   A node with the given value should be inserted at the beginning of the list.
//
//   Do not allow duplicate values in the list.
//   */
//
///*
//insertTail
//
//A node with the given value should be inserted at the end of the list.
//
//Do not allow duplicate values in the list.
//*/
//template <typename T>
//void LinkedList<T>::insertTail(T value) {
//
//}
//
///*
//insertAfter
//
//A node with the given value should be inserted immediately after the
//node whose value is equal to insertionNode.
//
//A node should only be added if the node whose value is equal to
//insertionNode is in the list. Do not allow duplicate values in the list.
//*/
//template <typename T>
//void LinkedList<T>::insertAfter(T value, T insertionNode) {
//
//}
//
///*
//remove
//
//The node with the given value should be removed from the list.
//
//The list may or may not include a node with the given value.
//*/
//template <typename T>
//void LinkedList<T>::remove(T value) {
//
//}
//
///*
//clear
//
//Remove all nodes from the list.
//*/
//template <typename T>
//void LinkedList<T>::clear() {
//
//}
//
///*
//at
//
//Returns the value of the node at the given index. The list begins at
//index 0.
//
//If the given index is out of range of the list, throw an out of range exception.
//*/
//template <typename T>
//T LinkedList<T>::at(int index) {
//    if ((index < 0) || (index >= size())) {
//        throw out_of_range("out of range");
//    }
//}
//
///*
//size
//
//Returns the number of nodes in the list.
//*/
//template <typename T>
//int LinkedList<T>::size() {
//
//}
//
//template <typename T>
//string LinkedList<T>::toString() {
//    stringstream ss;
//    for (Node* node = head; node != nullptr; node = node->next) {
//        ss << node->value;
//        if (node->next != nullptr) {
//            ss << " ";
//        }
//    }
//    return ss.str();
//}
//template <typename T>
//bool ifDuplicate(T value) {
//    while (node->next != nullptr) {
//        if (value == node->value()) {
//            return false;
//        }
//    }
//    return true;
//}
