#include<iostream>
#include<stdlib.h>
using namespace std;

struct Tree{
	int data;
	struct Tree *left;
	struct Tree *right;
};

struct Tree *createTree(int data){
	struct Tree *node;
	node = (struct Tree*)malloc(sizeof(struct Tree));
	node->left = NULL;
	node->right = NULL;
	return node;
}

void preorder(struct Tree *root){
	if(root != NULL){
		cout<<root->data<<endl;
		preorder(root->left);
		preorder(root-right);
	}
}

void postorder(struct Tree *root){
	if(root != NULL){
		preorder(root->left);
		preorder(root-right);
		cout<<root->data<<endl;
	}
}

void inorder(struct Tree *root){
	if(root != NULL){
		preorder(root->left);
		cout<<root->data<<endl;
		preorder(root-right);
	}
}

int main() {
	
	struct Tree *t1 = createTree(30);
	struct Tree *t2 = createTree(3);
	struct Tree *t3 = createTree(20);
	struct Tree *t4 = createTree(6);
	struct Tree *t5 = createTree(11);
	struct Tree *t6 = createTree(4);
	struct Tree *t7 = createTree(8);
	
	t1->left = t2;
	t1->right = t3;
	
	t2->left = t4;
	t2->right = t5;
	
	t3->left = t6;
	t3->right = t7;
	// for preorder traversing
	cout<<"for preorder traversing"endl;
	preorder(t1);
	
		// for postorder traversing
	cout<<"for postorder traversing\n"endl;
	postorder(t1);
	
		// for inorder traversing
	cout<<"for inorder traversing\n"endl;
	inorder(t1);
	

	
}














