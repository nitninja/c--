#include <bits/stdc++.h>

using namespace std;

int main(){
  
 int num1,num2;
 vector<int> vec1;
 vector<int> vec2;

 int n,m;
    // cin>>n>>m;
      cin>>n;

   for (int i = 0; i < n; ++i) {
       cin>>num1;
       vec1.push_back(num1);
   }

   // vector<int> vec2;

   // for(int i=0;i < m; ++i){
   // cin>>num2;

   //     vec2.push_back(num2);

   // }
      int num3=1;
     
     for(int i=0;i<vec1.size();++i){
      
      
      num3=num3*vec1[i];
      
   }
   int count=0;
   int lcm;
   int con=1;
   for(int i=1;i<=num3;++i){

for(int i=0;i<vec1.size();++i){
    
    if(con%vec1[i]==0){
      
        continue;
        count++;
    }
    else{break;}
        
}
// if(count==n){break;lcm=con;}
// else {continue;}
 vec2.push_back(con);

   con++;

}

// cout<<lcm;

for(int i=0;i<vec2.size();++i){
    cout<<vec2[i]<<endl;}
// }

//       if(con%vec1[i]==0){
//         // vec2.push_back(vec[i]);
    
//     for(int j=0;j<vec1.size();++j){
        
//         if(con%vec1[j]==0){

//          lcm=vec1[j];

//         // continue;
//       }
      
     

//       else{
//         break;
//       }
//      con++; 
  
//    }  

//   }  
      
// }




    
   // cout<<num3<<endl;
   //  cout<<lcm;
    // int num1,num2;
    // cin>>num1>>num2;
    // int con=1;
    // for(int i=1;i<=(num1*num2);++i){
    //     if (con%num1==0&&con%num2==0){
    //         cout<<con;
    //         break;
    //     }
    //     con++;
    // }




    return 0;

}