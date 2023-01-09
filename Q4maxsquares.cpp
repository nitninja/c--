#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;

int p=n*n;

int s=1;

for(int i=0;i<n/2;i++)
{

    if(s*i>p){
        continue;
    }
    else {
        cout<<(s*i)-p;
    }
}

return 0;

}