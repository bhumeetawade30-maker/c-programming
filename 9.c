#include <stdio.h>
struct student_record {
char name[50];
int roll_number;
float total_marks;
};
int main() {
struct student_record students[5];
int i, topper_index = 0;
printf("Enter details for 5 students:\n");
for(i = 0; i < 5; i++) {
printf("Student %d Name, Roll, Marks: ", i + 1);
scanf("%s %d %f", students[i].name, &students[i].roll_number,
&students[i].total_marks);
}
for(i = 1; i < 5; i++) {
if(students[i].total_marks > students[topper_index].total_marks) {
topper_index = i;
}
}
printf("\n--- TOPPER DETAILS ---\n");
printf("Name: %s | Roll: %d | Marks: %.2f\n",
students[topper_index].name, students[topper_index].roll_number,

students[topper_index].total_marks);
return 0;
}
