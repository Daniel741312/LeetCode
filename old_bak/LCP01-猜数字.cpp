#include<iostream>
#include<vector>
using namespace std;
/*简直HelloWorld*/

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int cnt = 0;
        int i = 0;
        for (i = 0; i < 3; i++) {
            if(!(guess[i]^answer[i]))
                cnt++;
        }
        return cnt;
    }

};

#if 1
int main(int argc, char* argv[]) {
    vector<int> guess = { 1,2,3 };
    vector<int> answer = { 1,2,3 };
    Solution* s1 = new Solution;
    cout << s1->game(guess, answer) << endl;
    return 0;
}
#endif