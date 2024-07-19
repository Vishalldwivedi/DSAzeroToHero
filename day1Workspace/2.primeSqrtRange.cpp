#include<bits/stdc++.h>
using namespace std ;// because in c++ cin and cout are present in standard namespace . 
// other wise u have to wirte like this std::cin 
#define endl '\n' // replase endl with \n as it is faster
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORk(i,a,b,k) for(int i =(a);i<(b);i+=k)
#define RFOR(i,a,b) for(int i=(a);i>=(b);i--)
#define RFORk(i,a,b,k) for(int i=(a);i>=(b);i-=k)

const int N = 1000000;
bool pr[N+1];
void seive(){
    FOR(i,2,N+1) pr[i] = true;
    for(int i = 2;i*i<=N;i++)
        if(pr[i])
            FORk(j,i*i,N+1,i)
                pr[j] = false;
}
void solve(){
    seive();
    FOR(i,1,15) cout<<pr[i]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // this will make your input and output  faster . 
    int t = 1 ; // t test cases
    cin >> t ;
    while(t--){
        solve();
    }
    return 0 ; 
}