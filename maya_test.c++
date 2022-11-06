
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



int main()
{
unsigned int i=0;
user_circle uc(15,0,0,0);
cylinder cyli(15,20,0,0,0);
circle c(15,10,10,0);
parabola p(1,0,0,0);
cube cu(20,10,10,0);
smily smile(17,0,0,0);
toroid t(12,5,-10,-10,0);
toroid t1(16,7,10,10,0);
cu.view_point[0]=500;
cu.view_point[1]=500;
cu.view_point[2]=-1000;

cout<<"hiiiiiiiiiiiiiii \n"<<endl;
sphere s1(18,-10,-10,0);

sphere s2(8,10,-10,0);
s2.set_color(brown);
sphere s4(8,-10,10,0);
s4.set_color(red);
/*
sphere s4(8,10,10,0);

sphere s3(8,10,-10,0);
sphere s5(8,10,10,0);

*/	

i=0;
while(i<360)
{

t1.screen_clear();
i+=5;
t1.rotate(xy,i);
t.print();
 DELAY(50);
}

i=0;
while(i<360)
{

t.screen_clear();
i+=5;
t.rotate(xy,i);
s1.rotate(xy,i);
t.print();
 DELAY(50);
}

i=0;
while(i<360)
{
t.screen_clear();
i+=10;
t.rotate(xy,i);
cu.rotate(xy,i);
t.print();
 DELAY(50);
}




i=0;
while(i<360)
{

cyli.screen_clear();
i+=5;
cyli.rotate(xy,i);
cyli.print();
 DELAY(50);
}


i=0;
while(i<360)
{
smile.screen_clear();
i+=10;
smile.rotate(y,i);
smile.print();
 DELAY(50);
}

i=0;

while(i<360*2)
{
s2.screen_clear();
i+=10;
s2.rotate(xy,i);
s4.rotate(xy,i);
//s4.rotate(xyz,i);
s1.rotate(z,i);
s1.print();
 DELAY(70);
}

i=0;
while(i<360)
{
uc.screen_clear();
i+=10;
uc.rotate(y,i);
uc.print();
 DELAY(50);
}



 i=0;
 

while(i<360)
{
i+=5;
t.screen_clear();
t.rotate(xy,i);
t.print();
 DELAY(100);
}


 i=0;

while(i<360)
{
cu.screen_clear();
i+=10;
cu.rotate(xy,i);
cu.print();
 DELAY(100);
}

 i=0;

while(i<360)
{
uc.screen_clear();
i+=10;
uc.rotate(x,i);
uc.print();
 DELAY(50);
}

i=0;
while(i<360)
{
uc.screen_clear();
i+=10;
uc.rotate(y,i);
uc.print();
 DELAY(50);
}
i=0;

while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(z,i);
uc.print();
 DELAY(50);
}

DELAY(2000);
i=0;
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(xy,i);
uc.print();
 DELAY(50);
}
i=0;


DELAY(2000);
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(yz,i);
uc.print();
 DELAY(50);
}

DELAY(2000);
i=0;
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(xz,i);
uc.print();
 DELAY(50);
}

DELAY(2000);

i=0;
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(xyz,i);
uc.print();
 DELAY(50);
}

}
