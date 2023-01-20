#include <bits/stdc++.h>
using namespace std;
void create(ofstream &f)
{
     int x;
    srand(time(0));
 for(int i=1;i<=100;i++) {
    x=rand()%500+1;
    f<<x<<endl;
}}
bool prosto(int n)
{
    bool b=true;
    if(n==1 || n==2 || n==3)b=true;
    else for(int i=2;i<=n/2;i++)
        if(n%i==0)b=false;
    return b;
}
void prosti(ofstream &f, ifstream &g)
{
    int x;
    g>>x;
    while(!g.eof())
    {
        if(prosto(x)) f<<x<<" ";
        g>>x;
    }
}
bool happy(int n)
{
    int k=n,m=0;
    while(k!=0)
    {
        m=m*10+k%10;
        k=k/10;
    }
    return m==n;
}
void happ(ofstream &f,ifstream &g)
{
    int x;
    g>>x;
    while(!g.eof())
    {
        if(happy(x)) f<<x<<" ";
        g>>x;
    }
}
int main()
{
    int k;
    do{
    cout<<"Napravi svoqt izbor\n1-Create\n2-Vsichki prosti\n3-Vsichki shtastlivi\n";
    cin>>k;
switch(k)
{
       case 1:{ofstream f("chisla.txt",ios::out);
    create(f);
    f.close();
    }break;
        case 2:{ifstream g("chisla.txt",ios::in);
    ofstream f("prosti.txt",ios::out);
    prosti(f,g);
    f.close();
    g.close();
    }break;
       case 3:{ifstream g("chisla.txt",ios::in);
        ofstream f("happy.txt",ios::out);
        happ(f,g);
        f.close();
        g.close();
        }break;
}}
while(k!=4);

return 0;
}
