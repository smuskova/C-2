#include<bits/stdc++.h>
using namespace std;
bool dali(int x, int n, int* a)
{
    if (n == 1 ) return a[0] == x;
    return  dali(x, n-1, a);
}

int main ()
{
    int a[10];
    int x;
    cout<<"x=";
    cin>>x;
    int n;
    cout<<"n=";
    cin>>n;
    if(dali(x,n,a))cout<<"ne"<<endl;
    else cout<<"da"<<endl;

    return 0;
}
