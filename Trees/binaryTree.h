class BinaryTree{

    typedef struct Node
    {
        int data;
        Node *left;
        Node *right;

        Node(int data){
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
    }Node;
    public:
    Node *root;
    BinaryTree();
    void addNode(int data);
    void preOrderTraversal(Node *focusNode);
    void leftSideTraversal(Node *focusNode);
    void rightSideTraversal(Node* focusNode);
    Node* search(Node* focusNode,int key);
    int findHeight(Node *root);
};