/*
 * draw.h
 *
 * Created: 9/22/2015 10:04:59 PM
 *  Author: thatt
 */ 


#ifndef DRAW_H_
#define DRAW_H_

void setvoxel(int x, int y, int z);
void clrvoxel(int x, int y, int z);
unsigned char getvoxel(int x, int y, int z);
void flpvoxel(int x, int y, int z);
void altervoxel(int x, int y, int z, int state);
void setplane_z(int z);
void setplane(unsigned char plane, int i, int state);
void fill (unsigned char pattern);



#endif /* DRAW_H_ */