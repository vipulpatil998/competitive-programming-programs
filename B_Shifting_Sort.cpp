#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,int> pii;
typedef long long ll;
#define f first
#define s second
#define pb push_back
#define mp make_pair

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<pii> actions;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++){
            int min_pos = i;
            for(int j = 0; i < n; j++){
                if(a[j] < min_pos)
                    min_pos = j;
            
            if(a[j] > i)
                actions.pb({i, min_pos});
                int opt =a[min_pos];
            for(int j = min_pos; j > i; j--){
                a[i] = a[j-1];
            a[i] = opt;
            }
            }
            
        
        }
        
        cout<<actions.size()<< "\n";
        for(auto &lr : actions){
            cout<< lr.first + 1 <<' ' << lr.second + 1<<' ' << lr.second - lr.first<< "\n";
        }
    }
}