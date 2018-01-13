# Pixel Display
The Pixel Display library for the Raspberry Pi is a library written in C to help easily send data to the Pixel Display. This library uses Wiring Pi, so make sure it’s installed (sudo apt-get install wiringpi) and include the library when compiling (-lwiringPi). Refer to the example (main.c) for how the library is used and how to include the library in your project.

* [Hackaday](https://hackaday.io/project/18298-pixel-player) - Project Page
* [Pixel Display](http://www.google.com/) - Tindie
* [Pixel Display](http://www.pixelcircuits.com/) - Website

## Functions
**pixelDisplay_init** - Initializes the pixel display
```
Parameters: none
Return: void 
```
**pixelDisplay_close** - Closes the pixel display into the given mode
```
Parameters: 
	Action [unsigned char] - The action to close into
Return: void
```
**pixelDisplay_clear** - Clears the pixel display buffer with the given color
```
Parameters: 
	Red [unsigned char] - The red color value
	Green [unsigned char] - The green color value
	Blue [unsigned char] - The blue color value
Return: void 
```
**pixelDisplay_write** - Writes a color value to the display buffer at the given position
```
Parameters: 
	X [unsigned int] - The x coordinate to write to
	Y [unsigned int] - The y coordinate to write to
	Red [unsigned char] - The red color value
	Green [unsigned char] - The green color value
	Blue [unsigned char] - The blue color value
Return: void 
```
**pixelDisplay_read** - Reads a color value to the display buffer at the given position
```
Parameters: 
	X [unsigned int] - The x coordinate to write to
	Y [unsigned int] - The y coordinate to write to
	Red [unsigned char*] - The red color value
	Green [unsigned char*] - The green color value
	Blue [unsigned char*] - The blue color value
Return: void 
```
**pixelDisplay_setBrightness** - Sets the brightness value for the display	
```
Parameters: 
	Brightness [unsigned int] - The brightness value from 0 to 3
Return: void 
```
**pixelDisplay_getBrightness** - Gets the brightness value for the display
```
Parameters: none
Return: 
	Brightness [unsigned char] - The brightness value from 0 to 3
 ```
**pixelDisplay_flush** - Sends display buffer data and brightness settings to the display
```
Parameters: none
Return: void 
```

## License

This project is licensed under the GPL License - see the [LICENSE.md](LICENSE.md) file for details
