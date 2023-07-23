#include <stdio.h>

int main() {
    
    char names[5][50]={"rahim","karim","abul","kabul","babul"}; 

    //if u want initialize the name like that.both are correct
    
    // strcpy(names[0], "Alice");
    // strcpy(names[1], "Bob");
    // strcpy(names[2], "Charlie");
    // strcpy(names[3], "David");
    // strcpy(names[4], "Eva");


    printf("Names of five students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
