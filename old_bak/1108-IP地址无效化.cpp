#include<iostream>
#include<string>
using namespace std;
/*用好replace*/

class Solution {
public:
    string defangIPaddr(string address) {
        int i = 0;
        for (i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                address.replace(i, 1, "[.]");
                i += 2;
            }
        }
        return address;
    }
};

#if 0
int main(int argc, char* argv[]) {
    string address = "1.1.1.1";
    Solution* s1 = new Solution;
    address=s1->defangIPaddr(address);
    delete s1;
    cout << address << endl;
    return 0;
}
#endif