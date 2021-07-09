

#include<bits/stdc++.h>

using namespace std;

int innor[1005];
int preor[1005];
int n;

struct Tree {
	int value;
	Tree* left, * right;
};

Tree* newNode(int val) {
	Tree* temp = new Tree;
	temp->left = temp->right = NULL;
	temp->value = val;
	return temp;
}

Tree* buildTree(int start, int end, int &preIndex,map<int, int>& mp) {

	if (start > end) return NULL;

	Tree* t = newNode(preor[preIndex++]);
	if (start == end) return t;

	int inIndex = mp[t->value];
	t->left = buildTree(start, inIndex - 1,preIndex,mp);
	t->right = buildTree(inIndex + 1, end,preIndex,mp);
	return t;
}

Tree* buildTreeWrap() {
	map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[innor[i]] = i;
	
	int preIndex=0;	
	return buildTree(0, n - 1, preIndex,mp);
}

void printPos(Tree* t) {
	if (t != NULL) {
		printPos(t->left);
		printPos(t->right);
		cout << t->value << " ";
	}
}

void process() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> innor[i];
	for (int i = 0; i < n; i++) cin >> preor[i];

	Tree* root = buildTreeWrap();
	printPos(root);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		process();
	}
	return 0;
}