#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top == NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value;      // 2. Assign value
        newNode->next = top;        // 3. Set the next pointer of the new node to the top
        top = newNode;              // 4. Update the top pointer to the new node
        cout << "Push Value: " << value << endl;
        
    }
    
};