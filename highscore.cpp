#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<int> vec1;

  int n;
  int score;
  int high=0;
  int counthigh=0;
  int low=0;
  int countlow=0;
  cin>>n;
  for (int i=0;i<n;i++){
   cin>>score;
   vec1.push_back(score);
   
  }
   
   
// for(int i=0;i<vec1.size();++i){
//   high=vec1.at(i); 
//   if(vec1[i+1]>high)


//   if(vec1[i+1]>=vec1[i]){
     
//      count++;
     
//   }

//   else if(vec1[i+1]<vec1[i]){
//   	high=vec1[i];

//   }

 for(int i=0;i<vec1.size();++i){
    
    if(vec1[i]>vec1[i+1]){

    	high=vec1[i];
    	counthigh=0;
    	for(int j=0;j<vec1.size();++j){
    		if(high>vec1[j]){
    			continue;
    		}
    	   else{
            counthigh++;
    	   	high=vec1[j];}
    	}
    

       
}


     }


    for(int k=0;k<vec1.size();++k){

     if(vec1[k]<vec1[k+1]){
        
        low=vec1[k];
        for(int l=0;l<vec1.size();++l){

        	if(low<vec1[l]){
        		continue;
        	}
        	else{
                 countlow++;
        		low=vec1[l];
        	}
        }

     }


    }  
 

 




cout<<high<<endl<<low<<endl<<counthigh<<" "<<countlow ;
return 0;

}