#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst, cnt=0;
    cin >> tst;

    while(tst--){

        string s;
        cin >> s;

        if(s[0]=='T') cnt += 4;
        else if(s[0]=='C') cnt += 6;
        else if(s[0]=='O') cnt += 8;
        else if(s[0]=='D') cnt += 12;
        else if(s[0]=='I') cnt += 20;

    }

    cout << cnt << endl;

    return 0;

}
