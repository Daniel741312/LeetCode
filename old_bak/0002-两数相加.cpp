#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        int carry=0;
        while(l1||l2){
            int n1=l1?(l1->val):0;
            int n2=l2?(l2->val):0;
            int sum=n1+n2+carry;
            carry=sum/10;
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
        if(carry>0){
            tail->next=new ListNode(carry);
        }
        return head;
    }
};

ListNode* makeAList(vector<int>& array);
void printList(ListNode* l);

int main(int argc,char* argv[]){
    Solution* s1=new Solution();
    vector<int> v1={2,4,3};
    vector<int> v2={5,6,4};

    ListNode* l1=makeAList(v1);
    ListNode* l2=makeAList(v2);
    
    printList(l1);

    ListNode* ans=s1->addTwoNumbers(l1,l2);
    printList(ans);

    delete(s1);
    return 0;
}

ListNode* makeAList(vector<int>& array){
    ListNode* head=nullptr;
    ListNode* tail=nullptr;
    for(vector<int>::iterator it=array.begin();it!=array.end();it++){
        if(head==nullptr){
            head=tail=new ListNode(*it);
        }else{
            tail->next=new ListNode(*it);
            tail=tail->next;
        }
    }

    if(tail!=nullptr){
        tail->next=nullptr;
    }
    return head;
}

void printList(ListNode* l){
    while(l!=nullptr){
        cout<<l->val<<endl;
        l=l->next;
    }
    return;
}