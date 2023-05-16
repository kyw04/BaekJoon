#include <iostream>
using namespace std;

typedef struct _node
{
	int key;
	_node *left, *right;
}node;
node* head = new node;

void add_node(node *n)
{
	n->key = NULL;
	n->left = NULL;
	n->right = NULL;
}

void push(int k)
{
	node* t = head;
	while (t->key != NULL)
	{
		if (t->key > k && t->left != NULL)
			t = t->left;
		else if (t->key < k && t->right != NULL)
			t = t->right;
		else
			break;
	}

	if (t == head && t->key == NULL)
	{
		t->key = k;
		return;
	}

	node* n = new node;
	add_node(n);
	n->key = k;
	if (t->key > n->key)
		t->left = n;
	else
		t->right = n;
}

void print(node* n)
{
	if (n == NULL)
		return;

	print(n->left);
	print(n->right);
	cout << n->key << endl;
}

int main()
{
	int input;
	add_node(head);
	
	while (cin >> input)
	{
		push(input);
	}
	print(head);
	return 0;
}
