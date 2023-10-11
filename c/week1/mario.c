#include <stdio.h>
#include <cs50.h>

int get_size();
void print_grid(int n);

int get_height(void);
void print_pyramid(int height);

int main(void) {
  // int n = get_size();
  // print_grid(n);
  int height = get_height();
  print_pyramid(height);
}

int get_size(void) {
    int n;
    do 
    {
        n = get_int("Size: ");
    } 
    while (n < 1);
    return n;
}

void print_grid(int n) 
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
      {
          printf("#");
      }
      printf("\n");
    }
}

int get_height(void) {
  int height;
  do{
    height = get_int("Height: ");
  } while(
    height < 1 || height > 8
  );
  return height;
}

void print_brick(int count) {
  for(int i = 0; i < count; i++) {
    printf("#");
  }
}

void print_spaces(int count) {
  for(int i = 0; i < count; i++) {
    printf(" ");
  }
}

void print_pyramid(int height) {
  for(int i = 0; i < height; i++) {
    int count = i + 1;
    print_spaces(height - count);
    print_brick(count);
    printf("  ");
    print_brick(count);
    printf("\n");
  }
}
