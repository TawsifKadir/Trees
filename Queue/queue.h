class queue{
    typedef struct Node{
        int data;
        Node *next;
    }Node;
    
    public:
    void push(int);
    int pop();
    bool isEmpty();
    int peek();
    void printQueue();
    queue();
    private:
    Node *bottom;
    Node *top;
};