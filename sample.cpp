#include <unistd.h>
int main(int argc, char *argv[])
{
   char bucket[128];
   if(argc <2)
   {
      printf(“Syntax: %s <input>\n”, argv[0]);
      exit(0);
    }
  strcpy(bucket, argv[1]);
  return 0;
}