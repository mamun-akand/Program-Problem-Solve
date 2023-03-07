#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll    long long int
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

#define   Test    ll tc; cin>>tc; f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      
      cout << ceil(n/2.0) << endl;
      
      ll op, m;
      
      if(n%2==1){
         op=(n-1)/2;
         m=n-1;  
      }
      else{
         op=n/2;
         m=n;  
      }
      
      if(n==1){
         cout << 1 << " " << n*3 << endl;
         continue;
      }
      
      for(ll i=1, j=m*3; ; i+=3, j-=3){
         cout << i << " " << j << endl;
         op--;
         if(op==0) break;
      }
      
      if(n%2==1){
         cout << 2 << " " << n*3 << endl;
      }
      
   }
   
   SpicyWings;
}

















