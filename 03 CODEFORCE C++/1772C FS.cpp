// URL: https://codeforces.com/problemset/problem/1772/C

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    "\n"
#define   ln      cout<<"\n";
#define   pb      push_back
#define   eb      emplace_back
#define   rn      return 0;

#define   pa      cout<<ans<<endl
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n, k; cin>>n>>k;
      set<ll> s;
      
      s.insert(1);
      s.insert(2);
      
      ll d=1, prev=2;
      for(ll i=3; i<k; i++){
         d++;
         if(prev+d > k) break;
         s.insert(prev + d);
         prev = prev+d;
      }
      
      for(ll i=k; ;i--){
         if(s.size()>=n) break;
         s.insert(i);
      }  
      
      ll cnt=0;
      for(auto it:s){
         cnt++;
         cout << it << " "; 
          if(cnt==n) break; 
      }  
      ln;
   }
   
   SpicyWings;
}