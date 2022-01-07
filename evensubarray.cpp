#include<bits/stdc++.h>

using namespace std;

int main(){

vector<int> vec;

int n,num;
int o=0;
int count=0;
cin>>n;
int temp[n+1]={0};
for(int i=0;i<n;i++){

    cin>>num;
    vec.push_back(num);
}
int k;
cin>>k;

// for(int i=0;i<n;i++){
        
//     for(int j=i;j<n;j++){

//             for(int k=i;k<=j;k++){

                

//        cout<<vec[k]<<"  ";
//             }
//         cout<<endl;

//     }
//     cout<<endl;
        
// }

for(int i=0;i<n;i++){
        temp[o]++;
   if(vec[i]%2!=0){
       o++;
   }

   if(o>=k){
       count+=temp[o-k];
   }
        
}

cout<<count;



}