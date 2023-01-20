#include<bits/stdc++.h>
using namespace std;
void reader( int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
bool dvTursene(int a[], int n, int x)
{
    if(a[(0+(n-1))/2]==x) return true;
    if(a[(0+(n-1))/2]<x) return dvTursene(a,n-1,x);
    else return false;
 //or a[n-2]==x     (a[0]==x or a[n-1]==x)
}
void sortirane(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

int main ()
{
    int a[10];
    int n; cout<<"n="; cin>>n;
    int x; cout<<"x="; cin>>x;
    reader(a,n);
    sortirane(a,n);
    if(dvTursene(a,n,x)) cout<<"da"<<endl;
    else cout<<"ne"<<endl;
 return 0;
}
