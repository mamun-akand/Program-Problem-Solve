// URL: https://codeforces.com/contest/1358/problem/B

#include<bits/stdc++.h>
using namespace std;

//=================================================================
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
#define   rn      return 0;
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n; 
      vll v(n); for(auto &it:v) cin >> it;
      
      sort(all(v));
      
      ll ans=0;
      
      for(ll i=v.size()-1; i>=0; i--){
         if(v[i] <= i+1){ ans=i+1; break; }
      }
   
      cout << ans + 1 << endl;
   }
   
   SpicyWings;
}



//*ALHAMDULILLAH*//