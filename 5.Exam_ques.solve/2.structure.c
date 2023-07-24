// #include<stdio.h>

// struct person
// {
//     string name[100];
//     int roll;
//     int marks;
// };

// int main()
// {
//     struct person student={"naeem",10,90};
//     printf("%s %d %d ",student.name,student.roll,student.marks);
//     return 0;
// }

#include<stdio.h>

struct person
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    // struct person student1 = {"naeem", 10, 90};
    // struct person student2 = {"naeem", 10, 90};
    // struct person student3 = {"naeem", 10, 90};
    // struct person student4 = {"naeem", 10, 90};
    // printf("%s %d %d\n", student1.name, student1.roll, student1.marks);
    // printf("%s %d %d\n", student2.name, student2.roll, student2.marks);
    // printf("%s %d %d\n", student3.name, student3.roll, student3.marks);
    // printf("%s %d %d\n", student4.name, student4.roll, student4.marks);

    struct person student;

    for(int i=0;i<3;i++)
    {
        scanf("%s %d %d",student.name,&student.roll,&student.marks);
        printf("%s %d %d\n",student.name,student.roll,student.marks);
    }
    // for(int i=0;i<3;i++)
    // {
    //     printf("%s %d %d\n",student.name,student.roll,student.marks);
    // }
    return 0;
}
