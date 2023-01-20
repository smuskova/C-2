#include<bits/stdc++.h>
using namespace std;
bool dali(int n, int* x)
{if (n == 1) return true;
 return x[n-2] <= x[n-1] && dali(n-1, x);
}
int main ()
{ int n; cout<<"n="; cin>>n;
    int x[5];
    if(dali(n,x)) cout<<"ne";
    else cout<<"da";

 return 0;
}
