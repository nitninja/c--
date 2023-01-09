#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;int c;
    int count=0;
    int arr[5]={0};
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>c;
        arr[c]++;
        vec.push_back(c);
    }
    sort(vec.begin(),vec.end());
    //  cout << "Sorted \n";
    // for (auto x : vec)
    //     cout << x << " ";
// for(int i=1;i<5;i++){
//     cout<<arr[i]<<" ";
// }

    if(arr[4]!=0){
        count=arr[4];
        arr[4]=0;
    }
    if(arr[3]!=0){
        count=count+arr[3];
    }
    if(arr[3]<arr[1]){
        arr[1]=arr[1]-arr[3];
    }
    else{
        arr[1]=0;}

     count=count+(arr[2]/2);
    
    if(arr[2]%2==1){
         count+=1;
         arr[1]=max(0,arr[1]-2);
        }
    count=count+(arr[1]/4);
    if(arr[1]%4!=0){
        count++;
    }
    cout<<count;
    
}