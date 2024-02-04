#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<int>arr, int n, long long s){
     int l=0;
        int r=0;
        int mid=0;
        vector<int>v;
       while(r<=l){
            // mid=i+l/2;
            mid=mid+arr[l];
          
            if(mid<s){
                l++;
            }
            if(mid>s)
            {
                mid=mid-arr[r];
                r++;
            }
              if(mid==s){
              v.push_back(r+1);
              v.push_back(l+1);
              break;
            }
            
        }
        return v;
        
}
int main(){
   vector<int>v(5);
   v[0]=1;
   v[1]=2;
   v[2]=3;
   v[3]=4;
   v[4]=5;
   long long s=9;
   vector<int>res;
   res=sum(v,5,s);
   for(int i=0;i<res.size();i++){
    cout<<res[i];
   }
    

}  