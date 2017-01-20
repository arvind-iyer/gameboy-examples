#include <gb/gb.h>
#include <stdio.h>
#include <gb/console.h>
char string[25];           /* input string */

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


void main()                  /* main program */
{

  puts("Enter Name :\n");   
  gets(string);               /* gets users input */
  cls();                      /* clears screen    */

  printf("Hello %s",string);    /* puts the string on screen */

  puts("\n\nWelcome to the");
  puts("World of Game Boy");
  puts("Programming !");

}   