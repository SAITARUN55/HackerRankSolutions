#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[100][100],n,d1=0,d2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j)
                d1=d1+arr[i][j];
            if(i+j==n-1)
                d2=d2+arr[i][j];
            
        }
    }
    cout<<abs(d1-d2)<<endl;
    return 0;
        
}
