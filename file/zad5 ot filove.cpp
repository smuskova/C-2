#include <bits/stdc++.h>
using namespace std;
void fibb(ofstream &ff, int n)
{
    int f0=1,f1=1,f;
    ff<<1<<endl<<1<<endl;
    for(int i=2; i<=n; i++)
    {
        f=f0+f1;
        f0=f1;
        f1=f;
        ff<<f<<endl;
    }
}
void izvedi(ifstream &f)
{
    int x;
    while(!f.eof())
    {
        f>>x>>ws;
        cout<<x<<" ";
    }
}
void find(ifstream &f, int y)
{
    int x;
    bool OK=false;
    while(!f.eof())
    {
        f>>x>>ws;
        if(x==y)
        {
            cout<<"YES\n";
            OK=true;
            break;
        }
    }
    if(!OK)cout<<"NO\n";
}

int main()
{
    int n;
    do
    {
        cout<<"\n1-create\n2-izvedi\n3-tursene\n4-exit\n";
        cin>>n;
        switch (n)
        {
        case 1:
        {
            ofstream f("fibb.txt",ios::out);
            int k;
            cout<<"Do koe chislo na fibonachi ";
            cin>>k;
            fibb(f,k);
            f.close();
        }
        break;
        case 2:
        {
            ifstream f("fibb.txt",ios::in);
            izvedi(f);
            f.close();
        }
        break;

        case 3:
        {
            ifstream f("fibb.txt",ios::in);
            int k;
            cout<<"Koe chislo tursish ";
            cin>>k;
            find(f,k);
            f.close();
        }
        break;
        }
    }
    while(n!=4);
    return 0;
}
