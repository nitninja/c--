#include<bits/stdc++.h>
using namespace std;

int main(){
//   int ar[]={1, 2, -2, 2, 2};
 array ar= {19 ,14, 1, 9, 20};
 int num=19;
 int sum=0;
 int maxLength=0;
 int maxSum=0;
 for(int i=0;i<ar.size();i++){
    sum+=ar[i];
    if(ar.size()==1){
        if(sum%num==0){
            maxLength=1;
            break;
        }
    }
    if(sum%num==0){
            maxLength=max(maxLength,1);
        }
    for(int j=i+1;j<ar.size();j++){
        sum+=ar[j];

        if(sum%num==0){
            
            maxLength=max(maxLength,(j-i+1));    
            if(maxLength==0){
                maxLength=1;
            }
        }
    }
    sum=0;
 }

 cout<<"max length:"<<" "<<maxLength<<endl<<"arr size:"<<ar.size();
  
  
  return 0;  
}