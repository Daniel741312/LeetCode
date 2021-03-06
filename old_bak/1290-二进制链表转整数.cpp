#include<iostream>
#include<stack>
using namespace std;
/*效率8太行*/

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum = 0;
        int base = 1;
        int cnt = 0;
        int i = 0;
        stack<int> bin;

        ListNode* node = head;
        while (node) {
            cnt++;
            bin.push(node->val);
            node = node->next;
        }

        for (i = 0; i < cnt; i++) {
            if (bin.top() == 1)
                sum = sum + (1 << i);
            bin.pop();
        }
        return sum;
    }
};

#if 0
int main(int argc, char* argv[]) {
    ListNode* n1 = (ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 1;
    ListNode* n2 = (ListNode*)malloc(sizeof(struct ListNode));
    n2->val = 0;
    ListNode* n3 = (ListNode*)malloc(sizeof(struct ListNode));
    n3->val = 1;

    n1->next = n2;
    n2->next = n3;
    n3->next = nullptr;

    Solution* s1 = new Solution();
    cout << s1->getDecimalValue(n1) << endl;

    delete(s1);
    free(n1);
    free(n2);
    free(n3);

    return 0;
}
#endif