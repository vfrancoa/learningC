/*
Primer programa en c, emulando la libreria conio.h 
de turbo c.
*/

#include <stdio.h>
#include <stdlib.h>
void clrscr()
{
       printf("\x1b[2J");
}
 char getch()
{
      char c; // This function should return the keystroke
      system("stty raw");    // Raw input - wait for only a single keystroke
      system("stty -echo");  // Echo off
      c = getchar();
      system("stty cooked"); // Cooked input - reset
      system("stty echo");   // Echo on - Reset
      return c;
}
int main()
{
    printf("\x1b[0m"); // Color background
    clrscr();       // Clear the screen with blue bg
    printf("\x1b[2m"); // Color foreground
    printf("Hello, World!\n");
    getch();
    printf("\x1b[0m");   // Reset the console
    return 0;
}