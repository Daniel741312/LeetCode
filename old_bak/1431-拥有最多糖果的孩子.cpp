#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        int d = 0;
        int i = 0;

        for (vector<int>::iterator it = candies.begin(); it != candies.end(); it++)
            if (*it > max)
                max = *it;
        d = max - extraCandies;

        vector<bool> ret(candies.size());
        for (i = 0; i < ret.size(); i++)
            ret[i] = candies[i] >= d;
        return ret;
    }
};

#if 0
int main(int argc, char* argv[]) {
    Solution s1;
    vector<int> candies = { 2,3,5,1,3 };
    int extraCandies = 3;
    vector<bool> ret(candies.size());
    
    ret=s1.kidsWithCandies(candies, extraCandies);
    for (vector<bool>::iterator it = ret.begin(); it != ret.end(); it++)
        cout << *it << " ";

    return 0;
}
#endif