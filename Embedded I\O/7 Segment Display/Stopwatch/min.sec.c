#include<reg51.h>
#include"delay.h"
#define seg_cat P2
void disp_secs(unsigned int n);
void disp_mins(unsigned int n);
sbit CA1 = P3^0;
sbit CA2 = P3^1;
sbit CA3 = P3^2;
sbit CA4 = P3^3;
code char a[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void main()
{
	unsigned int i,j,k;
	while(1)
	{
		for(i=0;i<60;i++)
		{
			for(j=0;j<60;j++)
			{
			for(k=0;k<100;k++)
				{
				disp_mins(i);
			  disp_secs(j);
				}
			}
		}
	}		
}
void disp_secs(unsigned int n)
{
	seg_cat = a[n%10];
	CA4=1;
	delay_ms(2);
	CA4=0;
	
	seg_cat = a[(n/10)%10];
	CA3=1;
	delay_ms(2);
	CA3=0;
}
void disp_mins(unsigned int n)
{
	seg_cat = a[n%10] + 0x80; // putting DOT 
	CA2=1;
	delay_ms(2);
	CA2=0;
	
	seg_cat = a[(n/10)%10];
	CA1=1;
	delay_ms(2);
	CA1=0;
}
