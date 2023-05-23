// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int x=2*n -1;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i<x/2){
                if(j<i){
                    cout<<abs(n-j)<<" ";
                }
                else if(j>(x-i-1)){
                    cout<<n-(x-j)+1<<" ";
                }
                else{
                    cout<<n-i<<" ";
                }
            }
            else{
                if(i<j){
                    cout<<j-n+2<<" ";
                }
                else if(j<(x-i-1)){
                    cout<<n-j<<" ";
                }
                else{
                    cout<<n-(x-i-1)<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
