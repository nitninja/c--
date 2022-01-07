#include<bits/stdc++.h>

using namespace std;

int main(){
int num;
int count=0;

cin>>num;
vector<int> vec;
int max=0;
// for(int i=0;i<num;i++){

// if(num%i==0){
//     max++;
// }  
// }
// cout<<max;

for(int i=1;i<=(num);i++){
count++;
if(num%count==0){
    vec.push_back(count);
}
}

for(int i=0;i<sizeof(vec);i++){
    cout<<vec[i]<<"\n"<<endl;
}

int x;
cin>>x;


cout<<vec[x-1];






}