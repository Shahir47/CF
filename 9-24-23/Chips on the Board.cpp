#include<iostream>
#include<algorithm>

using namespace std;

void solve(){
    long long int n, x;
    cin>>n;
    long long int sum1 = 0, sum2 = 0;
    long long int min1 = 99999999999, min2 = 99999999999;
    for(long long int i=0; i<n; i++){
        cin>>x;
        sum1 += x;
        min1 = min(min1, x);
    }
    for(long long int i=0; i<n; i++){
        cin>>x;
        sum2 += x;
        min2 = min(min2, x);
    }
    cout<<min(min2*n+sum1, min1*n+sum2)<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
