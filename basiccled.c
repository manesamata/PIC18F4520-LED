#include<p18f4520.h>
void main()
{
TRISB=0X00;
PORTB=0X00;
while(1)
{
PORTB=0XFF;
}
}