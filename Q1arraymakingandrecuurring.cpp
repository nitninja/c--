#include<bits/stdc++.h>

using namespace std;

int main(){
   
    string S;
    
    cin>>S;
    int n=S.length();
    char s[n+1];
    vector<char> vec1;

    vec1.push_back(1);
    strcpy(s,S.c_str());

    for(int x=0;x<n+1;x++){
       vec1.push_back(s[x]);    
    }
       
        for(int i=1;i<vec1.size()/3;i++){
           cout<< vec1[3*i]<<" ";
        }
      
    cout<<endl;
    for(auto x:vec1){
        cout<<x<<" ";
    }
    int max=0;
    int maximum;
    char Char;
    vector<int> count;
    for(int i=0;i<vec1.size();i++){

        max=1;
         for(int j=0;j<vec1.size();j++){
            if(vec1[i]==vec1[j]){
                max++;
                count.push_back(max);
                
            }

           }

           for (int i=0;i<count.size();i++){
               if (maximum<count[i]){
                   maximum=count[i];
                   Char=vec1[i+1];
                   
               }

           }


        
    }
    cout<<Char<<endl;

    return 0;

}