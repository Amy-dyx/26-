#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> a;
    for(int i=0;i<n;i++){
        a.push_back(s[i]);
        int t=a.size();
        if(t>=3&&a[t-3]=='n'&&a[t-2]=='i'&&a[t-1]=='u'){
            for(int j=0;j<3;j++){
                a.pop_back();
            }
        }
        if(t>=2&&a[t-2]=='m'&&a[t-1]=='o'){
            for(int j=0;j<2;j++){
                a.pop_back();
            }
        }
    }
    if(a.size()==0){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> a;
    for(int i=0;i<n;i++){
        a.push_back(s[i]);
        int t=a.size();
        if(t>=3&&a[t-3]=='n'&&a[t-2]=='i'&&a[t-1]=='u'){
            for(int j=0;j<3;j++){
                a.pop_back();
            }
        }
        if(t>=2&&a[t-2]=='m'&&a[t-1]=='o'){
            for(int j=0;j<2;j++){
                a.pop_back();
            }
        }
    }
    if(a.size()==0){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}
