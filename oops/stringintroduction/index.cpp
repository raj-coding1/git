#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name="rajkumar";
    cout<<name;
    char find;
    cout<<"enter a character to search: ";
    cin>>find;
    cout<<endl;
    for(int i=0;i<8;i++){
        if(name[i]==find){
            cout<<i;
        }
    }
}
