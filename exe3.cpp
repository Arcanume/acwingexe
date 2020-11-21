#include<iostream>
#include<algorithm>

using namespace std;
int f[1005];
int main(){
    int n,v;
    cin>>n>>v;
    int u,w;
    for(int i=1;i<=n;i++){
        cin>>u>>w;
        for(int j=u;j<=v;j++){
            f[j]=max(f[j],f[j-u]+w);
        }
    }
    
    cout<<f[v]<<endl;
    return 0;
}