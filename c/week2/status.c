#include <stdio.h>
#include <cs50.h>

// main returns an int which is the exit code, default to 0
int main(int argc, string argv[])
{
  // run echo $? to see exit code
  if(argc != 2) {
    printf("missing command-line argument\n");
    // custom exit code
    return 1;
  }
  else {
    printf("hello, %s\n", argv[1]);
  // exit code 0 means success which is the default
    return 0;
  }
}