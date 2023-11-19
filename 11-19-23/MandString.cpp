#include<iostream>
using namespace std;

void solve(){
    int n, b;
    cin>>n>>b;

    string s;
    cin>>s;
    int c_a = 0, c_b = 0;

    for(int i=0; i<n; i++){
        char x = s[i];
        if(x == 'A'){
            c_a++;
        }
        else{
            c_b++;
        }
    }

    if(c_b == b){
        cout<<0<<endl;
    }

    else{
        cout<<1<<endl;
        int k = 0;
        for(int i=0; i<n; i++){
            char x = s[i];
            if(c_b < b){
                if(x == 'A') k++;
                if(k == (b - c_b)) {
                    cout<<i+1<<" "<<'B'<<endl;
                    break;
                }
            }
            else{
                if(x == 'B') k++;
                if(k == (c_b - b)) {
                    cout<<i+1<<" "<<'A'<<endl;
                    break;
                }
            }
    }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
