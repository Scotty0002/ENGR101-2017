
#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
	int read=read_analog(0);
	if(read>4){
	init();
	set_motor(1,-75);
	set_motor(2,75);
	sleep1(1,0);
	stop(1);
	stop(2);
	}
		return 0;}
