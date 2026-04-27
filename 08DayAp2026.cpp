// // 33 Rotated sorted Array
// #include <iostream>
// #include <vector>
// using namespace std;
// bool sol(vector<int>& N,int k){
//     int st=0,end = N.size()-1;

//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(N[mid]==k) return true;

//         if(N[st]<=N[mid]){

//             if(N[st]<= k && k<= N[mid]){
//                 end = mid-1;
//             }else{
//                 st = mid+1;
//             }

//         }else{

//             if(N[mid]<= k && k <=N[end]){
//                 st = mid+1;
//             }else{
//                 end= mid-1;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     vector<int> arr = {3,4,5,6,7,0,1,2};
//     int tar = 5;
//     cout<<sol(arr,tar);
// return 0;
// }

/***** 550 single element in array */
#include <iostream>
#include <vector>
using namespace std;
int sol(vector<int>& arr){
    int n = arr.size();
    int st =0 , e=n-1;
    if(n==1)return n-1;
    while(st<=e){
        int mid = st+(e-st)/2;
        //corner case
        if(mid==0 && arr[0]!=arr[1]) return mid;
        if(mid==n-1 && arr[n-1]!=arr[n-2]) return mid;
        //mid as answer
        if(arr[mid-1] != arr[mid]  && arr[mid+1]!=arr[mid])return mid;
        //odd and even Conditions
        if(mid%2==0){
            if(arr[mid]==arr[mid-1]){
                e = mid-1;
            }else{
                st = mid+1;
            }
        }else{
            if(arr[mid]==arr[mid-1]){
                st = mid+1;

            }else{
                e = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector <int> arr = {1,1,2,3,3,4,4};
    cout<<sol(arr);

return 0;
}