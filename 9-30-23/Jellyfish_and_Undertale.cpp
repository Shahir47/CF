#include <iostream>
using namespace std;

void solve(){
    long long int a, b, n, x;
    cin>>a>>b>>n;
    if(a == 1 && b == 1){
        cout<<1;
        return ;
    }

    long long int total = 0;
    int i = 0;
    for(i; i<n; i++){
        cin>>x;
        if(b+x <= a){
            b += x;
        }
        else{
            total += (total == a) ? b-1: b;
            if(x>a){
                break;
            }
            else b = x;
        }
    }
    if(i<n){
        total += (n-i)*(a-1);
    }
    cout<<total<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
