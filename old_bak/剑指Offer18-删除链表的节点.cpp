#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* ptr = head;
        /*如果要删除的是头节点*/
        if (ptr->val == val)
            return head = ptr->next;
        /*一般情况:找到被删除的节点的前一个节点*/
        while (ptr->next->val != val)
            ptr = ptr->next;

        ptr->next = ptr->next->next;
        return head;
    }
};

#if 0 
int main(int argc, char* argv[]) {
    ListNode* h1 = new ListNode(1);
    ListNode* h2 = new ListNode(2);
    ListNode* h3 = new ListNode(3);
    ListNode* h4 = new ListNode(4);
    ListNode* h5 = new ListNode(5);

    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h5;
    h5->next = nullptr;

    Solution* s1 = new Solution();
    ListNode* ret = s1->deleteNode(h1, 1);

    delete(h1);
    delete(h2);
    delete(h3);
    delete(h4);
    delete(h5);
    delete(s1);
    return 0;
}
#endif