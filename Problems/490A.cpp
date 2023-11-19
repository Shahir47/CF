#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans[n] = {0};
    int i=0, j=0, k=0, total=0, ans_ind=0;
    while(i<=n-1 && j<=n-1 && k<=n-1){
        if(arr[i]==1 && arr[j]==2 && arr[k]==3){
            total++;
            ans[ans_ind] = i+1;
            ans[ans_ind+1] = j+1;
            ans[ans_ind+2] = k+1;
            ans_ind += 3;
            i++;
            j++;
            k++;
        }
        if(arr[i] != 1) i++;
        if(arr[j] != 2) j++;
        if(arr[k] != 3) k++;
    }

    cout<<total<<endl;
    for(int i=0; i<total; i++){
        cout<<ans[i*3]<<" "<<ans[i*3+1]<<" "<<ans[i*3+2]<<endl;
    }
}