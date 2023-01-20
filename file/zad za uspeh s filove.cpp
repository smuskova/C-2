#include<bits/stdc++.h>
using namespace std;
struct student
{
    string ime;
    double usp1;
    double usp2;
} a[26];
void read_student(student &s)
{

    cout<<"ime ";
    cin>>s.ime;
    cout<<"uspeh za purvi srok ";
    cin>>s.usp1;
    cout<<"uspeh za vtori srok ";
    cin>>s.usp2;
}
void create(ofstream &f)
{
    student s;
    char ch;
    cout<<"shte vuvejdash li uchenik  y/n ";
    cin>>ch;
    while(ch=='y')
    {
        read_student(s);
        f<<s.ime<<endl<<s.usp1<<endl<<s.usp2<<endl;
        cout<<"shte vuvejdash li uchenik  y/n ";
        cin>>ch;
    }
}

void slab (ifstream &f)
{
    double min=7;
    string im;
    student s;
    while(!f.eof())
    {
        f>>s.ime>>s.usp1>>s.usp2>>ws;
        if (min>s.usp1)
        {
            min=s.usp1;
            im=s.ime;
        }
    }
    cout<<im<<endl;
}
void max_sr_usp (ifstream &f)
{

    double max=0;
    string imm;
    student s;
    while(!f.eof())
    {
        f>>s.ime>>s.usp1>>s.usp2>>ws;
        if(max<((s.usp1+s.usp2)/2))
        {
            max=(s.usp1+s.usp2)/2;
            imm=s.ime;
        }
    }
    cout<<imm<<" "<<max<<endl;

}
int main ()
{
    int k;
    do
    {
        cout<<"1-create fail \n2-naj slab uspeh za 1srok \n3-naj visok sreden uspeh \n";
        cin>>k;
        switch (k)
        {
        case 1:
        {
            ofstream f("uchenik.txt",ios::out);
            create(f);
            f.close();
        }
        break;
        case 2:
        {
            ifstream f("uchenik.txt",ios::in);
            slab(f);
            f.close();
        };
        break;
        case 3:
        {
            ifstream f("uchenik.txt",ios::in);
            max_sr_usp(f);
            f.close();
        }
        break;
        }
    }
    while (k!=4);
    return 0;
}
