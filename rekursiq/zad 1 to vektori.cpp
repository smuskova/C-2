#include<bits/stdc++.h>
using namespace std;
int main ()
{
     vector <int> a(10);
     int p; cout<<"p="; cin>>p;
     /*for(int i=0; i<=p; i++)
     {
         cin>>a[i];
         if(a[i]%2==0 and a[i]<p)
        cout<<a[i]<<" "<<endl;
     }*/
     int i=0;
     while(i<=p)
     {
         cin>>a[i];
        if(a[i]%2==0 and a[i]<p)
        cout<<a[i]<<" "<<endl;
        if(a[i]==p or a[i]==0) cout<<a[i]<<" "<<endl;
        i++;

     }




    return 0;
}
