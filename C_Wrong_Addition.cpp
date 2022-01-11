#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fo(i, a, b) for(int i = 0 ; i <= b; i++)


void solve(){
    ll a, s;
    cin >> a >> s;
    vector<int> b;
    while(s){
        ll x = a%10;
        ll y = s%10;
        if(x <= y) b.push_back(y-x);
         
        else {
            s /= 10;
            y += 10 * (s % 10);
            if(x < y && y >= 10 && y <= 19) b.emplace_back(y - x);
            else{
                cout<< -1 << '\n';
                return;
            }
           

        }
       
        a /= 10;
        s /= 10;        
        
    }
    if(a) cout<< -1 << '\n';
    else{
        while(b.back() == 0) b.pop_back();
        for(int i = b.size() -1; i >= 0; i--){ 
            
            cout<<b[i];
        }
        cout<<'\n';
    }
    
    

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
     
        solve();
    }
    return 0;
}