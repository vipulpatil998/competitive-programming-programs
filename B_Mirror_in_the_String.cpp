#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fo(i, a, b) for(int i = 0 ; i <= b; i++)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = 1;
        while (k < n && (s[k] < s[k - 1] || (k > 1 && s[k] == s[k - 1]))) {
            ++k;
        }
        for(int i = 0; i < k; i++){
            cout<< s[i];
        }
        for(int i = k-1; i >= 0; i--){
            cout<< s[i];
        }
        cout<< '\n';
    }
    return 0;
}