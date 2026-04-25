// #include <iostream>
// #include <vector> 
// zeros to end
// using namespace std;
// int main(){
//     vector<int> arr ={5,0,1,0,3,12};
//     int n=arr.size();
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     for(int x:arr){
//         cout<<x<<" ";
//     }
// return 0;
// }

/******************************************************************** */
//Two Sum = target
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] ={5,1,6,4,3,0};
//     int tar = 9;
//     int n = sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         for (int j = i+1; j < n; j++)
//         {
//             if(arr[i]+arr[j]==tar){
//                 cout<<arr[i]<<" and "<<arr[j]<<endl;
//             }
//         }
//     }
// return 0;
// }
/**************************************************************** */
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
    // int arr[] = {5,1,6,4,3,0};
//     int tar = 9;
//     int n = sizeof(arr)/sizeof(int);

//     sort(arr, arr+n);

//     int l = 0, r = n-1;

//     while(l < r) {
//         int sum = arr[l] + arr[r];

//         if(sum == tar) {
//             cout << arr[l] << " and " << arr[r] << endl;
//             l++;
//             r--;
//         }
//         else if(sum < tar) l++;
//         else r--;
//     }

//     return 0;
// }
/**************************************************** */
// first non reapeating no. O(n)
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// int main(){
//     vector<int> arr= {2,5,1,2,4,0,4,0};
    
//     int n = arr.size(); 
//     unordered_map<int,int>freq;
    
//     for(int x:arr){
//         freq[x]++;
//     }
//     for(int x:arr){
//         if(freq[x]==1){
//             cout<<"No is:"<<x;
//             break;
//         }
//     }
// return 0;
// }
/*------------------------------------------------------ */
//Brut force O(n*2)
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr= {2,9,5,5,1,2,4,0,4,0};
//     int n = arr.size();

//     for(int i=0;i<n;i++){
//         bool isUniq  = true; 

//         for(int j=0;j<n;j++){

//             if(i!=j && arr[i]==arr[j] ){
//                 isUniq = false;
//                 break;
//             }
//         }

//         if(isUniq){
//             cout<<arr[i];
//             break;
//         }
//     }
// return 0;
// }
/****************************************************************** */
// intersection of  two array array brute force
// #include <iostream>
// using namespace std;
// int main(){
//     int a1[] = {4,2,6,3};
//     int a2[] = {0,9,4,3,1};
//     int n1 = sizeof(a1)/sizeof(int);
//     int n2 = sizeof(a2)/sizeof(int);

//     for(int i =0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(a1[i]==a2[j]){
//                 cout<<a1[i]<<" ";
//             }
//         }
//     }
// return 0;
// }
/*----------------------O(n)-------------------------------------*/
// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main(){
//     int a1[] = {4,2,6,3};
//     int a2[] = {0,9,4,3,1};

//     int n1 = sizeof(a1)/sizeof(int);
//     int n2 = sizeof(a2)/sizeof(int);

//     unordered_set<int> s;

//     // store elements of first array
//     for(int i = 0; i < n1; i++){
//         s.insert(a1[i]);
//     }

//     // check in second array
//     for(int i = 0; i < n2; i++){
//         if(s.find(a2[i]) != s.end()){
//             cout << a2[i] << " ";
//             s.erase(a2[i]); // ⭐ avoids duplicate printing
//         }
//     }

//     return 0;
// }