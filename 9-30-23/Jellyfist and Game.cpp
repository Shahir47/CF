#include <iostream>
using namespace std;
#define inf_ -999999999999
#define inf 99999999999


void solve(){
    long long int a, b, n, x;
    cin>>a>>b>>n;
    long long int min_J = inf, max_J = inf_;
    long long int min_G = inf, max_G = inf_;
    long long int sum_J = 0, sum_G = 0;

    for(long long int i=0; i<a; i++){
        cin>>x;
        sum_J += x;
        min_J = (x<min_J) ? x : min_J;
        max_J = (x>max_J) ? x : max_J;
    }
    for(long long int i=0; i<b; i++){
        cin>>x;
        sum_G += x;
        min_G = (x<min_G) ? x : min_G;
        max_G = (x>max_G) ? x : max_G;
    }
    if(n%2 == 0){
        cout<<sum_J<<endl;

    }
    else{
        if(sum_J-min_J+max_G > sum_J){
            cout<<sum_J-min_J+max_G<<endl;
        }
        else{
            cout<<sum_J<<endl;
        }

    }



}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
