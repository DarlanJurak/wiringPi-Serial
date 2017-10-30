#include <stdio.h>
#include <wiringSerial.h>

main ()
{
  int fd = serialOpen ("/dev/ttyUSB0", 115200) ;
  if (fd < 0)
    ... error - your code here

  serialPutchar (128) ;
  serialPutchar (142) ;
  serialPutchar (0) ;
// and so on
}