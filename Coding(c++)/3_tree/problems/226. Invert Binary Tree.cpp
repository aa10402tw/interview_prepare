/* [Question Description]
Invert a binary tree.
Input:
Output:
Trivia:
This problem was inspired by this original tweet by Max Howell:
*/ 
#include <iostream>
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* invertTree(TreeNode* root) {
	if (root == nullptr) return root;
	TreeNode* l = invertTree(root->left);
	TreeNode* r = invertTree(root->right);
	root->left = r;
	root->right = l;
	return root;
}

int main() {

}
