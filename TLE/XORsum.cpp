#include <bits/stdc++.h>
using namespace std;
long sumInBounds(vector<long> &num, long low, long high){
    long r=0;
    do{
        r ^= num[low];
        low++;
    } while(low<=high);
    return r;

}
int main(){
    long n, q;
    cin >> n;
    vector<long> inp;
    for(long i=0; i<n; i++){
        long temp;
        cin >> temp;
        inp.push_back(temp);
    }
    cin >> q;
    for(long i=0; i<q; i++){
        long low, high;
        cin >> low >> high;
        cout<<sumInBounds(inp, low-1, high-1)<<" ";
        // cout << answer[i] << " ";
    }
    // for(long i=0; i<q; i++){
    // }
 
 
    return 0;
}
