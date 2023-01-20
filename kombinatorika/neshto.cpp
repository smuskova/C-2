#include<bits/stdc++.h>
#include <windows.h>

using namespace std;
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
void writearr2( int a[], int n, vector <int> v)
{
    for(int i=0; i<=n-1; i++)
    {
        cout<<v[a[i]]<<" ";

    }
    cout<<endl;
}
int main ()
{
    int a[10]= {0};
    int c;
    cout<<"color:";cin>>c;
    int n; int b;

    cout<<"n=";
    cin>>n;
    color(c);
    writearr(a,n);
    vector< int > v;

    for(int i=0; i<n; i++)
    {
        cout<<"b=";
        cin>>b;
        v.push_back(b);
    }

    if(c== 9)
    {
        cout<<"blue"<<endl;
        writearr2(a,c,v);
    }
    return 0;
}
