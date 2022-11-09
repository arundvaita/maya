#include"maya.h"
int main()
{
parabola p(1.6,0,0,0);
cardiod c(2,0,0,0);

int i=0;
/*
while(i<360)
{
i+=10;
p.screen_clear();
p.rotate(xy,i);
p.print();
 DELAY(100);
}
 i=0;
while(i<360)
{

i+=10;
c.screen_clear();
c.rotate(xy,i);
c.print();
 DELAY(100);
}
*/
int col= black;
 double i1=0;
 while(i1<30)
{
sphere s2(i1,0,0,0);
i1+=0.1;
s2.set_color(col);
col++;
if(col>37)
col=black+1;
s2.screen_clear();
s2.rotate(xy,0);
s2.print();

 DELAY(50);
}
i1=0;
 col= black+1;
while(i1<3)
{
cardiod c(i1,0,0,0);
i1+=0.01;
c.set_color(col);
col++;
if(col>37)
col=black+1;
c.screen_clear();
c.rotate(xy,0);
c.print();

 DELAY(50);
}


}
