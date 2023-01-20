#include<bits/stdc++.h>
using namespace std;
int nod(int a, int b)
{
    if(b==0) return a;
    return (b,a%b);
}
int main ()
{  int a; cout<<"a="; cin>>a;
int b; cout<<"b="; cin>>b;
cout<<nod(a,b)<<endl;

 return 0;
}
