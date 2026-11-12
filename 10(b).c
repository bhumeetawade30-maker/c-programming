#include <stdio.h>
int main() {
int n, i;
printf("Enter size: ");
scanf("%d", &n);
int arr[n];
for(i = 0; i < n; i++) scanf("%d", &arr[i]);
int *ptr = &arr[n - 1]; // Point to end element
printf("Reversed Array: ");
for(i = n - 1; i >= 0; i--) {
printf("%d ", *ptr);
ptr--; // Move memory pointer backward
}
printf("\n");
return 0;
}
