#include<iostream>
#include<cstdlib>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* ptr = node->next;
        node->next = node->next->next;
        /*不是自己malloc的内存不能free!!!*/
        //free(ptr);
    }
};

#if 0
int main(int argc, char* argv[]) {
    ListNode n1(1);
    ListNode n2(2);
    ListNode n3(3);
    ListNode n4(4);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = nullptr;

    Solution s1;
    s1.deleteNode(&n2);

    ListNode* node = &n1;
    while (node) {
        cout << node->val << endl;
        node = node->next;
    }
    return 0;
}
#endif