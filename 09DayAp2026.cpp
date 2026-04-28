// // Allocate book
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isValid(vector<int>&arr,int n,int m,int maxAllPage){
//     int stud = 1,pages =0;  //O(n)

//     for(int i=0;i<n;i++){
//         if(arr[i]>maxAllPage){
//             return false;
//         }
//         if(pages+arr[i]<=maxAllPage){
//             pages +=arr[i];
//         }else{
//             stud++;
//             pages = arr[i];
//         }
//     }
//     return stud>m ? false:true;
// }

// int allBook(vector<int>&arr,int n,int m){
//     if(m>n){            // O(logN * n)
//         return -1;      // N = range
//     }                   // n = no. of pages
                        
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }

//     int ans =-1;
//     int st =0 ,end = sum;  //This is range
    
//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(isValid(arr,n,m,mid)){
//             ans = mid;
//             end = mid-1; //left
//         }else{
//             st = mid+1; //  right
//         }
//     }
//     return ans;
// }
// /*  O(n) + O(log(sum) × O(n))
// =   O(n) + O(n log(sum))
// =   O(n log(sum))                   */

// int main(){
//     vector<int> arr= {2,1,3,4};
//     int m =2;
//     int n  = 4;
//     cout<<allBook(arr,n,m);
// return 0;
// }   
/*---------------------------------------------------------------------------------------*/
// BOAT - Paint UNITS
#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> &arr,int n,int m,int max){
    for(int i=0;i<n;i++){
        
    }
}
int sol(vector<int> &arr,int n,int m){
    if(m>n){
        return -1;
    }
    int s =0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    int st =0;
    int e = s;
    while(st<=e){
        int mid = st+(e-st);
        if(isValid(arr,n,m,mid)){

        }
    }
}
int main(){
    vector<int> arr = {10,8,16,3,19};
    int p = 2;
    int n  =5;
    cout<<sol(arr,n,p);
return 0;
}