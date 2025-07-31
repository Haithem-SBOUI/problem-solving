#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void inorder_build(TreeNode* root, vector<int> &vect){
        if(root->left){
            inorder_build(root->left, vect);
        }
        vect.push_back(root->val);
        if(root->right){
            inorder_build(root->right, vect);
        }
    }

    bool findDfs(TreeNode* root, int &s){
        if (!root)
            return false;
        if (s == root->val)
            return true;
        if(s < root->val){
            return findDfs(root->left, s);
        }else if(s > root->val){
            return findDfs(root->right, s);
        }
        return false;
    }

    bool findTarget(TreeNode* root, int k) {
        if(root->left == nullptr && root->right == nullptr)
            return false;
        vector <int> vect;
        inorder_build(root, vect);
        int s;
        for(int i = 0; i < vect.size(); i++){
            s = k - vect[i];
        if(s != k && findDfs(root, s))
            return true;
        }

        return false;
    }

int main(){
    TreeNode* root = new TreeNode(2, nullptr, new TreeNode(4));
    bool result = findTarget(root, 6);
    if(result)
        cout << "Pair exists\n";
    else
        cout << "Pair does not exist\n";
    return 0;
}

