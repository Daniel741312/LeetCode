#include<iostream>
#include<vector>
using namespace std;
/*
    *我的解法很常规,效率一般般
    *评论区的热评老哥-用异或运算在不引入第三个变量的情况下交换两个变量的值;
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int num = s.size();
        char temp;
        for (i = 0; i < (num>>1); i++) {
            temp = s[i];
            s[i] = s[num- 1 - i];
            s[num- 1 - i] = temp;
        }
    }

    /*异或运算:不引入第三个变量的情况下交换两个变量,不过这样真的会快吗?*/
    void reverseString2(vector<char>& s) {
        int i = 0;
        int j = 0;
        int num = s.size();
        for (i = 0; i < (num >> 1); i++) {
            j = num - 1 - i;
            s[i] = s[i] ^ s[j];
            s[j] = s[i] ^ s[j];
            s[i] = s[i] ^ s[j];
        }
    }
};

#if 0
int main(int argc, char* argv) {
    Solution s1;
    string str = "Hannah";
    vector<char> vec(str.size());
    for (string::iterator it = str.begin(); it != str.end(); it++)
        vec.push_back(*it);
    s1.reverseString2(vec);

    for (vector<char>::iterator it = vec.begin(); it != vec.end(); it++)
        cout << *it;
    return 0;
}
#endif