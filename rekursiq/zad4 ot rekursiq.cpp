#include<bits/stdc++.h>
using namespace std;
double stepen(double x, int n)
{
    if(x==0) return 0;
    if(n==1) return x;
    return x*stepen(x, n-1);
}
int main ()
{ double x; cout<<"x="; cin>>x;
int n; cout<<"n="; cin>>n;
cout<<stepen(x,n)<<endl;

 return 0;
}
