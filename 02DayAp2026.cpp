// //Binary searching  M_1
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] ={5,6,10,19,50};
//     int f = 29;
//     int n= sizeof(arr)/sizeof(int);
//     int l= 0;
//     int h= n-1;
//     while(l<=h){
//         int mid = (l+h)/2;
//         if(arr[mid]==f){
//             cout<<"Found";
//             return 0;
//         }else if(arr[mid]>f){
//             h = mid-1;
//         }else{
//             l = mid+1;
//         }

        
//     }
//     cout<<"not found";

// return 0;
// }
//---------------------------------------------------------------------
// M_2
#include <iostream>
using namespace std;
int binaryS(int arr[],int t,int l,int h){
    int mid =(l+h)/2;
    if(l>h){
        return -1;
    }
    if(arr[mid]==t){
        return mid+1;
    }else if(arr[mid]>t){
        return binaryS(arr,t,l,mid-1);
    }else{
        return binaryS(arr,t,mid+1,h);

    }
}

int main(){
    int arr[] ={5,6,10,19,50};
    int f = 19;
    int n= sizeof(arr)/sizeof(int);
    int l=0,h=n-1;
    if(binaryS(arr,f,l,h)==-1){
        cout<<"NOT FOUND";
    }else{
        cout<<"Found at position:"<<binaryS(arr,f,l,h);
    }
return 0;
}
