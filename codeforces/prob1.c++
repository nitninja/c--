#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;  
    int n;
    int count;
    vector <int> vec;
      
    cin>>n;
    char first;
    char last;

    for(int i=0;i<n;i++){   
        cin>>s;
        count=s.length();
       vec.push_back(count);
       if(s.length()>10){
           for(int i=0;i<s.length();i++)
           {
               if(i==0){
                    first=s[i];
               }
               if(i==s.length()-1){
                   last=s[i];
               }
           }
           cout<<first<<count-2<<last<<endl;
        }

        else
        cout<<s<<endl;
        
    }
    
}