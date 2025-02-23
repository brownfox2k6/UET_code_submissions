// Linked List Implementation Template
// Instructions: Implement the missing function definitions for each class.
// Each function has comments indicating what it should do.

#include <iostream>
#include <stdexcept>

//-------------------- SINGLY LINKED LIST --------------------
template <typename T>
class SinglyLinkedList {
private:
    // Node structure for singly linked list
    struct Node {
        T data;
        Node* next;
        
        // Constructor
        Node(const T& value) : data(value), next(nullptr) {}
    };
    
    Node* head;
    Node* tail;
    int count;

public:
    // Constructor: Initialize an empty list
    SinglyLinkedList() {
        // TODO: Initialize head, tail, and count
        head = tail = nullptr;
        count = 0;
    }
    
    // Destructor: Free all nodes
    ~SinglyLinkedList() {
        // TODO: Delete all nodes to prevent memory leaks
        while (!isEmpty()) {
            popBack();
        }
    }
    
    // Returns true if the list is empty, false otherwise
    bool isEmpty() const {
        // TODO: Implement isEmpty function
        return count == 0;
    }
    
    // Returns the number of elements in the list
    int size() const {
        // TODO: Implement size function
        return count;
    }
    
    // Add element to the front of the list
    void pushFront(const T& value) {
        // TODO: Create a new node and add it to the front of the list
        // Update head, and tail if necessary
        Node *p = new Node(value);
        if (isEmpty()) {
            head = tail = p;
            count = 1;
            return;
        }
        if (size() == 1) {
            head->next = tail;
        }
        p->next = head;
        head = p;
        ++count;
    }
    
    // Add element to the back of the list
    void pushBack(const T& value) {
        // TODO: Create a new node and add it to the back of the list
        // Update head and tail as needed
        Node *p = new Node(value);
        if (isEmpty()) {
            head = tail = p;
            count = 1;
            return;
        }
        if (size() == 1) {
            head->next = tail;
        }
        tail->next = p;
        tail = p;
        ++count;
    }
    
    // Remove and return the first element
    // Should throw underflow_error if list is empty
    T popFront() {
        // TODO: Remove the front node and return its value
        // Update head, and tail if necessary
        // Don't forget to handle the empty list case
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't popFront");
        }
        Node *p = head;
        T value = p->data;
        head = p->next;
        delete p;
        --count;
        return value;
    }
    
    // Remove and return the last element
    // Should throw underflow_error if list is empty
    T popBack() {
        // TODO: Remove the back node and return its value
        // Update head and tail as needed
        // Don't forget to handle the empty list case
        // Note: This is O(n) for singly linked list since you need to find the node before tail
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't popBack");
        }
        Node *p = head;
        for (int i = 0; i < size() - 1; ++i) {
            p = p->next;
        }
        T value = tail->data;
        tail = p;
        delete p->next;
        --count;
        return value;
    }
    
    // Return the first element without removing it
    // Should throw underflow_error if list is empty
    T& front() {
        // TODO: Return the value of the front node
        // Don't forget to handle the empty list case
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't get front");
        }
        return head->data;
    }
    
    // Return the last element without removing it
    // Should throw underflow_error if list is empty
    T& back() {
        // TODO: Return the value of the back node
        // Don't forget to handle the empty list case
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't get back");
        }
        return tail->data;
    }
    
    // Insert value at the specified position (0-based index)
    // Should throw out_of_range if position is invalid
    void insert(int position, const T& value) {
        // TODO: Insert a new node with the given value at the specified position
        // Don't forget to handle special cases (position 0, end of list, invalid position)
        if (position < 0 || position >= size()) {
            throw std::out_of_range("Position out of range, can't insert");
        }
        if (position == 0) {
            pushFront(value);
            return;
        } else if (position == size()) {
            pushBack(value);
            return;
        }
        Node *p = head;
        for (int i = 0; i < position - 1; ++i) {
            p = p->next;
        }
        Node *q = new Node(value);
        q->next = p->next;
        p->next = q;
        ++count;
    }
    
    // Remove element at the specified position (0-based index)
    // Should throw out_of_range if position is invalid
    void remove(int position) {
        // TODO: Remove the node at the specified position
        // Don't forget to handle special cases (position 0, last element, invalid position)
        if (position < 0 || position >= size()) {
            throw std::out_of_range("Position out of range, can't remove");
        }
        if (position == 0) {
            popFront();
            return;
        }
        Node *p = head;
        for (int i = 0; i < position - 1; ++i) {
            p = p->next;
        }
        Node *q = p->next;
        p->next = q->next;
        delete q;
        --count;
    }
    
    // Find the first occurrence of value and return its position (0-based index)
    // Return -1 if value is not found
    int find(const T& value) const {
        // TODO: Find the first occurrence of value and return its position
        Node *p = head;
        for (int i = 0; i < size(); ++i) {
            if (p->data == value) {
                return i;
            }
            p = p->next;
        }
        return -1;
    }
    
    // Print the list elements
    void display() const {
        // TODO: Print all elements in the list
        // Format: [element1, element2, ..., elementN]
        Node *p = head;
        std::cout << '[';
        for (int i = 0; i < size(); ++i) {
            std::cout << p->data;
            if (i != size() - 1) {
                std::cout << ", ";
            }
            p = p->next;
        }
        std::cout << "]\n";
    }
};

