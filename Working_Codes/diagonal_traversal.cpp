#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int arr[n][n];
	    int c=1;
	   // int row, col;
        for (int diag = 0; diag < (2*n)-1; diag++) {
            for (int i = 0; i <= diag; i++) {
                int j = diag - i;
                if (i < n && j < n)
                    arr[i][j] = c++;
            }
        }

        // Wave print of 2D array
        
        
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<arr[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    t--;
    }
    return 0;
    
}
	

