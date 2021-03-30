//Program by waseem bhat
#include <stdio.h>
int main() {
  int array[100], s, i, temp;
 printf("Enter size: \n");
  scanf("%d", &s);
 printf("Enter Elements: ");
  for (i = 0; i < s; i++) {
    scanf("%d", &array[i]);
  }
 
  for (i = 0; i < s/2; i++) {
    temp= array[i];
    array[i]   = array[s-1-i];
    array[s-1-i] = temp;
  }
 
  printf("Reversed array elements are:\n");
 
  for (i = 0; i < s; i++) {
    printf("%d\n", array[i]);
  }
 
  return 0;
}