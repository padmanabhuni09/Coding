
/*
 *
 * Using C++ create a linked list with a structure having two attributes:
 *
 * The value as an integer
 * The node that follows in the list
 *
 * Once the structure has been defined create a function to add entries to the list. Then create a function to print the results.
 */

#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node* next;
    
    Node(int data)
    {
        this->value = data;
        next = NULL;
    }
};

Node* head = nullptr;

// Add an entry to data structure

void addEntry(int value) {

    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

// Display entries in data structure
void display(Node* head) {
   
    Node* current = head;
    Node *prev = NULL, *next = NULL;
 
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
      
    while (prev != NULL) {
        cout << prev->value << " ";
        prev = prev->next;
        }
        
    
    
}

int main()
{
    addEntry(1);
    addEntry(2);
    addEntry(3);
    
    display(head);
    
    return 0;
}
