#include <gb/gb.h>
#include <gb/console.h>
#include <stdio.h>
#include <string.h>

char pass[20]; 

void cls()
{                                /* simple clear screen function */
  int x, y;

  for(y = 0; y < 20; y++)        /* loop for the num of charaters across (x)*/
    for(x = 0; x < 30; x++)      /* loop for the num of charaters high (y)*/
    {    
      gotoxy(x, y);              /* moves the postion to x,y */
      setchar(' ');              /* puts a space on screen */
    }                            /* does the above until we have cleared the screen */
gotoxy(0,0);                     /* returns the position to the top left */
}

void home();
void login_fail() {
    cls();
    puts("u be a filthy hax0r");
    waitpad(J_A | J_B | J_START);
    home();
}

void login_success() {
    cls();
    puts("Welcome!\n");
    puts("Account Balance: $1337");
    waitpad(J_A | J_B | J_START);
    home();
}
void home() {
    cls();
    puts("\n    Bank of GBA\n");
    puts("\nPass: ");
    gets(pass);
    strcmp(pass, "TEST") ? login_fail() : login_success();
}

void main() {
    home();
}

