#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int d) : data(d), left(nullptr), right(nullptr){}
};

struct BT {
    TreeNode *root;
    BT(int d) {
        root = new TreeNode(d);
    }
};


void inorderHelper(TreeNode *root, vector<int>& res) {
    if(root == nullptr) {
        return;
    }
    inorderHelper(root->left, res);
    res.push_back(root->data);
    inorderHelper(root->right, res);

}

vector<int> inorder(TreeNode *root) {
    vector<int> res;
    inorderHelper(root,res);
    return res;
}

int main() {
    BT t(10);
    t.root->left = new TreeNode(20);
    t.root->right = new TreeNode(30);

    vector<int> ans = inorder(t.root);
    for(auto i:ans) cout << i << "  ";

    return 0;
}