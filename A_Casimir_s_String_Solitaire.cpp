#include<bits/stdc++.h>
using namespace std;

void solve(){
   
    
        string str;
        cin>>str;
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'A')   
                a++;
            if(str[i] == 'B')
                b++;
            if(str[i] == 'C')
                c++;
        }
        int d = a+c;
        if(d == b){
            cout<<"YES"<<"\n";
        }
        else 
            cout<<"NO"<<"\n";
        return ;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;   
}
    
