#include <iostream>
#include <stdio.h>
/*https://github.com/PostoapocalMaster/Homework-2.3*/

main()
{
	int pin1, pin2;
	
	printf("pin1=");
	scanf("%i",&pin1);
	
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==123)&&(pin2==321))||((pin1==1234)&&(pin2==4321)))
	{
		printf("OK");
	}
	else
	{
		printf("ERROR");
	}
}