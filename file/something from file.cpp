#include<bits/stdc++.h>
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
int main ()
{ ofstream f("all.txt",ios::out);
            create(f);
            f.close();
            ifstream f1("all.txt",ios::in);
            izvedi(f1);
            f1.close();

 return 0;
}
