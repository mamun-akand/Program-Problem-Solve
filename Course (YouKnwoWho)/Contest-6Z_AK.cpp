// URL: https://vjudge.net/contest/577004#problem/AK

#include<bits/stdc++.h>
using namespace std;
 
//====================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   SpicyWings  return 0;
#define   endl    "\n"
 
#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================
 
int main(){
   FAST;
   
   ll n, total; cin>>n>>total;
   vll v(n); for(auto &it:v) cin>>it;
   sort(all(v));
   
   ll L=0, R=n-1, cnt=0;
   while(L<=R){
      if(v[L]+v[R] <= total){
         cnt++;
         R--; L++;
      }
      else{
         cnt++;
         R--;
      }
   }
   cout << cnt << endl;
   
   SpicyWings;
}