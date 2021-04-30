#include<iostream>
using namespace std;
/*����ָ������:���������ķ���*/
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* ptrFast = head;
        ListNode* ptrSlow = head;
        /*���ÿ�ָ����k��*/
        while (k) {
            ptrFast = ptrFast->next;
            k--;
        }
        /*����ָ��һ����*/
        while (ptrFast) {
            ptrFast = ptrFast->next;
            ptrSlow = ptrSlow->next;
        }
        return ptrSlow;
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
    ListNode* ret = s1->getKthFromEnd(h1,2);

    delete(s1);

    return 0;
}
#endif