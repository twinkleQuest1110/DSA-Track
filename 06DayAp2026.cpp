// #include <iostream>  //pro 387
// using namespace std;

// int firsrUnique(string s){
//     int freq[26] ={0};
//     for(char ch:s){
//         freq[ch-'a']++;
//     }
//     for(int i=0;i<s.length();i++){
//         if(freq[s[i]-'a']==1){
//             return i;
//         }
//     }
//     return -1;

// }
// int main(){
//     string s ="yoyoGit";
//     cout<<firsrUnique(s);
// return 0;
// }
/********------------------------------------------------------------ */

// Matrix Linear Searching
// #include <iostream>
// using namespace std;

// pair<int,int> linS(int arr[][4],int key,int r=3,int c=4){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]==key){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};

// }
// int main(){
//     int arr[3][4] = {{1,2,5,9},{12,9,3,0},{10,50,4,8}};
//     int r=3,c=4;
//     int key =3;
//     pair<int,int>res = linS(arr,key,r,c);
//     cout<<res.first<<" "<<res.second;
//     return 0;
// }   

/*** MAtrix Binary Searching */
#include <iostream>
/*  00  01 02 03
    10  11 12 13
    20  21 22 23*/ 
using namespace std;
bool searchInRow(int arr[][4],int tar,int r,int c=4){
    int st =0,end = c-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(tar==arr[r][mid]){
            return true;
        }else if(tar>=arr[r][mid]){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return false;

}
bool binS(int arr[][4],int key,int r=3,int c=4){
    int stR =0 , eR = r-1;
    while(stR<=eR){
        int midR = stR + (eR - stR) / 2;
        if(key>=arr[midR][0] && key<=arr[midR][c-1]){
            return searchInRow(arr,key,midR);

        }else if(key>arr[midR][c-1]){
            stR = midR+1;

        }else{
            eR=midR-1;

            
        }
    }
    return false;
}
   

int main(){
    int arr[3][4] = {{1,2,5,9},
                     {12,19,23,40},
                     {49,50,64,89}};
    int r=3,c=4,tar=64;                 

    cout<<binS(arr,tar,r,c);                 
return 0;
}