/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        unordered_set<Node*> st;
        //first all the ancestors of p from bottom to root into set
        while(p != nullptr) {
            st.insert(p);
            p = p->parent;
        }

        //lookup for any common ancestor of q in the set. If found that is 
        //lowest common ancestor of the both 
        while(q != nullptr) {
            if(st.find(q) != st.end()) {
                return q;
            }
            q = q->parent;
        }

        return nullptr;

    }
};