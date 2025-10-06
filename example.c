#include <stdio.h>

int main(int argc, char** argv)
{
  printf("I'm an example c program for TSP");
  printf("I've been edited in this commit");
  if (argc > 1) printf("You've supplied an argument %s", argv[1]);
  return 0;
}
