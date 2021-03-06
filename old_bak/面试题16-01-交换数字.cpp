#include<iostream>
#include<vector>
using namespace std;
/*不用临时变量交换两个数字-异或*/
/*
    *逼逼赖赖:异或运算-异则真,同则假,数电中的半加器就是一个异或门(不考虑进位的加法)
    *我觉得可能也正是因为他有加法的特性,他能保存住两个变量的信息,再异或进行还原    
*/

class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        numbers[0] = numbers[0] ^ numbers[1];
        numbers[1] = numbers[0] ^ numbers[1];
        numbers[0] = numbers[0] ^ numbers[1];
        return numbers;
    }

    /*爷决定用加减法试一试*/
    vector<int> swapNumbers2(vector<int>& numbers) {
        numbers[0] = numbers[0] + numbers[1];
        numbers[1] = numbers[0] - numbers[1];
        numbers[0] = numbers[0] - numbers[1];
        return numbers;
    }
    /*果然溢出了*/
};

#if 1
int main(int argc, char* argv[]) {
    vector<int> num = { 1,2 };
    Solution* s1 = new Solution;
    num=s1->swapNumbers2(num);
    for (vector<int>::iterator it = num.begin(); it != num.end(); it++)
        cout << *it << endl;

    delete(s1);
    return 0;
}
#endif