#include<iostream>
using namespace std;
// void quick_sort(int arr[]){
//     int N=sizeof(arr)/sizeof(int);
    
// }
int main(){
    int arr[6]={5,3,7,2,6,4};
    // quick_sort(a);
    // for(int i=0;i<6;i++){
    //     cout<<a[i]<<" ";
    // }
    int N=6;
    int l=0;
    int r=N-1;
    int loc;
    loc=l;
    while(l<r){
        if(arr[r]<arr[loc]){
            swap(arr[r],arr[loc]);
            loc=r;
        }
        else{
            r--;
        }
        if(arr[l]<arr[loc]){
            swap(arr[l],arr[loc]);
            loc=l;
        }
        else{
            l--;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"hi";
}