#include <stdio.h>
#include <wiringSerial.h>

main ()
{
  int fd = serialOpen ("/dev/ttyUSB0", 115200) ;
  if (fd < 0){

  	fprintf("Cant open serial. :(");

  }

  serialPutchar (fd, 128);
  serialPutchar (fd, 142);
  serialPutchar (fd, 0);
// and so on
}