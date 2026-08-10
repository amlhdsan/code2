#include<bits/stdc++.h>

#define mod 666623333

using namespace std;

inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<3)+(x<<1)+(ch^48);
        ch=getchar();
    }
    return x*f;
}

inline void write(int x){
    if(x<0){
        putchar('-');
        x=-x;
    }
    if(x>9)write(x/10);
    putchar(x%10+'0');
}

inline void writeln(int x){
    write(x);
    putchar('\n');
}

void solve(){
    int n=read();
    string s;
    cin>>s;

    int c[2]={0,0},b[2]={0,0};

    for(int i=0;i<n;i++){
        int x=s[i]-'0';
        c[x]++;
        if(i==0||s[i-1]!=s[i])
            b[x]++;
    }

    int d=c[0]-c[1];
    if(abs(d)>2){
        writeln(-1);
        return;
    }

    int ans=-1;
    for(int x=-1;x<=1;x++){
        if(abs(d-x)<=1)
            ans=max(ans,b[0]+b[1]-abs(b[0]-b[1]-x));
    }

    writeln(n-ans);

    if(!ans) {
        
    }
}

int main(){
    int T=read();
    while(T--)
        solve();

        // % mod
    return 0;
}