// URL: https://codeforces.com/contest/1905/problem/B

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
   
   Test{
      ll n; cin>>n;
      map<ll,ll> mp;
      n--;
      while(n--){
         ll x, y; cin>>x>>y;
         mp[x]++;
         mp[y]++;
      }
      
      ll ans=0;
      for(auto [x, y]:mp){
         if(y == 1) ans++;
      }
      cout << ceil(ans/2.0) << endl;
   }
    
   SpicyWings;
}