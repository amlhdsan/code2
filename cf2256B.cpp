#include<bits/stdc++.h>

#define ll long long

using namespace std;

const ll mod=998244353;

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

inline void write(ll x){
    if(x<0){
        putchar('-');
        x=-x;
    }
    if(x>9)write(x/10);
    putchar(x%10+'0');
}

inline void writeln(ll x){
    write(x);
    putchar('\n');
}

ll calc(string s){
    ll a=1,b=1;
    for(char c:s){
        ll x=0,y=0;
        if(c=='0'){
            x=b;
        }
        else if(c=='1'){
            y=a;
        }
        else{
            x=b;
            y=a;
        }
        a=x%mod;
        b=y%mod;
    }
    return (a+b)%mod;
}

int main(){
    int T=read();
    while(T--){
        int n=read();
        string s;
        cin>>s;
        string a,b;
        for(int i=0;i<n;i++){
            if(i&1)b+=s[i];
            else a+=s[i];
        }
        writeln(calc(a)*calc(b)%mod);
    }
    return 0;
}