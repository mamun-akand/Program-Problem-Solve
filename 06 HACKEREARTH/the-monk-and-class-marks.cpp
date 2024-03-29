#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>a, pair<string, int>b){
    if(a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main(){
    int n; cin >> n;
    vector< pair<string, int> > v;

    for(int i=0; i<n; i++){
        string s; int mark; cin >> s >> mark;
        v.push_back({s, mark});
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;;
    }

    return 0;
}


