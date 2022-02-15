#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll,ll> pl;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fo(i, a, b) for(int i = 0 ; i <= b; i++)
#define F0R(i, a) for (int i=0; i<(a); i++)



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        
        vector<char> a(n);
        int countzero = 0;
        int countone = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        
        
        
        if(n%2 == 0){
            for(int i = 1; i <= n; i++){
                if(a[i] == '0'){
                    countzero += 1;
                }
                else{
                    countone += 1;
                }
            }
            if(countzero%2==0 && countone%2==0){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }

        else{
            cout<<"YES"<<"\n";
        }

    }
    return 0;
}
