
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
 i=0;

while(i<360)
{
uc.screen_clear();
i+=10;
uc.rotate(x,i);
uc.print();
 DELAY(100);
}

i=0;
while(i<360)
{
uc.screen_clear();
i+=10;
uc.rotate(y,i);
uc.print();
 DELAY(100);
}
i=0;

while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(z,i);
uc.print();
  DELAY(100);
}

DELAY(2000);
i=0;
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(xy,i);
uc.print();
  DELAY(100);
}
i=0;


DELAY(2000);
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(yz,i);
uc.print();
 DELAY(100);
}

DELAY(2000);
i=0;
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(xz,i);
uc.print();
 DELAY(100);
}

DELAY(2000);

i=0;
while(i<360)
{
i+=10;
uc.screen_clear();
uc.rotate(xyz,i);
uc.print();
 DELAY(100);
}
}

