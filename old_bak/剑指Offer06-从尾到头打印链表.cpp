#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
 
class Solution {
public:
    /*爷的第一想法,可能reverse的代价太大,虽然通过了,效果不好*/
    vector<int> reversePrint(ListNode* head) {
        vector<int> v1;
        const ListNode* ptr = head;

        while (ptr){
            v1.push_back(ptr->val);
            ptr = ptr->next;
        }

        reverse(v1.begin(),v1.end());
        return v1;
    }

    /*逆向迭代器,避免了reverse操作*/
    vector<int> reversePrint2(ListNode* head) {
        const ListNode* ptr = head;
        size_t count = 0;
        while (ptr) {
            count++;
            ptr = ptr->next;
        }
        vector<int> v1(count);

        ptr = head;
        for (vector<int>::reverse_iterator rit = v1.rbegin(); rit != v1.rend(); rit++) {
            *rit = ptr->val;
            ptr = ptr->next;
        }
        return v1;
    }

    /*听说计算机科学家都喜欢递龟*/
    vector<int> reversePrint3(ListNode* head) {
        if (head) {
            vector<int> v = reversePrint3(head->next);
            v.push_back(head->val);
            return v;
        }
        else
            /*递归基:向上返回一个空vector*/
            return vector<int>{};
    }
};

#if 1
int main(int argc, char* argv[]) {
    Solution s1;
    ListNode* head = (ListNode*)malloc(sizeof(struct ListNode));
    head->val = 1;
    ListNode* node1= (ListNode*)malloc(sizeof(struct ListNode));
    node1->val = 3;
    ListNode* node2= (ListNode*)malloc(sizeof(struct ListNode));
    node2->val = 2;
    //ListNode* node3= (ListNode*)malloc(sizeof(struct ListNode));
    head->next = node1;
    node1->next = node2;
    node2->next = nullptr;

    vector<int> vret;
    vret=s1.reversePrint3(head);
    for (vector<int>::iterator it = vret.begin(); it != vret.end(); it++)
        cout << *it << endl;
    return 0;
}
#endif