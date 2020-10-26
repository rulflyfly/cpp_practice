#include <iostream>
#include<cmath>
#include "Helpers.h"

Stack::Stack() 
{
    // initialize stack to be empty
    top = NULL;
};

Stack::~Stack() 
{
    // deconstractor to delete all of the dynamic variables
    while (!isEmpty())
        pop();
};

void Stack::push(std::string d) 
{
    // need a new node to store data d in
    Node *temp = new Node();
    temp->data = d;
    temp->next = top; // point the new node's next to the new top of the stack
    top = temp; // point top to the new top of the stack
};

std::string Stack::pop() 
{
    if (!isEmpty())
    {
        std::string value = top->data;
        Node *oldtop = top;
        top = oldtop->next;
        delete oldtop;
        return value;
    }
    else
    {
        // you can't pop from an empty stack
        std::cout << "You can't pop from an empty stack!" << std::endl;
        exit(1);
    }
 };

bool Stack::isEmpty()
{
    return (top == NULL);
};

std::string Stack::toString() 
{
    std::string result = "(top) -> ";
    if (isEmpty())
    {
        return result + "NULL";
    }
    else 
    {
        Node *current = top;
        while (current != NULL)
        {
            result += (current->data + " -> ");
            current = current->next;
        }
    }
    return result + "END";
};

int main()
{
    Stack *s = new Stack();
    s->push("Cheeseburger");
    s->push("Pizza");
    s->push("Large coffee");
    s->pop();
    std::cout << s->toString() << std::endl;
    delete s;

    return 0;
};

