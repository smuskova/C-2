#include<bits/stdc++.h>
using namespace std;
int c(int n, int m)
{
    if(m==0) return 1;
    if(n==m) return 1;
    return (n-1,m-1)+(m,n-1);
}
int main ()
{
    int n; cout<<"n="; cin>>n;
    int m; cout<<"m="; cin>>m;
    cout<<c(n,m)<<endl;
 return 0;
}
