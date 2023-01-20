#include <iostream>
#include <cstdlib>
#include <cmath>
#include<bits/stdc++.h>

using  namespace  std;
void create (ofstream &f)
{
    int n;
    cin>>n;
    while(!cin.eof())
    {
        f<<n<<endl;
        cin>>n;
    }
    cin.clear();
}
void write(ifstream &f)
{
 int n;
 f>>n;
 while(!f.eof())
 {
     cout<<n<<" ";
     f>>n;
} cout<<endl;
}
int main()
{  ofstream f("sth.txt ",ios::out | ios::app);
 create(f);
 f.close();
 ifstream f1(" sth.txt", ios::out | ios::app);
 write(f1);
 f1.close();









return 0;
}
