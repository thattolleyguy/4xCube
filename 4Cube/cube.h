/*
 * cube.h
 *
 * Created: 9/22/2015 9:52:47 PM
 *  Author: thatt
 */ 


#ifndef CUBE_H_
#define CUBE_H_
#include <stdint.h>
// *** Cube buffer ***
// The 3D image displayed on the cube is buffered in a 2d array 'cube'.
// The 1st dimension in this array is the Z axis of the cube.
// The 2nd dimension of the array is the Y axis.
// Each byte is a stripe of leds running along the X axis at the given
// Z and Y coordinates.
// Only the 4 lower bits are used, since the cube is only 4x4x4.
// This buffer design was chosen to have code compatability with a 8x8x8 cube.
// "volatile" makes the variables reachable from within the interrupt functions
volatile unsigned char cube[4][4];

// We sometimes want to draw into a temporary buffer so we can modify it
// before writing it to the cube buffer.
// e.g. invert, flip, reverse the cube..
volatile unsigned char tmpcube[4][4];

void delay_ms (uint16_t x); // delay function used throughout the program

#endif /* CUBE_H_ */