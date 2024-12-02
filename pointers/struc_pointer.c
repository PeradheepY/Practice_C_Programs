#include <stdio.h>
// Structure definition
struct Student
{
    char name[50];
    int age;
};
int main()
{
    struct Student student1 = {"John", 20};
    struct Student *ptr = &student1; // Pointer to structure
    // Accessing structure members using the pointer
    printf("Student Name: %s\n", ptr->name); // Use '->' to access members via pointer
    printf("Student Age: %d\n", ptr->age);
    return 0;
}