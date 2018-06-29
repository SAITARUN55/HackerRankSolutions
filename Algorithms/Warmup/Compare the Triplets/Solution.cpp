#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int alice[3];
    int bob[3];
    cin>>alice[0]>>alice[1]>>alice[2];
    cin>>bob[0]>>bob[1]>>bob[2];
    
    int alice_score=0;
    int bob_score=0;
    for(int i=0;i<3;i++){
    if (alice[i]>bob[i])
        alice_score++;
    if (bob[i]>alice[i]) 
        bob_score++;
    }
    cout<<alice_score<<" "<<bob_score;
    return 0;
    
}
