#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin>>n;
        vector<pair<int,int>>a(n);
        vector<pair<int,int>>b(n);
        vector<pair<int,int>>c(n);
        for(int i=0;i<n;i++){
           int v1;
           cin>>v1;
           a[i].first=v1; 
           a[i].second=i; 
        }
        for(int i=0;i<n;i++){
           int v2;
           cin>>v2;
           b[i].first=v2; 
           b[i].second=i; 
        }
        for(int i=0;i<n;i++){
           int v3;
           cin>>v3;
           c[i].first=v3; 
           c[i].second=i; 
        }
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        sort(b.begin(),b.end(),greater<pair<int,int>>());
        sort(c.begin(),c.end(),greater<pair<int,int>>());

        int ans=-1;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(a[i].second==b[j].second || b[j].second==c[k].second || a[i].second==c[k].second ) continue;
                    else{

                        ans=max(ans,a[i].first+b[j].first+c[k].first);

                    }
                }
            }
        }

        cout<<ans<<endl;
        
        
    }

    return 0;
}