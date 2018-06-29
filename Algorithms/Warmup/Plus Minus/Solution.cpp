#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    float n,cnt = 0,a,p = 0,ne = 0,z = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a > 0 )p++;
        else if(a < 0)ne++;
        else if(a == 0)z++; 
    }
    printf("%.6f\n",p/n);
    printf("%.6f\n",ne/n);
    printf("%.6f\n",z/n);

    return 0;
}
