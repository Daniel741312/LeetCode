#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    /*һ���Ƚ������Ľⷨ,����˳�㸴ϰһ��map��ֵ�Զ����÷�*/
    vector<int> countBits2(int num) {
        vector<int> ret = {};
        int i = 0;
        int j = 0;
        int sum = 0;
        char s1[8];

        /*���岢��ʼ��һ��map*/
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
            /*����ÿһ��i,������ʮ��������ʽ��ӡ��s1*/
            sprintf_s(s1, "%x", i);
            sum = 0;
            /*��map�в�ѯÿһ��ʮ����������Ӧ��1�ĸ���,�ۼ�*/
            for (j = 0; s1[j] != '\0'; ++j)
                sum = sum + m1[s1[j]];
            ret.push_back(sum);
        }
        return ret;
    }

    /*˼��һ���������ƵĽⷨ*/
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