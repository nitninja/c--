#include <bits/stdc++.h>

using namespace std;



int main()
{
    int rem;
    int n;
    int count=1,max=0;
    cin >> n;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> vec;
    vector<int> vec1;
  rem=n%2;
  vec.push_back(rem);
    while(n>0){
        n=n/2;
        rem=n%2;
        vec.push_back(rem);
        

    }
    
    for(int i=0;i<vec.size();i++){
        
        
        if(vec[i]==1){
            if(vec[i]==vec[i+1]){
                count++;
            }
            
            
        }
        else {
        continue;
        }
        vec1.push_back(count);
        }
        
        
       
    cout<<max;

    return 0;
}

