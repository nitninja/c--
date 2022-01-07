#include <bits/stdc++.h>
using namespace std;
int main(){
    float truevalue,measuredvalue;
    cin>>truevalue>>measuredvalue;
    float absolutevalue;
    absolutevalue=truevalue-measuredvalue;
    cout<<absolutevalue<<endl;
    float relativeerror;
    relativeerror=(absolutevalue/truevalue)*100;
    cout<<relativeerror<<"%"<<endl;
    cout<<abs(relativeerror*100)<<"%";
}