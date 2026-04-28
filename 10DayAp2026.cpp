// #include <iostream>
// #include <vector>

// using namespace std;
// // using Vectors
// class stack{
//     vector<int> s;

//     public:
//         void push(int val){
//             s.push_back(val);
//         }
//         void pop(){
//             s.pop_back();
//         }
//         int top(){
//             return s[s.size()-1];
//         }
//         bool isEmpty(){
//             return s.size()==0;
//         }
// };
// int main(){
//     stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     while(!s.isEmpty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
// return 0;
// }
//---------------------------------------------------------------
// BY LL
// #include <iostream>
// #include <vector>
// #include <list>

// using namespace std;

// class stack{
//     list<int> ll;

//     public:
//         void push(int val){
//             ll.push_front(val);
//         }
//         void pop(){
//             ll.pop_front();
//         }
//         int top(){
//             return ll.front();
//         }
//         bool isEmpty(){
//             return ll.size()==0;
//         }
// };
// int main(){
//     stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     while(!s.isEmpty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
// return 0;
// }
//---------------------------------------------------------------------
#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

return 0;
}