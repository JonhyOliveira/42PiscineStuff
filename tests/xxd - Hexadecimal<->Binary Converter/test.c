#include <unistd.h>
#define n 808464432

int main()
{
  int x[3] = { 48, 48, 48 };
  write(1, x, 12);

  write(1, &"\n", 1);

  int y[3] = { n, n, n };
  write(1, y, 12);
}
