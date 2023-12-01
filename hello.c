#include <stdio.h>

// Let's add some fun modifications
#define greet printf
#define planet "Earth"
#define punctuation "!"

// Function to add a little fun twist
void funMessage() {
    printf("\nBut beware, intergalactic squirrels might be watching!\n");
}

int main() {
    // greet() displays the string inside quotation
    greet("Greetings, %s%s", planet, punctuation);
    
    // Call the funMessage function
    funMessage();

    return 0;
}
