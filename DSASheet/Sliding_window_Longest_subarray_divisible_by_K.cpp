#include<bits/stdc++.h>
using namespace std;

int main(){
  
    vector<int> ar={ 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int sum=0;
    int maxLength=0;
    int k=4;
    int n=ar.size();
    int rem;
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        sum+=ar[i];
        rem=sum%k;
        if(rem==0){
            maxLength=max(maxLength,i+1);
        }
        if(rem<0){
            rem+=k;
        }
        if(mp.find(rem)==mp.end()){
            mp[rem]=i;
        }
        else{
            int len=i-mp[rem];
            maxLength=max(len,maxLength);
        }
        
        
        
    }
    
    cout<<maxLength;
  
  return 0;  
}