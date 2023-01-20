#include<bits/stdc++.h>
using namespace std;
int main ()
{
     /*char name[10];
     char lastName[10];
     cin.getline(name,10);
     cin.getline(lastName,10);
     cout<<strlen(name)<<endl;
     cout<<strcat(name,lastName)<<endl;*/
     char name[10]="Pesho";
     char lastName[10];
     char years[100];
     cin.getline(name,10);
     cin.getline(lastName, 10);
     cin.getline(years, 100);
     cout<<strcat(name, lastName)<<endl<<years<<endl;






 return 0;
}
