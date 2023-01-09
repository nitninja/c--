#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",&s)
#define pi(x) printf("%d",x)
#define pl(x) printf("%lld",x)
#define ps(s) printf("%s",s)
#define debug(x) cout<<#x<<"="<<x<<endl
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define itr(it,a) for(auto it=a.begin();it!=a.end();i++)
#define v_itr(c,a) for(auto c:a) 
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vl> vvl;



void solve(){

    int i,j,n,m;
    int num;
    int sum=0;
    vi v;
    si(n);
    fo(i,n){
    si(num);
    v.pb(num);}
    sortall(v);
    for(auto c:v){

     pi(c);
     ps(",");}
    ps("\n");
}

int main(){
  solve();
  return 0;  
}