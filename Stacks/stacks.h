

class stack{   
    typedef struct Node{
        int data;
        Node *next;
    }Node;  
    public:
    void Push(int);
    int Pop();
    int Top();
    bool isEmpty();
    void printStack();
    stack();
    private:
    Node *top;
};