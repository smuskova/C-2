#include <bits/stdc++.h>
using namespace std;
void create(ofstream &f)
{
    int x;
    cin>>x;
    while(!cin.eof())
    {
        f<<x<<endl;
        cin>>x;
    }
    cin.clear();
}
void poloj(ifstream &f,ofstream &g)
{
    int x;
    while(!f.eof())
    {
        f>>x>>ws;
        if(x>0) g<<x<<endl;
    }
}
void izvedi(ifstream &f)
{
    int x;
    f>>x;
    while(!f.eof())
    {
        cout<<x<<" ";
        f>>x;
    }
    cout<<endl;
}
void Add(fstream &f)
{
    double x;
    cin>>x;
    f<<x<<endl;
}
int main()
{
    int k;
    do
    {
        cout<<"Napravi svoqt izbor\n1-Create\n2-Izvedi\n3-Pepishi polojitelnite\n4-**** polojitelnite\n5-exit\n";
        cin>>k;
        switch(k)
        {
        case 1:
        {
            ofstream f("all.txt",ios::out);
            create(f);
            f.close();
        }
        break;
        case 2:
        {
            ifstream f("all.txt",ios::in);
            izvedi(f);
            f.close();
        }
        break;
        case 3:
        {
            ifstream f("all.txt",ios::in);
            ofstream g("poloj.txt",ios::out);
            poloj(f,g);
            f.close();
            g.close();
        }
        break;
        }
    }
    while(k!=5);

    return 0;
}
