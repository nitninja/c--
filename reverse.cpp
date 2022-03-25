#include<bits/stdc++.h>
using namespace std;
using std::cout; using std::endl;
using std::vector;


vector<int> reverseArray(vector<int> a) {
    int s=a.size();
    vector<int> vec(s);
        int num;
    int temp;
    for(int i=0;i<sizeof(a);i++){
           temp=a[i];
           vec[s]=temp;
           s--;
          }    
    return a;
}
int main(){
  
    vector<int> arr = {1,2,3,4,5};
    vector<int> arrby4;

    arrby4 = reverseArray(arr);
    cout << "arr    - | ";
    copy(arr.begin(), arr.end(),
         std::ostream_iterator<int>(cout," | "));
    cout << endl;
    cout << "arrby4 - | ";
    copy(arrby4.begin(), arrby4.end(),
         std::ostream_iterator<int>(cout," | "));
    cout << endl;
    
  
  
  return 0;  
}