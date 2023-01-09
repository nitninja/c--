#include<bits/stdc++.h>

using namespace std;

int main(){

vector<int> vec;
vector<int> temp;
int n,num;
cin>>n;
for(int i=0;i<n;i++){

    cin>>num;
    vec.push_back(num);
}
// int k;
// cin>>k;

for(int i=0;i<n;i++){
        
    for(int j=i;j<n;j++){

            for(int k=i;k<=j;k++){

                

       cout<<vec[k]<<"  ";
            }
        cout<<endl;

    }
    cout<<endl;
        
}

// for(int i=0;i<sizeof(temp);i++){
//     cout<<temp[i]<<endl;
// }



}