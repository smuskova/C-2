#include<bits/stdc++.h>
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
void createPr(ofstream &f)
{
    int x;

    while(!f.eof())
    {
        if(prosto(x)) f<<x<<" ";
        cin>>x;

    } cout<<endl;
}
void write (ifstream &f)
{
    int x;
    while(!f.eof())
    {
        f>>x>>ws;
        cout<<x<<" ";
    }cout<<endl;
}

int main ()
{  int n;
do
{
     cout<<"Napravete svoq izbor\n 1.Suzdadete fail s prosti chisla\n 2.Izvejda sudurjanieto na ekrana\n 3.Exit\n";
     cin>>n;
     switch(n)
     {case 1:
         {
             ofstream f("prostiCH.txt", ios::out);
                create(f);
                f.close();
         }break;
     case 2:
        {
            ifstream f("prostiCH.txt", ios::in);
            write(f);
            f.close();
        }break;

     }
} while(n!=3);

 return 0;
}
