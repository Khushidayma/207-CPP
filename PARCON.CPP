//parameterized constructors

#include<iostream.h>
#include<conio.h>

   class point
   {
    private:
	int x,y;
    public:
	//parameterized constructor
	point(int x1, int y1)
	{
		x=x1;
		y=y1;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}

   };
   int main()
   {
     //consructor called
     point p1(10,15);
     //access values assigned by constructor
     cout<<"p1.x=" <<p1.getx()<<",p1.y="<<p1.gety();

   getch();
   return 0;
   }