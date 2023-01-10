/*Random double numbers ierarkhy*/
#include <iostream>

struct Node //Standart binary node structure
{
    double data;
    Node* left;
    Node* right;
};

Node* createNode(double data); //Function declaration

int main()
{
    Node* root = createNode(365.68); //Root node

    root->left = createNode(265.358);//Left branch
    root->right = createNode(366.958);//Right branch

    root->left->left = createNode(155.4798);
    root->right->right = createNode(395.45);
    root->left->right = createNode(245.568);
    root->right->left = createNode(371.1589);

    root->left->left->left = createNode(0.54789);
    root->right->right->right = createNode(555.5555);

}
//Node creator function body
Node* createNode(double data) 
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

