#include <stdio.h>
#include <wiringSerial.h>

int  main( int argc, char** argv )
{
  int fd = serialOpen (argv[1], 9600);
  if (fd < 0){

  	printf("Cant open serial. :(");

  }

  // serialPutchar (fd, 128);
  // serialPutchar (fd, 142);
  // serialPutchar (fd, 0);
  while(1){

  	printf("%i", serialGetchar(fd));

  }

  return 0;
// and so on
}