//-------------------- DOUBLY LINKED LIST --------------------
template <typename T>
class DoublyLinkedList {
private:
    // Node structure for doubly linked list
    struct Node {
        T data;
        Node* prev;
        Node* next;
        
        // Constructor
        Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
    };
    
    Node* head;
    Node* tail;
    int count;

public:
    // Constructor: Initialize an empty list
    DoublyLinkedList() {
        // TODO: Initialize head, tail, and count
        head = tail = nullptr;
        count = 0;
    }
    
    // Destructor: Free all nodes
    ~DoublyLinkedList() {
        // TODO: Delete all nodes to prevent memory leaks
        while (!isEmpty()) {
            popBack();
        }
    }
    
    // Returns true if the list is empty, false otherwise
    bool isEmpty() const {
        // TODO: Implement isEmpty function
        return count == 0;
    }
    
    // Returns the number of elements in the list
    int size() const {
        // TODO: Implement size function
        return count;
    }
    
    // Add element to the front of the list
    void pushFront(const T& value) {
        // TODO: Create a new node and add it to the front of the list
        // Update head, tail, and prev/next pointers as needed
        Node *p = new Node(value);
        if (isEmpty()) {
            head = tail = p;
            count = 1;
            return;
        }
        if (size() == 1) {
            head->next = tail;
            tail->prev = head;
        }
        p->next = head;
        head->prev = p;
        head = p;
        ++count;
    }
    
    // Add element to the back of the list
    void pushBack(const T& value) {
        // TODO: Create a new node and add it to the back of the list
        // Update head, tail, and prev/next pointers as needed
        Node *p = new Node(value);
        if (isEmpty()) {
            head = tail = p;
            count = 1;
            return;
        }
        if (size() == 1) {
            head->next = tail;
            tail->prev = head;
        }
        p->prev = tail;
        tail->next = p;
        tail = p;
        ++count;
    }
    
    // Remove and return the first element
    // Should throw underflow_error if list is empty
    T popFront() {
        // TODO: Remove the front node and return its value
        // Update head, tail, and prev/next pointers as needed
        // Don't forget to handle the empty list case
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't popFront");
        }
        Node *p = head;
        T value = p->data;
        head = head->next;
        delete p;
        --count;
        return value;
    }
    
    // Remove and return the last element
    // Should throw underflow_error if list is empty
    T popBack() {
        // TODO: Remove the back node and return its value
        // Update head, tail, and prev/next pointers as needed
        // Don't forget to handle the empty list case
        // Note: This is O(1) for doubly linked list
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't popBack");
        }
        Node *p = tail;
        T value = p->data;
        tail = tail->prev;
        delete p;
        --count;
        return value;
    }
    
    // Return the first element without removing it
    // Should throw underflow_error if list is empty
    T& front() {
        // TODO: Return the value of the front node
        // Don't forget to handle the empty list case
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't get front");
        }
        return head->data;
    }
    
    // Return the last element without removing it
    // Should throw underflow_error if list is empty
    T& back() {
        // TODO: Return the value of the back node
        // Don't forget to handle the empty list case
        if (isEmpty()) {
            throw std::underflow_error("List is empty, can't get front");
        }
        return tail->data;
    }
    
    // Insert value at the specified position (0-based index)
    // Should throw out_of_range if position is invalid
    void insert(int position, const T& value) {
        // TODO: Insert a new node with the given value at the specified position
        // Update prev/next pointers of affected nodes
        // Don't forget to handle special cases (position 0, end of list, invalid position)
        if (position == 0) {
            pushFront(value);
            return;
        } else if (position == size()) {
            pushBack(value);
            return;
        }
        Node *p = head;
        for (int i = 0; i < position - 1; ++i) {
            p = p->next;
        }
        Node *q = new Node(value);
        q->prev = p;
        q->next = p->next;
        p->next->prev = q;
        p->next = q;
        ++count;
    }
    
    // Remove element at the specified position (0-based index)
    // Should throw out_of_range if position is invalid
    void remove(int position) {
        // TODO: Remove the node at the specified position
        // Update prev/next pointers of affected nodes
        // Don't forget to handle special cases (position 0, last element, invalid position)
        if (position < 0 || position >= size()) {
            throw std::out_of_range("Position out of range, can't remove");
        }
        if (position == 0) {
            popFront();
            return;
        }
        Node *p = head;
        for (int i = 0; i < position - 1; ++i) {
            p = p->next;
        }
        Node *q = p->next;
        Node *r = q->next;
        p->next = r;
        r->prev = p;
        delete q;
        --count;
    }
    
    // Find the first occurrence of value and return its position (0-based index)
    // Return -1 if value is not found
    int find(const T& value) const {
        // TODO: Find the first occurrence of value and return its position
        Node *p = head;
        for (int i = 0; i < size(); ++i) {
            if (p->data == value) {
                return i;
            }
            p = p->next;
        }
        return -1;
    }
    
    // Print the list elements in forward order
    void displayForward() const {
        // TODO: Print all elements in the list from head to tail
        // Format: [element1, element2, ..., elementN]
        Node *p = head;
        std::cout << '[';
        for (int i = 0; i < size(); ++i) {
            std::cout << p->data;
            if (i != size() - 1) {
                std::cout << ", ";
            }
            p = p->next;
        }
        std::cout << "]\n";
    }
    
    // Print the list elements in reverse order
    void displayBackward() const {
        // TODO: Print all elements in the list from tail to head
        // Format: [elementN, ..., element2, element1]
        Node *p = tail;
        std::cout << '[';
        for (int i = 0; i < size(); ++i) {
            std::cout << p->data;
            if (i != size() - 1) {
                std::cout << ", ";
            }
            p = p->prev;
        }
        std::cout << "]\n";
    }
};

