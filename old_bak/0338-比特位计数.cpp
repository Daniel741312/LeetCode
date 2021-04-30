#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    /*一个比较垃圾的解法,但是顺便复习一下map键值对儿的用法*/
    vector<int> countBits2(int num) {
        vector<int> ret = {};
        int i = 0;
        int j = 0;
        int sum = 0;
        char s1[8];

        /*定义并初始化一个map*/
        map<char, int> m1;
        m1.insert(pair<char, int>('0', 0));
        m1.insert(pair<char, int>('1', 1));
        m1.insert(pair<char, int>('2', 1));
        m1.insert(pair<char, int>('3', 2));
        m1.insert(pair<char, int>('4', 1));
        m1.insert(pair<char, int>('5', 2));
        m1.insert(pair<char, int>('6', 2));
        m1.insert(pair<char, int>('7', 3));
        m1.insert(pair<char, int>('8', 1));
        m1.insert(pair<char, int>('9', 2));
        m1.insert(pair<char, int>('a', 2));
        m1.insert(pair<char, int>('b', 3));
        m1.insert(pair<char, int>('c', 2));
        m1.insert(pair<char, int>('d', 3));
        m1.insert(pair<char, int>('e', 3));
        m1.insert(pair<char, int>('f', 4));

        for (i = 0; i <= num; ++i) {
            /*对于每一个i,将他以十六进制形式打印到s1*/
            sprintf_s(s1, "%x", i);
            sum = 0;
            /*从map中查询每一个十六进制数对应的1的个数,累加*/
            for (j = 0; s1[j] != '\0'; ++j)
                sum = sum + m1[s1[j]];
            ret.push_back(sum);
        }
        return ret;
    }

    /*思考一个更加完善的解法*/
    vector<int> countBits(int num) {
        vector<int> ret;

        return ret;
    }
};

#if 0
int main(int argc, char* argv[]) {
    Solution* s1 = new Solution();
    vector<int> ret;
    ret=s1->countBits(5);
    for (vector<int>::iterator it = ret.begin(); it != ret.end(); ++it)
        cout << *it << endl;
    delete(s1);
    return 0;
}
#endif