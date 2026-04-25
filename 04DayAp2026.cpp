// // reverse word in string {blue is sky the = the sky is blue}
// #include <iostream>
// #include <algorithm>
// using namespace std;
// string print(string s){
//     int n =s.length();
//     string ans ="";
//     reverse(s.begin(),s.end());
//     for(int i=0;i<n;i++){
//         string word = "";
//         while(i<n && s[i]!=' '){
//             word+=s[i];
//             i++;
//         }
//         reverse(word.begin(),word.end());
//         if(word.length()>0){
//             ans+=" "+word;
//         }
//     }
//     return ans.substr(1);
// }
// int main() {
//     string s ="the sky is blue";
//     cout<<print(s);
//     return 0;
// }

/****** Single element ******************** */
// #include <iostream>
// #include <vector>
// using namespace std;
// int sum(vector<int> &arr){
//     int a = 0;
//     for(int x:arr){
//         a^=x;
//     }
//     return a;
// }
// int main(){
//     vector<int> arr = {4,1,2,1,4};
//     cout<<sum(arr);
// return 0;
// }

/*** 2274. Maximum Consecutive Floors Without Special Floors */
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int spec(int b,int t,vector<int>& s){
//     sort(s.begin(),s.end());
//     int n = s.size();
//     int sol = 0;
//     sol = max(sol,s[0]-b);
//     for(int i=1;i<n;i++){
//         sol = max(sol,s[i]-s[i-1]-1);
//     }
//     sol = max(sol,t-s.back());
//     return sol;
// }
// int main(){
//     int b = 6,t = 8;
//     vector <int> s ={7,6,8};
//     cout<<spec(b,t,s);
// return 0;
// }

//----------------------------------------------------------------------------------
// **********BRUT____array product 
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> solution(vector<int> &arr){
//     int n = arr.size();
//     vector<int> ans(n,1);

//     for(int i=0;i<n;i++){
//         int pro = 1;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 pro = pro*arr[j];
//             }
//         }
//         ans[i]=pro;
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr = {1,2,3,4};
//     vector<int>  result = solution(arr);
//     for(int x:result){
//         cout<<x<<" ";
//     }
// return 0;
// }
/************************************************* */
#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int suffix =1;
    vector<int> sol(n,1);
    
    for(int i=1;i<n;i++){
            sol[i] = sol[i-1]*nums[i-1];
        }
        
        for(int i=n-2;i>=0;i--){
            suffix *= nums[i+1];
            sol[i] *= suffix;
            
        }
        
        return sol;
    }
    
int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> res = productExceptSelf(nums);
    for(int x:res)cout<<x<<" ";

return 0;
}