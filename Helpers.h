struct Node 
{
    std::string data;
    Node *next;
};

class Stack 
{
    public:
        Stack(); // constructor
        ~Stack(); // destructor
        void push(std::string d); // pushes a node on top of stack
        std::string pop(); // will pop the top node of the stack
        std::string toString(); // display stack's contents as a string top to bottom
        bool isEmpty();
    private:
        Node *top;
};