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
        return value;
    }

    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Popped value: " << temp->data << endl;
        top = temp->next;
        delete temp;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    Stack stack;
}