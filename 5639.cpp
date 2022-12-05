#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <stack>
#define VALUE first
#define LEVEL second
using namespace std;
class Tree{
	public :
		int Node = -1;
		Tree *left = NULL;
		Tree *right = NULL;
		Tree *parent = NULL;
};
Tree tree;
stack<Tree>s;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tmp;
	cin >> tmp;
	tree.Node = tmp;
	Tree *tr = &tree;
	while(cin >> tmp){
		if(tr->Node < 0){
			tr->Node = tmp;	
		} else if(tr->left != NULL && tr->right != NULL){
			tr = tr->parent;
		} else if(tr->Node > tmp){
			if(tr->left == NULL){
				tr->left = new Tree;
				tr->left->Node = tmp;
				tr->left->parent = tr;
				continue;
			}
			tr = tr->left;
		} else if(tr->Node < tmp){
			if(tr->right == NULL){
				tr->right = new Tree;
				tr->right->Node = tmp;
				tr->right->parent = tr;
				continue;
			}
			tr = tr->right;	
		}
	}
	tr = &tree;
	while(tr->left != NULL){
		tr = tr->left;
	} 
	while(tr->parent != NULL){
		tr = tr->parent;
		if(tr->left != NULL)
			cout << tr->left->Node << '\n';
		if(tr->right != NULL)
			cout << tr->right->Node << '\n';
		cout << tr->Node << '\n';
	}
	while(tr->right != NULL){
		tr = tr->right;
	} 
	while(tr->parent != NULL){
		tr = tr->parent;
		if(tr->left != NULL)
			cout << tr->left->Node << '\n';
		if(tr->right != NULL)
			cout << tr->right->Node << '\n';
		cout << tr->Node << '\n';
	}
}
