#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int n;
    cin>>n;
    int num1,sum1=0,num2,sum2=0,num3,sum3=0;
    for(int i=0;i<n;i++){
        cin>>num1;
        sum1=sum1+num1;
    }
    for(int i=0;i<n-1;i++){
        cin>>num2;
        sum2+=num2;
    }
    for(int i=0;i<n-2;i++){
        cin>>num3;
        sum3+=num3;
    }

    cout<<sum1-sum2<<endl<<sum2-sum3;
  
  
  return 0;  
}