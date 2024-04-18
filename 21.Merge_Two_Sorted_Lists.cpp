#include<iostream>
#include<string>
#include<vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution
{
    ListNode* root;
public:
    void makeMe(ListNode* list1, ListNode* list2, ListNode*& node)
    {
        if (list1 == nullptr && list2 == nullptr)
        {
            return;
        }
        if (node == nullptr)
        {
            node = new ListNode();
            makeMe(list1, list2, root);
        }
        if (list1 == nullptr)
        {
            node->val = list2->val;
            makeMe(nullptr, list2->next, node->next);
        }
        else if (list2 == nullptr)
        {
            node->val = list1->val;
            makeMe(list1->next, nullptr, node->next);
        }
        else if (list1->val <= list2->val)
        {
            node->val = list1->val;
            makeMe(list1->next, list2, node->next);
        }
        else if (list2->val < list1->val)
        {
            node->val = list2->val;
            makeMe(list1, list2->next, node->next);
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        makeMe(list1, list2, root);

        return root;
    }
};