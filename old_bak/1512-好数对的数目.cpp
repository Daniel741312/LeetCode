#include<iostream>
#include<vector>
using namespace std;
//n个不同元素组成的偏序对的数目:n*(n-1)/2

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int sum = 0;

        vector<int> cnt(100);
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
            cnt[*it-1]++;

        for (vector<int>::iterator it = cnt.begin(); it != cnt.end(); it++)
            sum = sum + (((*it) * (*it - 1)) >> 1);

        return sum;
    }
};

#if 0
int main(int argc, char* argv[]) {
    Solution s1;
    vector<int> t = { 1,2,3,1,1,3 };
    cout << s1.numIdenticalPairs(t) << endl;
    return 0;
}
#endif