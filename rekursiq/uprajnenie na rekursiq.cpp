#include<bits/stdc++.h>
using namespace std;
bool dali (int n, int k)
{
    if(n<10) return n==k;
    if(k==n%10) return true;
    return dali((n/10),k)

}
int br(int n)
{
    if(n<10) return 1;
    return 1+br(n/10);
}
bool dali(int num[], int n, int x)
{
    if(n==1) return a[0]==x;
    if(a[n-1]==x) return true;
    return dali(num, n-1, x);
}
int maimunka9( int i, int j)
{
    if(j==0) return 1;
    if (i ==n-1) return 1;
    return maimunka(i,j-1)+ maimuka(i+1, j);
}
bool dali (int num[], int n)
{
    if(n==1) return true;
    for(int i=0; i<n; i++)
    {
        if(num[i]==num[n-1]) return false ;
        return dali(num, n-1);

         }
}
bool palindrom( string s, int beg, int endd)
{
    if(s[beg]!=a[endd]) return false;
    if(beg==endd) return true;
    if(beg> endd) return false;
    if(beg == endd-1) return true;
    return palindrom(s,beg+1, endd-1)
}
bool dali(int num[], int n)
{
    if(n==1) return true;
    if(num[n-2]<=num[n-1]) return dali(num, n);
    else return false;
}
int suma (int n)
{
    if(n<10) return n;
    return n%10+suma (n/10);
}
void ob(int n)
{
    if(n<10) cout<<n; return;
    cout<<n%10;
    ob(n/10);
}
int nod(int a, int b)
{
    if(b==0) return a;
    return nod(b,a%b);
}

int main ()
{

 return 0;
}
