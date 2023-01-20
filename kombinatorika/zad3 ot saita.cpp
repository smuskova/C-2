#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>
#include <windows.h>

using  namespace  std;
void color(int n)
{
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, n);
}

void writearr( int a[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
}
void writearr( int a[], int n, vector <int> v)
{
    for(int i=0; i<=n-1; i++)
    {
        cout<<v[a[i]]<<" ";

    }
    cout<<endl;
}
int main()
{
    int c; cout<<"color:"; cin>>c;    color(c);

    int n, k;
    cout<<"n=";cin>>n;
    cout<<"k="; cin>>k;
    int b;
    int a[20]= {0};
    vector< int > v;

        for(int i=0; i<k; i++)
        {cout<<"b="; cin>>b;
            v.push_back(b);
        }

    writearr(a,n,v);
    while (true)
    {
        if(a[n-1]<k-1)
        {
            a[n-1]++;
            writearr(a,n,v);

        }
        else
        {
            int m=n-1;
            while(m>-1 && a[m]==k-1)
            {
                a[m]=0; m--;
            }
           if(m==-1) break;
           else
           {
               a[m]++;  writearr(a,n,v);

           }
        }

    }
if(c==1) cout<<" blue"<<endl;
if(c==2) cout<<" green"<<endl;
if(c==3) cout<<"sinio zeleno"<<endl;
if(c==4) cout<<" red"<<endl;
if(c==5) cout<<" purple"<<endl;
if(c==6) cout<<"yellow"<<endl;
if(c==7) cout<<" grey"<<endl;
if(c==8) cout<<" grey2"<<endl;
if(c==9) cout<<"blue"<<endl;
if(c==13) cout<<" PINK"<<endl;




return 0;
}
