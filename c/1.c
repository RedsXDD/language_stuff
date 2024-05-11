#include <stdio.h>

int main() {
  int age = 21;           // Declaration + initialization.
  float gpa = 2.85;       // Floating point number.
  char grade = 'C';       // Single character.
  char name[] = "Gerald"; // Array of characters.

  /*
   * '%d' specifies the data type of the variable to be 'decimal'.
   * Then after ',' you specify the variable that will be displayed
   * on the location of the placeholder '%d'.
   */
  printf("You are %d years old\n", age);
  printf("Hello %s\n", name);                        // '%s' for 'string'.
  printf("You're avarage grade is \"%c\"\n", grade); // '%c' for character.
  printf("Your gpa is \"%f\"\n", gpa);               // '%f' for float.
  return 0;
}
