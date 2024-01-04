// URL: https://codeforces.com/contest/1199/problem/B

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
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
    
   ll H, L; cin>>H>>L;
   
   ld pi = acos(-1);
   
   ld angle = atan((ld)L / (ld)H) * (180.0/pi);
   angle = 180.0 - (2.0*angle);
   
   ld depth = (ld)L / tan(angle * (pi/180.0));
   
   cout << setp(13);
   cout << depth << endl;

   SpicyWings;
}