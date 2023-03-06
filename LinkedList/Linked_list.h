class LinkedList{
    
    typedef struct Node
    {
        int info;
        Node *next;
    }Node;
    
    
    public:
    LinkedList();
    void push(int item);
    int top();
    void print_list();
    bool isEmpty();
    void del(int);
    private:
    Node *topptr;
    Node *last;
};