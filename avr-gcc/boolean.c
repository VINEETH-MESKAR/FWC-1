#include <avr/io.h>
#include <util/delay.h>

 
int main (void)
{
  unsigned char a, b, c, x,y, in;
#define mask 0x01
  DDRD = 0x00;
  DDRB = 0x20;
while(1){
  in = PIND;
  in = in>>2;
  a = in& mask;
  in = in>>1;
  b = in& mask;
  in = in>>1;
  c = in& mask;
  x =  (!a||!b&&c);
  y =  (!a&&!b&&!c)||(!a&&b&&!c)||(!a&&b&&c)||(!a&&!b&&c)||(a&&!b&&c);

  if (x==y) {
    PORTB = ((1 <<  PB5));
  }
  else {PORTB = ((0<<PB5));}
}
}
