#include<reg51.h>
#include"delay.h"
#define seg_cat P2
void disp(unsigned int n);
sbit CA1 = P3^0;
sbit CA2 = P3^1;
sbit CA3 = P3^2;
sbit CA4 = P3^3;
code char a[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void main()
{
	unsigned int i;
	while(1)
	{
		for(i=0;i<9999;i++)
		{
			unsigned int j;
			for(j=0;j<12;j++)
				disp(i);
		}
	}		
}
void disp(unsigned int n)
{
	seg_cat = a[n/1000];
	CA1=1;
	delay_ms(2);
	CA1=0;
	
	seg_cat = a[(n/100)%10];
	CA2=1;
	delay_ms(2);
	CA2=0;
	
	seg_cat = a[(n/10)%10];
	CA3=1;
	delay_ms(2);
	CA3=0;
	
	seg_cat = a[n%10];
	CA4=1;
	delay_ms(2);
	CA4=0;
}