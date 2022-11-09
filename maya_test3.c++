#include"maya.h"
int main()
{
int col1=green;
sphere s1(14,0,0,0);

sphere s2(8,20,-10,0);
col1=red;
s2.set_color(col1);
sphere s4(8,-20,10,0);
col1=brown;
s4.set_color(col1);
sphere s3(8,-20,-10,0);
sphere s5(8,20,10,0);
col1=cyan;
s3.set_color(col1);
col1=magenta;
s5.set_color(col1);

int i=0;

while(i<360*2)
{
s2.screen_clear();
i+=10;
s2.rotate(xy,i);
s4.rotate(xy,i);
s3.rotate(yz,i);
s5.rotate(xz,i);
s1.rotate(xz,i);
s1.print();
 DELAY(100);
 }
 }