//-------------------- TESTING FUNCTION --------------------
// This function will test your implementation
// Do not modify this function
template <typename T>
void testLinkedLists() {
    // Test Singly Linked List
    std::cout << "Testing Singly Linked List:\n";
    SinglyLinkedList<T> singlyList;
    
    std::cout << "Is empty: " << (singlyList.isEmpty() ? "true" : "false") << std::endl;
    
    // Test pushBack and display
    for (int i = 1; i <= 5; i++) {
        singlyList.pushBack(i * 10);
    }
    std::cout << "After pushBack: ";
    singlyList.display();
    
    // Test pushFront
    singlyList.pushFront(5);
    std::cout << "After pushFront(5): ";
    singlyList.display();
    
    // Test size
    std::cout << "Size: " << singlyList.size() << std::endl;
    
    // Test front and back
    std::cout << "Front: " << singlyList.front() << std::endl;
    std::cout << "Back: " << singlyList.back() << std::endl;
    
    // Test insert
    singlyList.insert(3, 35);
    std::cout << "After insert(3, 35): ";
    singlyList.display();
    
    // Test find
    std::cout << "Position of 35: " << singlyList.find(35) << std::endl;
    std::cout << "Position of 100: " << singlyList.find(100) << std::endl;
    
    // Test remove
    singlyList.remove(3);
    std::cout << "After remove(3): ";
    singlyList.display();
    
    // Test popFront and popBack
    std::cout << "PopFront: " << singlyList.popFront() << std::endl;
    std::cout << "After popFront: ";
    singlyList.display();
    
    std::cout << "PopBack: " << singlyList.popBack() << std::endl;
    std::cout << "After popBack: ";
    singlyList.display();

    // Test Doubly Linked List
    std::cout << "\nTesting Doubly Linked List:\n";
    DoublyLinkedList<T> doublyList;
    
    std::cout << "Is empty: " << (doublyList.isEmpty() ? "true" : "false") << std::endl;
    
    // Test pushBack and display
    for (int i = 1; i <= 5; i++) {
        doublyList.pushBack(i * 10);
    }
    std::cout << "After pushBack (forward): ";
    doublyList.displayForward();
    std::cout << "After pushBack (backward): ";
    doublyList.displayBackward();
    
    // Test pushFront
    doublyList.pushFront(5);
    std::cout << "After pushFront(5) (forward): ";
    doublyList.displayForward();
    
    // Test size
    std::cout << "Size: " << doublyList.size() << std::endl;
    
    // Test front and back
    std::cout << "Front: " << doublyList.front() << std::endl;
    std::cout << "Back: " << doublyList.back() << std::endl;
    
    // Test insert
    doublyList.insert(3, 35);
    std::cout << "After insert(3, 35) (forward): ";
    doublyList.displayForward();
    
    // Test find
    std::cout << "Position of 35: " << doublyList.find(35) << std::endl;
    std::cout << "Position of 100: " << doublyList.find(100) << std::endl;
    
    // Test remove
    doublyList.remove(3);
    std::cout << "After remove(3) (forward): ";
    doublyList.displayForward();
    
    // Test popFront and popBack
    std::cout << "PopFront: " << doublyList.popFront() << std::endl;
    std::cout << "After popFront (forward): ";
    doublyList.displayForward();
    
    std::cout << "PopBack: " << doublyList.popBack() << std::endl;
    std::cout << "After popBack (forward): ";
    doublyList.displayForward();
    std::cout << "After popBack (backward): ";
    doublyList.displayBackward();
}

int main() {
    testLinkedLists<int>();
    return 0;
}