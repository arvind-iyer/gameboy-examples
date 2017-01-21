#include <gb/gb.h>
#include <gb/drawing.h>
#include <gb/console.h>
#include <stdio.h>
#include "ship.h"

void main()
{   
    int xpos = 0;                                                        
    /* sets the complete sprite data from tile 0 for 1 tile of smile
        (data begins at tile 0 and ends after 1 tile) */
    set_sprite_data(0,1,shipSprite);

    /* sets tile number 0 to tile 0 of smile */
    set_sprite_tile(0,0);

    
    /* moves sprite 0 to X-75 Y-75 */
    while(++xpos) {
        move_sprite(0,xpos,75);
        delay(10);
        SHOW_SPRITES;
    }                                 
} 