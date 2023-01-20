#include<bits/stdc++.h>
using namespace std;
void reader( int num[], int n)
{
    for( int i=0; i<n; i++)
    {
        cin>>num[i];
    }
}
int add(int num[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(k<n)
            return add( num,n,k);
        else return num, k;
    }
}
int main ()

{ int num[10];
int n,k; cin>>n>>k;
reader(num,n);
cout<<add(num,n,k);

    return 0;
}
