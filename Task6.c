#include <stdio.h>
//Function using a static storage class variable as a counter
void counterFunction() {
//'static'keyword ensures the vari retains its value BTW function calls
static int count = 0;
count++;
printf("Function called %d time(s).\n", count);
}
int main() {
int n, i;
printf("Enter how many times you want to call the counter function: ");
scanf("%d", &n);
printf("\n--- Calling Counter Function ---\n");
for (i = 0; i < n; i++) {
counterFunction();
}
return 0;
}
