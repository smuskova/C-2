#include<bits/stdc++.h>
using namespace std;
bool dali(int n, int k)
{
    if(n<10) return (n==k);
    if(k==n%10) return true;
    return dali((n/10),k);

}
int main ()
{ int n; cout<<"n="; cin>>n;
int k; cout<<"k="; cin>>k;
if(dali(n,k))
    cout<<"ima ia\n";
  else cout<<"niama ia\n";

 return 0;
}
