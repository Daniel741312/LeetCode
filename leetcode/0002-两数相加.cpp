#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

/*调试函数*/
ListNode* makeAList(std::vector<int>& array);
void printList(ListNode* l);

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        int carray=0;
        while(l1||l2){
            int n1=l1?l1->val:0;
            int n2=l2?l2->val:0;
            int sum=n1+n2+carray;
            carray=sum/10;
            if(head==nullptr){
                head=tail=new ListNode(sum%10);
            }else{
                tail->next=new ListNode(sum%10);
                tail=tail->next;
            }
            if(l1!=nullptr){
                l1=l1->next;
            }
            if(l2!=nullptr){
                l2=l2->next;
            }
        }
        if(carray!=0){
            tail->next=new ListNode(carray);
        }
        return head;
    }
};

int main(int argc,char* argv[]){
    Solution* s0=new Solution();
    std::vector<int> v1={9,9,9,9,9,9,9};
    std::vector<int> v2={9,9,9,9};
    
    ListNode* l1=makeAList(v1);
    ListNode* l2=makeAList(v2);

    ListNode* ret=s0->addTwoNumbers(l1,l2);
    printList(ret);

    delete(s0);
    s0=nullptr;
    return 0;
}

ListNode* makeAList(std::vector<int>& array) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it) {
        if (head == nullptr) {
            head = tail = new ListNode(*it);
        } else {
            tail->next = new ListNode(*it);
            tail = tail->next;
        }
    }

    if (tail != nullptr) {
        tail->next = nullptr;
    }
    return head;
}

void printList(ListNode* l) {
    while (l != nullptr) {
        std::cout << l->val << std::endl;
        l = l->next;
    }
    return;
}