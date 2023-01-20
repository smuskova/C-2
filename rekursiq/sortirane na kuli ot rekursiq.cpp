#include<bits/stdc++.h>
using namespace std;
void  hanoiSort( int n, char a, char b, char c)
{
    if(n>0)
    {
        if(n%2==0)
        {
            hanoiSort( (n-1)%2,a,b,c);
            cout<<"move 1 disk from"<<a<<"to"<<c<<endl;
            hanoiSort(n-1, a,c,b);
        }

    }
}
int main ()
{
    int n;
    cout<<"n=";
    cin>>n;
    hanoiSort(n,'A', 'B', 'C');

    return 0;
}
