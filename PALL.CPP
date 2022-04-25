#include<iostream.h>
#include<conio.h>
void main()
{
	int n,rev=0,temp,rem;
	clrscr();
	cout<<"\nenter the given number is pallindrome or not\t:";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	cout<<"\n number is pallindrome:\t";
	else
	cout<<"\n number is not pallindrome:\t";
	getch();
}