#include <stdio.h>
#include<string.h>
int main() {
  char ch[100];
  printf("Enter a string: ");
  scanf("%s", ch);

  int n = strlen(ch);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      printf(" ");
    }

    for (int j = i; j < n; j++) {
      if (j > 0) {
        printf(" ");
      }
      printf("%c ", ch[j]);
    }

    printf("\n");
  }

  return 0;
}

