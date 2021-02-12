#include <PIC18F4550.h>
#define EN PORTCbits.RC6
#define RS PORTCbits.RC7
#define sw1 PORTBbits.RB3
#define sw2 PORTBbits.RB4
#define lamp PORTBbits.RB7
void delay()
{
unsigned int i;
for(i=0;i<30000;i++);
}
void lcdcmd(unsigned char value)
{
RS = 0;
PORTB= value;
delay();
EN = 1;
delay();
EN = 0;
}
void lcddata(unsigned char value)
{
RS = 1;
PORTB= value;
delay();
EN = 1;
delay();
EN = 0;
}
void lcdinit()
{
lcdcmd(0X38); // initialize 5X7 dot LCD in 8 bit mode
delay();
lcdcmd(0X0E); // Display ON Cursor ON
delay();
lcdcmd(0X01); // Clear LCD
delay();
lcdcmd(0X80); // select 1st Line 1st Position
delay();
}
void main()
{
    int count=0;
    TRISBbits.TRISB3=1;
    TRISBbits.TRISB4=1;
    TRISBbits.TRISB7=0;
    TRISD=0X00;
    TRISCbits.TRISC7=0;
    TRISCbits.TRISC6=0;
    lcdinit();


while(1)
{
    if(sw1==1)
    {
        count++;
        delay();
        lcddata(count);
        delay();


    }

if(sw2==1)
    {
        #include <PIC18F4550.h>
#define EN PORTCbits.RC6
#define RS PORTCbits.RC7
#define sw1 PORTBbits.RB3
#define sw2 PORTBbits.RB4
#define lamp PORTBbits.RB7
void delay()
{
unsigned int i;
for(i=0;i<30000;i++);
}
void lcdcmd(unsigned char value)
{
RS = 0;
PORTD= value;
delay();
EN = 1;
delay();
EN = 0;
}
void lcddata(unsigned char value)
{
RS = 1;
PORTD= value;
delay();
EN = 1;
delay();
EN = 0;
}
void lcdinit()
{
lcdcmd(0X38); // initialize 5X7 dot LCD in 8 bit mode
delay();
lcdcmd(0X0E); // Display ON Cursor ON
delay();
lcdcmd(0X01); // Clear LCD
delay();
lcdcmd(0X80); // select 1st Line 1st Position
delay();
}
void main()
{
    int count=0;
    TRISBbits.TRISB3=1;
    TRISBbits.TRISB4=1;
    TRISBbits.TRISB7=0;
    TRISD=0X00;
    TRISCbits.TRISC7=0;
    TRISCbits.TRISC6=0;
    lcdinit();
    lcddata(6);

while(1)
{
    if(sw1==1)
    {
        count++;
        delay();
        lcddata(count);
        delay();


    }

if(sw2==1)
    {
        count--;
        delay();
        lcddata(count);
        delay();

    }


}
  if(count==0)
  {
      lamp=0;


  }
  else
  {
      lamp=1;
  }
}


        delay();
        lcddata(count);
        delay();

    }


}
  if(count==0)
  {
      lamp=0;


  }
  else
  {
      lamp=1;
  }
}
