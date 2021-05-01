#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* makeAList(std::vector<int>& array);
void printList(ListNode* l);

class Solution {
   public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> temp;
        while(head!=nullptr){
            temp.emplace_back(head->val);
            head=head->next;
        }
        for(unsigned int i=0,j=temp.size()-1;i<j;i++,j--){
            if(temp[i]!=temp[j])
                return false;
        }
        return true;
    }
};

int main(int argc,char* argv[]){
    Solution* s0=new Solution();

    std::vector<int> arr={1,2,2,1};
    ListNode* head=makeAList(arr);
    printList(head);
    std::cout<<s0->isPalindrome(head)<<std::endl;

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