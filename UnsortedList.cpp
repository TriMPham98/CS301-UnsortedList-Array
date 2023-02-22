
#include "UnsortedList.h"

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    currentPos = 0;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {

}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return length >= MAX_ITEMS;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == someItem) {
            return true;
        }
    }
    // Reached the end w/o finding someItem
    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {

    arr[length++] = item; // increment the length after the line runs
//    ++length; // preincrement is faster
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == item) {
            arr[i] = arr[length - 1];
            length--;
            return;
        }
    }
}

template<class T>
void UnsortedList<T>::ResetIterator() {
    currentPos = 0;
}

template<class T>
T UnsortedList<T>::GetNextItem() {
    return arr[currentPos++];
}

