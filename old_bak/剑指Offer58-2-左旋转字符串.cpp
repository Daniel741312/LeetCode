#include<string>
#include<iostream>
using namespace std;
/*如果让你原地反转呢*/

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        int i = 0;
        string subStr = s.substr(0, n);
        s.erase(0, n);
        s.append(subStr);
        return s;
    }

    /*评论区的老API工程师*/
    string reverseLeftWords2(string s, int n) {
        return s.substr(n) + s.substr(0, n);
    }
};

#if 1
int main(int argc, char* argv[]) {
    Solution s1;
    string s = "abcdefg";
    int n = 2;
    cout << s1.reverseLeftWords2(s, n) << endl;
    return 0;
}
#endif