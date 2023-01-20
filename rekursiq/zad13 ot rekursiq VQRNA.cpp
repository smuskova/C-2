#include<bits/stdc++.h>
using namespace std;
void reader(int num[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }
}
bool binarySearch(int num[],int n, int x, int left, int right)
{  left=0; right= n-1;
    if(left>=right )
    {
        return false;
    }
    int middle= (left+ right)/2;
    if(num[middle]==x) return true;
    if(num[middle]>x) return binarySearch(num, n, x, middle+1, right); //return false;
    return binarySearch(num, n, x, left, middle-1);
}
int main ()
{ int num[10];
int n; cout<<"n="; cin>>n;
int x; cout<<"x="; cin>>x;
reader(num, n);
if(binarySearch(num,n, x, 0, n-1)) cout<<"yes"<<endl;
else cout<<"no"<<endl;

 return 0;
}
