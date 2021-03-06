#include<iostream>
#include<cstdlib>
using namespace std;
/*评论区的文艺逼:如何让自己在世界上消失,但又不死-将自己完全变成另外一个人,再杀掉那个人就可以了*/

/*Definition for singly-linked list.*/
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        return;
    }
};

#if 0
int main() {
    ListNode* n1 = (ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 4;
    ListNode* n2 = (ListNode*)malloc(sizeof(struct ListNode));
    n2->val = 5;
    ListNode* n3 = (ListNode*)malloc(sizeof(struct ListNode));
    n3->val = 1;
    ListNode* n4 = (ListNode*)malloc(sizeof(struct ListNode));
    n4->val = 9;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;

    Solution* s1 = new Solution;
    s1->deleteNode(n2);

    ListNode* node = n1;
    while (node) {
        cout << node->val << " ";
        node = node->next;
    }

    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}
#endif