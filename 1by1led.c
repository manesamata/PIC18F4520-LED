#include<p18f4520.h>
void delay(void);
void main()
{
TRISB=0X00;
PORTB=0X00;
while(1)
{
PORTB=0X01;
delay();
PORTB=0X02;
delay();
PORTB=0X04;
delay();
PORTB=0X08;
delay();
PORTB=0X10;
delay();
PORTB=0X20;
delay();
PORTB=0X40;
delay();
PORTB=0X80;
delay();
}
}
void delay(void)
{
int i,j;
for(i=0;i<200;i++)
{
for(j=0;j<200;j++)
{
}
}
}
