#include <bits/stdc++.h>
using namespace std;
float round(float var,int significant)
{
    float multi=pow(10,significant);
    float value = (int)(var * multi +.5);
    return (float)value / 100;
}
int main(){

    float num;
    int significant;
    cin>>num>>significant;
    
    
  
    float absolutevalue;
    absolutevalue=num-round(num,significant);
    cout<<num<<endl;
    cout<<round(num,significant)<<endl;
    cout<<absolutevalue<<endl;
    float relativeerror;
    relativeerror=(absolutevalue/num)*100;
    cout<<relativeerror<<"%"<<endl;
    cout<<abs(relativeerror*100)<<"%";
    


}