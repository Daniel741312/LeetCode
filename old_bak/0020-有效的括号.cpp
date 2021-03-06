#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        /*遍历这个字符串*/
        for (string::iterator it = s.begin(); it != s.end(); it++) {
            if (isLeftSymbol(*it))
                stk.push(*it);
            /*
                *如果堆栈非空且当前it与栈顶是一对儿,则弹栈
                *否则说明栈空,你还硬压了一个右括号,或者当前it与栈顶不是一对儿,返回false*/
            else {
                if (!stk.empty()&&isPair(stk.top(), *it))
                    stk.pop();
                else
                    return false;
            }
        }
        /*遍历完到这里了,堆栈为空说明一切正常*/
        return stk.empty();
    }
    /*判断是否是左半边*/
    bool isLeftSymbol(char c) {
        return (c== '(') || (c == '[') || (c == '{');
    }
    /*判断二者是否一对儿,利用ASCII码*/
    bool isPair(char left, char right) {
        return (right-left== 1) || (right-left== 2);
    }
};

#if 0
int main() {
    string test = "()[]{()}";
    Solution s1;
    cout << s1.isValid(test)<< endl;
    return 0;
}
#endif
