
#include"maya.h"






class user_circle : public circle
{
public:
user_circle(double r,int x0,int y0,int z0 ):circle(r,x0,y0,z0)
	{
	int i,j,k;
	for(j=0;j<screen_width;j++)
	for(i=0;i<screen_length;i++)
	for(k=0;k<screen_hight;k++)
	{
		if(cords[i][j][k])
		{
		REAL_CORD(i,j,k);
		
		if(cordinate[y] > (radius*0.33))
		{
		color[i][j][k]=31; 
		}
		else if(cordinate[y] < (-radius*0.33))
		{
		color[i][j][k]=34; 
		}
		else 
		{
		color[i][j][k]=37; 
		}

		}
	}

	}
};
/*
int additional()
{
parabola p(1,0,0,0);
cardiod card(1,0,0,0);
 int i=0;
 int col=green;

while(i<360)
{
i+=2;
p.screen_clear();
p.rotate(xy,i);
p.print();
p.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}


 i=0;

while(i<360)
{
card.screen_clear();
i+=3;
card.rotate(xy,i);
card.print();
card.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}
 i=0;
while(i<360)
{
i+=2;
p.screen_clear();
p.rotate(xyz,i);
p.print();
p.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}


 i=0;

while(i<360)
{
card.screen_clear();
i+=3;
card.rotate(xyz,i);
card.print();
 card.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}

return 0;
}

*/

int main()
{
unsigned int i=0;
user_circle uc(15,0,0,0);
cylinder cyli(15,20,0,0,0);

cube cu(20,-10,-10,0);
smily smile(17,0,0,0);
toroid t(12,5,10,10,0);
sphere s(18,0,-10,-10);
toroid t1(16,7,10,10,0);  // uncomment it  . if we use this, or any additional objects of any class it shows segmentation fault
cu.view_point[0]=500;
cu.view_point[1]=500;
cu.view_point[2]=-1000;
parabola p(1,0,0,0);
cardiod card(1,0,0,0);

int col=green;

// uncomment it
t.set_color(col);
i=0;
while(i<360)
{

t1.screen_clear();
i+=5;
t1.rotate(xy,i);
t1.print();
 DELAY(50);
}

i=0;
while(i<360)
{

t.screen_clear();
i+=5;
t.rotate(xy,i);
s.rotate(xy,i);
t.print();
 DELAY(80);
}
i=0;
while(i<360)
{
i+=2;
p.screen_clear();
p.rotate(xy,i);
p.print();
p.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}
i=0;
cu.set_color(col);
while(i<360)
{
t.screen_clear();
i+=10;
t.rotate(xy,i);
cu.rotate(xy,i);
t.print();
 DELAY(80);
}


 i=0;

while(i<360)
{
card.screen_clear();
i+=3;
card.rotate(xy,i);
card.print();
card.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}

i=0;
while(i<360)
{

cyli.screen_clear();
i+=5;
cyli.rotate(xy,i);
cyli.print();
 DELAY(80);
}


i=0;
while(i<360)
{
smile.screen_clear();
i+=10;
smile.rotate(y,i);
smile.print();
smile.set_color(col);
col++;
 DELAY(80);
}
i=0;
while(i<360)
{
i+=2;
p.screen_clear();
p.rotate(xyz,i);
p.print();
p.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}


 

i=0;
while(i<360)
{
smile.screen_clear();
i+=10;
smile.rotate(xy,i);
smile.print();
smile.set_color(col);
col++;
 DELAY(80);
}


i=0;

while(i<360)
{
card.screen_clear();
i+=3;
card.rotate(xyz,i);
card.print();
 card.set_color(col);
col++;
if(col>37)
col=black+1;
 DELAY(80);
}
i=0;
while(i<360)
{
uc.screen_clear();
i+=10;
uc.rotate(y,i);
uc.print();
 DELAY(80);
}



 i=0;
 

while(i<360)
{
i+=5;
t.screen_clear();
t.rotate(xy,i);
t.print();
 DELAY(80);
}


 i=0;

while(i<360)
{
cu.screen_clear();
i+=10;
cu.rotate(xy,i);
cu.print();
 DELAY(80);
}


}
