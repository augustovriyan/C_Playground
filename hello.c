#include <stdio.h>

#define greet printf
#define planet "Earth"
#define punctuation "!"

int main() {
   // greet() displays the string inside quotation
   greet("Greetings, %s%s", planet, punctuation);
   return 0;
}
