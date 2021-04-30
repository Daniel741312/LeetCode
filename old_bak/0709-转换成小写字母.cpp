/*
    *字母的ASCII码表规律:
    *'A'->0x41=0100 0001
    * ...
    *'Z'->0x5A=0101 1010
    * 
    *'a'->0x61=0110 0001
    * ...
    *'z'->0x7A=0111 1010
    *可见,每对儿大小写字母的低4位都是一样的,而高4位只有第3位变化了
    *转化时通过位运算操作即可
*/
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for (string::iterator it = str.begin(); it != str.end(); it++)
            *it = (*it) | 0x20;
        return str;
    }
};

#if 0
int main(int argc, char* argv[]) {
    Solution s1;
    string str = "Fuck";
    cout << s1.toLowerCase(str) << endl;
    return 0;
}
#endif
