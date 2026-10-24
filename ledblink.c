#include<p18f4520.h>
void delay(void);
void main()
{
TRISB=0X00;
PORTB=0X00;
while(1)
{
PORTB=0XFF;
delay();
PORTB=0X00;
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

