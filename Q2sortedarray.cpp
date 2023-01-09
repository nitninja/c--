#include<bits/stdc++.h>

using namespace std;

int main(){

  vector<int> vec1;


  int n;
  int num;


    cout<<"enter the no. of elements you want to put in:";
    cin>>n;

    for(int i=0;i<n;i++){

        cin>>num;
        vec1.push_back(num);
    }

    sort(vec1.begin(),vec1.end());
    //  for(auto x:vec1){
    //     cout<<x<<" ";

    // }s

    for(auto x:vec1){
        if(vec1[x+1]==vec1[x]){
            continue;
        }

        else if(vec1[x]<vec1[x+1]){
            if(vec1[x+2]==vec1[x+1]){
                continue;
            }
            else if(vec1[x+2]>vec1[x+1]){
                cout<<vec1[x+1];
                break;
            }

        }

    }

   
        return 0;



}