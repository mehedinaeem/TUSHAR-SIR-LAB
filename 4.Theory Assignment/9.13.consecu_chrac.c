#include<stdio.h>
#include<string.h>
int main()
{
    int m,n;
    printf("Enter m how char u want copy:\nEnter n from which position u want copy: \n");
    scanf("%d %d",&m,&n);
    char s1[100],s2[m+1];
    printf("Input first string: ");
    scanf(" %[^\n]", s1);

    printf("After copy: ");
    for(int i=n;i<n+m;i++)
    {
        s2[i]=s1[i];
        printf("%c",s2[i]);
    }
    

    return 0;
}

//solve with use strcpy function

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int m, n;
//     scanf("%d %d", &m, &n);
    
//     char s1[100];
//     scanf(" %[^\n]", s1); 
    
//     char s2[m + 1]; 
//     strncpy(s2, s1 + n, m);
//     s2[m] = '\0';  
    
//     printf("Original string: %s\n", s1);
//     printf("Copied substring: %s\n", s2);
    
//     return 0;
// }
