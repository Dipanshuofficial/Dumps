#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[2*n-1][2*n-1];
    int a=0;
    int b=(2*n)-1;
    int x=n;
    bool f=1;
    while(f){
        // cout<<a<<endl;
        for(int i=a;i<b-a;i++){
            arr[a][i]=x;
            arr[b-a-1][i]=x;
            arr[i][a]=x;
            arr[i][b-a-1]=x;
            // cout<<a<<" ";
        }
        a+=1;
        cout<<endl;
        // cout<<x<<" "<<a<<endl;
        x--;
        if(!x) f=0;
    }
    
    for (int i=0;i<b;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<"\n";
    }
    return 0;
}
