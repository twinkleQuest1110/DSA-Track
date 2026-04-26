// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void rotate(vector<vector<int>>& matrix) {
//     int row = matrix.size(); 
//     //  int column = matrix[0].size();
//     // it is square matrix as row = column
//     // Transpose
//     for (int i = 0; i < row; i++) {
//         for (int j = i; j < row; j++) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
    
//     //Reverse each row
//     for (int i = 0; i < row; i++) {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
// }

// int main(){
//     vector<vector<int>> arr = {{2,5,9},
//                                {12,19,23},
//                                {49,50,64}};
//     rotate(arr);                 
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr.size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }
/*-- matrix sorted in row & col -240----------------------------------------------------------------------------*/
// #include <iostream>
// #include <vector>
// using namespace std;

// bool seaK(vector<vector<int>>&mat,int tar){
//     int m = mat.size();
//     int n = mat[0].size();
//     int r=0,c=n-1;
//     while(r<m && c>=0){
//         if(tar==mat[r][c]){
//             return true;
//         }else if(tar<mat[r][c]){
//             c--;
//         }else{
//             r++;
//         }
//     }
//     return false;

// }
// int main(){
    // vector<vector<int>> arr = {{2,5,9,12},
    //                            {4,8,10,15},
    //                             {8,20,64,70}};
//     int tar =64;     
//     cout<<seaK(arr,tar);                       
// return 0;
// }
/*********************************************************************** */
//---- SPiRAL matriX
#include <iostream>
#include <vector>
using namespace std;
vector<int> sol(vector<vector<int>>& mat){
    vector<int> ans;
    int m = mat.size();
    int n = mat[0].size();
    int strow =0 , endrow = m-1;
    int stcol =0 , endcol = n-1;

    while(strow<endrow || strow<endrow){
        //top bound - L to right move
        for(int i=stcol;i<=endcol;i++){
            ans.push_back(mat[strow][i]);

        }
        //right bound - down move
        for(int j=strow+1;j<=endrow;j++){
            
            ans.push_back(mat[j][endcol]);
        }
        // bottom boundary - R to L move
        for(int i=endcol-1;i>=stcol;i--){
            if(strow==endrow) break;
            ans.push_back(mat[endrow][i]);
        }
        //left bound - upward move
        for(int j=endrow-1;j>=strow+1;j--){
            if(stcol==endcol) break;
            ans.push_back(mat[j][stcol]);
        }
        strow++; endrow--;
        stcol++; endcol--;
    }
    return ans;
}
int main(){ //2,5,9,12,15,70,100,152,3,0,8,4,8,10,64,20
    vector<vector<int>> arr = {{2,5, 9,  12},
                               {4,8, 10, 15},
                               {8,20,64, 70},
                               {0,3, 152,100}};
    vector<int> res = sol(arr);  
    for(int x:res)cout<<x<<" ";                         
return 0;
}