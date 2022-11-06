/*

use step size 10 
try, layered rendering,with each layer rotates at different speed

*/


#ifndef __MAYA_H__
#define __MAYA_H__

#include<iostream>
using namespace std;
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

#define REAL_CORD(x_axis,y_axis,z_axis) cordinate[0]= x_axis-screen_length/2;cordinate[1]= screen_width/2-y_axis;cordinate[2]= z_axis-screen_hight/2// i,j,k should be used for x,y,z respectively

#define MATRIX_CORD(x_axis,y_axis,z_axis) cordinate[0]= x_axis+screen_length/2;cordinate[1]= screen_width/2-y_axis;cordinate[2]= z_axis+screen_hight/2// i,j,k should be used for x,y,z respectively

#define DELAY(millis) usleep(millis * 1000)

#define RAD(ANG) (M_PI/180.0)*ANG;


enum colour{black=30,red,green,brown,blue,magenta,cyan,white,bblack=40,bred,bgreen,bbrown,bblue,bmagenta,bcyan,bwhite,bdef=49  };

// delete alll commentsssssssssssssssssssssssssssssssssssssssss

enum option{x,y,z,xy,yz,xz,xyz};

extern int screen_length;
extern int screen_width;
extern int screen_hight;



class maya
{
public:
maya();
int view_point[3];  // set it in constructor

static char screen[71][41][2]; // sat color in constructor

int centre[3];  // for centre
char cords[71][41][41]; // for xp,yp,zp
char color[71][41][41];  // for color set
char normal[71][41][41][3]; // for xn,ynn,zn, 
char cordinate[3];  // avoid if not required
//char normal_mapped[41][141][41];   // avoid if not required
char rotated[71][41][41]; // xr,yr,zr

double intensity; // set it in constructor      


void rotate(char option,double angle);
void print();
void screen_clear();
void set_color(int );
};




class circle : public maya
{

public:
double radius;

circle(double r,int x0,int y0,int z0);

};
class smily : public circle
{
public:
double radius;
smily(double r,int x0,int y0,int z0);

};

class cylinder : public circle
{
public:
double radius;
double hight;
cylinder(double r,double h,int x0,int y0,int z0);

};



class parabola : public maya
{

public:
double radius;

parabola(double r,int x0,int y0,int z0);

};
class cardiod : public maya
{


};
class sphere : public maya
{
public:
double radius;
sphere(int r,int x0,int y0,int z0);
};

class toroid : public maya
{
public:
int outer_radius,inner_radius;

toroid(int r1,int r2,int x0,int y0,int z0);

};
class cube : public maya
{
public:
int radius;
cube(int r,int x0,int y0,int z0);


};







#endif
