#include<bits/stdc++.h>
using namespace std;
int  hanoiObmen( int n, char a, char b, char c)
{
    if(n>0)
    {
        hanoiObmen(n-1,a,c,b);
        if(hanoiObmen(n-1,a, c,a )>hanoiObmen(n-2,b, c,b )) {swap(hanoiObmen(n-1,a, c,a ), hanoiObmen(n-2,b,c ,b ));}
        cout<<"move 1 disk from"<<a<<"to"<<c<<endl;
        hanoiObmen(n-1,b,a,c);
    }
}
int main ()
{
    int n; cout<<"n="; cin>>n;
    hanoiObmen(n,'A', 'B', 'C');
 return 0;
}
