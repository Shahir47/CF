#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int n;
        cin>>n;
        int arr[n][2];

        for (int j=0; j<n; j++){
            cin>>arr[j][0]>>arr[j][1];
        }

        int flag = 0;
        for(int j=1; j<n; j++){
            if(arr[j][1]>=arr[0][1] && arr[j][0]>=arr[0][0]){
                cout<<-1<<endl;
                flag = 1;
                break;
            }

        }
        if(flag==0){
                cout<<arr[0][0]<<endl;
        }
    }
}
