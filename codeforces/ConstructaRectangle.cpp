#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int n;
    cin>>n;
    int nums;
    vector<vector<int>> vec;
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
        cin>>nums;
            temp.push_back(nums);    
        }
        vec.push_back(temp);
        temp.clear();
    }

    
// for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//         cout<<
//             vec[i][j];    
//         }cout<<endl;
// }
  
  return 0;  
}