#include <bits/stdc++.h>
using namespace std;
long factorial (int n);
int main(){

    float x;
    float n;
    cin>>x>>n;

    float sum,diff;
    float sumtotal=0,difftotal=0;
    float grandtotal;
    // for(int i=1;i<n-2;i++){

    //     if()

    //     p=(-(pow(x,i+2)/(i+2)))+(pow(x,i+4)/(i+4))
        
    // }

    for (int i=1;i<=n;i=i+4){

        sum=(pow(x,i)/factorial(i));
        sumtotal=sumtotal+sum;

    }

    for (int i=3;i<=n;i=i+4){

        diff=(pow(x,i)/factorial(i));
        difftotal=difftotal+diff;

    }


grandtotal=sum-diff;

cout<<grandtotal;



}

    long factorial(int n){

        if(n>=1)
        {
            return n*factorial(n-1);
        }
        else return 1;
        
        
}





