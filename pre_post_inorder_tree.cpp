#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Traversals {
    public : 
    
    vector<vector<int>> PreInPost(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> pre,post,in;

        stack<pair<TreeNode*,int>> st;
        st.push({root,1});

        while(!st.empty()) {
            auto it = st.top();
            st.pop();

            if(it.second == 1) {
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);

                if(it.first->left != nullptr) {
                    st.push({it.first->left,1});
                }
            }

            if(it.second == 2) {
                in.push_back(it.first->val);
                it.second++;
                st.push(it);

                if(it.first->right != nullptr) {
                    st.push({it.first->left,1});
                }
            }

            if(it.second == 3) {
                post.push_back(it.first->val);
            }
        }
        ans.push_back(pre);
        ans.push_back(in);
        ans.push_back(post);

        return ans;
    }
};


int main() {
    
}