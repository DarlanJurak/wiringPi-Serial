#include <stdio.h>
#include <wiringSerial.h>

int main ()
{
  int fd = serialOpen ("/dev/ttyUSB0", 115200) ;
  if (fd < 0){

  	printf("Cant open serial. :(");

  }

  // serialPutchar (fd, 128);
  // serialPutchar (fd, 142);
  // serialPutchar (fd, 0);
  while(1){

  	printf(serialGetchar(fd));

  }

  return 0;
// and so on
}