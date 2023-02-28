#include <iostream>

using namespace std;

class Node
{
public:
	char name;
	Node *left, *right;
	
	Node(char _name)
	{
		this->name = _name;
	}
	
};

class Head
{
public:
	char name;
	Node *node;
	Head *next;
	

	Head(char _name)
	{
		this->name = _name;
		this->node = new Node(_name);
		this->next = NULL;
	}
	
};

class Tree
{
private:
	Head *head;

public:
	
	Tree(int n)
	{
		this->head = new Head(' ');
		Head *start = this->head;
		for (int i = 0; i < n; i++)
		{
			start->next = new Head('A' + i);
			start = start->next;
		}
	}
	
	Node* Serch(char _name)
	{
		if (_name == '.')
			return NULL;
		
		Head *start = this->head;
		
		while (start->name != _name && start->next != NULL) { start = start->next; }
		
		if (start->name == _name)
			return start->node;
		return NULL;
	}
	
	void Insert(char _start_name, char _left_name, char _right_name)
	{
		Node *start = Serch(_start_name);
		
		start->left = Serch(_left_name);
		start->right = Serch(_right_name);
	}
	
	void preorder(char _name)
	{
		Preorder(Serch(_name));
	}
	
	void inorder(char _name)
	{
		Inorder(Serch(_name));
	}
	
	void postorder(char _name)
	{
		Postorder(Serch(_name));
	}
	
	void Preorder(Node *_start) // 전위 순회
	{
		if (_start == NULL)
			return;
			
		cout << _start->name;
		Preorder(_start->left);
		Preorder(_start->right);
	}
	
	void Inorder(Node *_start) // 중위 순회 
	{
		if (_start == NULL)
			return;
			
		Inorder(_start->left);
		cout << _start->name;
		Inorder(_start->right);
	}
	
	void Postorder(Node *_start) // 후위 순회 
	{
		if (_start == NULL)
			return;
		
		Postorder(_start->left);
		Postorder(_start->right);
		cout << _start->name;
	}
	
};

int main()
{
	int N;
	cin >> N;

	Tree tree(N);
		
	for (int i = 0; i < N; i++)
	{
		char start, left, right;
		cin >> start >> left >> right;
		
		tree.Insert(start, left, right);
	}
	
	tree.preorder('A');
	puts("");
	tree.inorder('A');
	puts("");
	tree.postorder('A');
	
	return 0;
}
