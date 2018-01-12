//-----------------------------------------------------------------------------------------
// Title:	Pixel Display (linux)
// Program: Pixel Player
// Authors: Stephen Monn
//-----------------------------------------------------------------------------------------
#include "pixeldisplay.h"
#include "pixeldisplay.c"
#include <unistd.h>

unsigned int x,y;

int main(void)
{
	pixelDisplay_init();
	
	//draw a blank screen
	pixelDisplay_clear(0, 0, 0);
	pixelDisplay_flush();
	usleep(1000000);
	
	//draw a blank screen with a single red LED
	pixelDisplay_clear(0, 0, 0);
	pixelDisplay_write(3, 3, 255, 0, 0);
	pixelDisplay_flush();
	usleep(1000000);
	
	//draw a blue screen with a black border
	pixelDisplay_clear(0, 0, 200);
	for(x=0; x<32; x++)	pixelDisplay_write(x, 0, 0, 0, 0);
	for(x=0; x<32; x++)	pixelDisplay_write(x, 15, 0, 0, 0);
	for(y=0; y<16; y++)	pixelDisplay_write(0, y, 0, 0, 0);
	for(y=0; y<16; y++)	pixelDisplay_write(31, y, 0, 0, 0);
	pixelDisplay_flush();
	usleep(1000000);
	
	//lower the brightness value
	pixelDisplay_setBrightness(1);
	pixelDisplay_flush();
	usleep(1000000);
	
	//close the display without loading icon
	pixelDisplay_close(PIXEL_DISPLAY_CLOSE_ACTION_OFF);
	return 0;
}
