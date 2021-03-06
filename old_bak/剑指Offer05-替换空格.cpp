#include<iostream>
#include<string>
using namespace std;
/*空格(space)的ASCII码为0x20*/

class Solution {
public:
    string replaceSpace(string s) {
        int i = 0;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == (char)0x20) {
                s.erase(i, 1);
                s.insert(i, "%20");
            }
        }
        return s;
    }
};

#if 1
int main(int argc, char* argv[]) {
    Solution s1;
    string str = "We are happy.";
    cout << s1.replaceSpace(str) << endl;
    return 0;
}
#endif