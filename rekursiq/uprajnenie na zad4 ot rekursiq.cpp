#include<bits/stdc++.h>
using namespace std;
static void Main()
    {
        int num = 88;
        int pow = 10;


        // with loops
        decimal res = num;
        decimal inc = num;

        for (int i = 1; i < pow; i++)
        {
            for (int j = 1; j < num; j++)
            {
                res += inc;
            }
            inc = res;
        }

        Console.WriteLine(inc);

        // ---------------------------------------

        // without loops (recursion)
        Console.WriteLine(Pow(num, pow));
    }

    static decimal Pow(int num, int pow, decimal result = 1)
    {
        if (pow == 0) return result;
        result *= num;
        pow--;
        return Pow(num, pow, result);
    }
int main ()
{

 return 0;
}
