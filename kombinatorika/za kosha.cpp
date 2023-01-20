#include<bits/stdc++.h>
#include <windows.h>

using namespace std;
void color(int n)
{
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, n);
}

int main ()
{ int c; cout<<"color:"; cin>>c;
color(c);
int n; cout<<"n="; cin>>n;
int a[10];
 for(int i=0; i<=n-1; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;


 return 0;
}
