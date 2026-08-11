#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> f(110,0);
signed main(){
    set<int> b;
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a.push_back(num);
        b.insert(num);
        f[num]++;
    }
    int ans=1;
    int num=0;
    sort(a.begin(),a.end());
    //b.size()为1时候说明ai都相同，只有1种方案
    //b.size()大于1时候，答案有两种，升序和降序；
    if(b.size()==1){
        ans=1;
    }else{
        for(int i=1;i<n;i++){
            num+=abs(a[i]-a[i-1]);
        }
        ans=2;
    
    }
    cout<<ans<<" "<<num<<endl;
    return 0;
}
