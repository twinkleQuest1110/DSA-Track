
#include <iostream>
#include <vector>
using namespace std;

bool sea(vector<vector<int>>& mat,int tar){
    int r = matrix.size(), c = matrix[0],size;
    int stR = 0  , endR = r-1;
    while(stR<=endR){
        int midR = stR+(endR-stR)/2;
        if(tar>=mat[midR][0] && tar<=mat[midR][c-1]);
    }
}
int main() {
    vector<vector<int>> arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int t= 34;
    cout<<sea(arr,t);

    return 0;
}