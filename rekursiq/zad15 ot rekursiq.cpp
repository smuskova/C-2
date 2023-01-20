#include<bits/stdc++.h>
using namespace std;
void reader( int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
bool razlEl(int a[], int n)
{
    if(n==1) return true;
    if(a[n-1]!= a[n-2]) return razlEl(a,n-1);
    else return false;
}
int main ()
{ int a[10];
int n; cout<<"n="; cin>>n;
reader(a,n);
if(razlEl(a,n)) cout<<"da"<<endl;
else cout<<"ne"<<endl;

 return 0;
}
