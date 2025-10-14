#include <iostream>

using namespace std;
#include <stdio.h>
const int NUM = 6;
int x = 2;
void Proc (int &y)
{
y = (y + x) % NUM;
printf ("%d ", y);
}
int Func (int &z)
{
int x = NUM * z;
if (x % 2 != 0)
Proc (x);
else
{
int i;
for (i = 1; i <= NUM; i++)
{
int m = x + i;
Proc (m);
z = z + x;
}
}
return (z % NUM);
}
int main()
{
int dig, resu;
scanf ("%d", &dig);
x = dig + 2;
resu = Func (x);
printf ("%d", resu);
}
