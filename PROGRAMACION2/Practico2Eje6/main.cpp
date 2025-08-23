#include <iostream>

using namespace std;

void ejemplo (int &z, int a, int &b)
{
 int x;
 x = z + a;
 b = b + a;
 z = 2 * x;
}


int main()
{
 int x, j;
 int arre[3];
  x = 0;
 arre[0] = 1;
 arre[1] = 2;
 arre[2] = 0;
 for (j = 0; j < 3; j++)
{
  ejemplo (x, arre[j], arre[2]);
  printf("%d %d %d \n", x, arre[j], arre[2]);
 }
 printf("%d %d %d %d", arre[0], arre[1], arre[2], x);
}
