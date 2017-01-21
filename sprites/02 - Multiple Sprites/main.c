#include <gb/gb.h>

/* smile was created in GameBoy Tile Designer */
unsigned char smile[] =
{
  0x3C,0x3C,0x42,0x42,0x81,0xA5,0x81,0x91,   /* smile :|  */
  0x81,0x85,0x81,0xB9,0x42,0x42,0x3C,0x3C,               
  0x3C,0x3C,0x42,0x42,0x81,0xA5,0x81,0x91,   /* smile :)  */
  0x81,0x81,0x81,0x99,0x42,0x42,0x3C,0x3C
};

int x = 75, y = 75, key = 0, swapctr = 0;
int active = 0;
void main()
{
    SPRITES_8x8;

    /* sets the complete sprite data from tile 0 for 2 tiles of smile
    (data begins at 0 and ends after 2 tiles) */
    set_sprite_data(0,2,smile);

    /* sets tile number 0 to tile 0 of smile */
    set_sprite_tile(0,0);

    /* sets tile number 1 to tile 1 of smile */
    set_sprite_tile(1,1);

    SHOW_SPRITES;
    while(!0)        /* infinate loop */
    {
        delay(20);
        swapctr++;
        move_sprite(active, x, y);
        //swap active every 50 ticks aka 500 ms
        if(swapctr > 50) {
            //reset swap counter
            swapctr  = 0;
            //move current sprite off-screen
            move_sprite(active, 200, 200);
            //swap active sprite
            active = 1 - active;
            move_sprite(active, x, y);
        }
        
        // Handle Joystick input
        key = joypad();
        if(key & J_UP)
            y = (y>0) ? --y : 0;
        else if(key & J_DOWN)
            y = (y<160) ? ++y : 160;
        if(key & J_LEFT)
            x = (x > 0) ? --x : 0;
        else if(key & J_RIGHT)
            x = (x < 144) ? ++x : 144;
    }            /* end of loop */
}   