#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int x, y; cin >> x >> y;
        cout << ceil((double)x/6) * y << endl;
    }

    return 0;
}
