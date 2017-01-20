#include <gb/gb.h>
#include <stdio.h>
#include <gb/console.h>

void cls()
{                                /* simple clear screen function */
  int x, y;

  for(y = 1; y < 20; y++)        /* loop for the num of charaters across (x)*/
    for(x = 0; x < 30; x++)      /* loop for the num of charaters high (y)*/
    {    
      gotoxy(x, y);              /* moves the postion to x,y */
      setchar(' ');              /* puts a space on screen */
    }                            /* does the above until we have cleared the screen */
gotoxy(0,0);                     /* returns the position to the top left */
}

void main()                     
{
int key;
int x = 0;
//infinite event loop
 while(!0)                      
 {
    key=joypad();                 
    gotoxy(0,0);
    puts("    BUTTON TEST\n");
    if(key & J_A)
      puts("You have pressed A\n");
    if(key & J_B)
      puts("You have pressed B\n");
    if(key & J_LEFT)
      puts("You have pressed LEFT\n");
    if(key & J_RIGHT)
      puts("You have pressed RIGHT\n");
    if(key & J_UP)
      puts("You have pressed UP\n");
    if(key & J_DOWN)
      puts("You have pressed DOWN\n");
    if(key & J_SELECT)
      puts("You have pressed SELECT\n");
    if(key & J_START)
      puts("You have pressed START\n");
    waitpadup();
    cls();
    
 }                              


}  