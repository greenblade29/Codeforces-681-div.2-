#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
     int a,b,start=-1,end=-1;
     cin>>a>>b;
     string input;
     cin>>input;
     int n=input.length();
     for(int i=0;i<n;i++){
         if(input[i]=='1'){
             start = i;
             break;
         }
     }
     for(int i=n-1;i>=0;i--){
         if(input[i]=='1'){
             end = i;
             break;
         }
     }
     if(start==end && start==-1){
         cout<<0<<endl;
     }
     else{
         int ans=a,zeros;
     for(int i=start;i<=end;i++){
         zeros=0;
         while(input[i]=='0'){
             zeros++;
             i++;
         }
         ans+= min(a,zeros*b);
     }
     cout<<ans<<endl;
     }
    }

    return 0 ;

}
