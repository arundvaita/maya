#include"maya.h"
int main()
{
parabola p(1.6,0,0,0);
int i=0;
while(i<360)
{
i+=10;
p.screen_clear();
p.rotate(xy,i);
p.print();
 DELAY(100);
}

}
