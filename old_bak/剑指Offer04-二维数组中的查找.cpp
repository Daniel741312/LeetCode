#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix[0].size()==0||matrix.size()==0){
            return false;
        }
        const int COLUMNS=matrix[0].size();
        const int ROWS=matrix.size();

        int row=0,column=COLUMNS-1;
        while(row<ROWS&&column>=0){
            if(matrix[row][column]==target){
                return true;
            }else if(matrix[row][column]>target){
                column--;
            }else{
                row++;
            }
        }
        return false;
    }
};

int main(int argc,char* argv[]){
    Solution* s1=new Solution();

    vector<vector<int>> matrix={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    cout<<s1->findNumberIn2DArray(matrix,6)<<endl;

    delete(s1);
    return 0;
}