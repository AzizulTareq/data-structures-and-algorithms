#include <iostream>
using namespace std;

//Definition of Node for Binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new Node in heap
Node* getNewNode(int data){
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> right = newNode->left = NULL;
    return newNode;
};

// To insert data in BST, returns address of root node
Node* Insert(Node* root,int data){
    if(root == NULL){ //empty tree
        root = getNewNode(data);
    }else if(data <= root->data){
        root->left = Insert(root->left, data);
    }else{
        root->right = Insert(root->right, data);
    }

    return root;
}

//To search an element in BST, returns true if element is found
bool Search(Node* root,int data){
    if(root == NULL){
        return false;
    }else if(data == root->data){
        return true;
    }else if(data <= root->data){
        return Search(root->left, data);
    }else{
        return Search(root->right, data);
    }
}

int main(){

    Node* root = NULL; // Creating an empty tree
    root = Insert(root, 15);
    root = Insert(root, 14);
    root = Insert(root, 5);
    root = Insert(root, 8);
    root = Insert(root, 10);

    int number;
	cout<<"Enter number be searched\n";
	cin>>number;

	if(Search(root,number) == true){
        cout<<"Found"<<endl;
	}else {
	    cout<<"Not Found"<<endl;
	}

}
