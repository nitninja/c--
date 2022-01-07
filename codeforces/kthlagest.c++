#include<bits/stdc++.h>
using namespace std;

int main(){
  
   int n,q;
   cin>>n>>q;
  vector<int> vec;
  int num;
   for(int i=0;i<n;i++){
     cin>>num;
     vec.push_back(num);
   }
    int q1,pos;
    vector<int> newvec;
  
   for(int i=0;i<q;i++){
     cin>>q1>>pos;
     if(q1==1){
       vec[pos]=1-vec[pos];
        newvec.push_back(vec[pos]);
     }
     if(q1==2){
        sort(vec.begin(),vec.end());
        newvec.push_back(vec[pos]);
     }
   }

   for(int i=0;i<newvec.size()-1;i++){
     cout<<newvec[i]<<endl;
   }
  
  
  return 0;  
}