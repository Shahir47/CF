#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long long int result = 0;
    int prev = arr[n-1];
    for(int i=n-2; i>=0; i--){
        if(arr[i] == 1 || arr[i] <= prev){
            prev = arr[i];
            continue;
        }
        else if(arr[i] <= prev*2){
            result += 1;
            prev = (arr[i])/2;
        }
        else{
            if(prev==1){
                result += arr[i]-1;
            }
            else{
                int temp = arr[i]/prev - 1; 
                result += temp + 1;
                prev = (arr[i] - temp*prev)/2;
            }
        }
    }
    cout<<result<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}