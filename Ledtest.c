#include<stdio.h>
#include<wiringPi.h> //wiringPi.h헤더파일을 추가시킵니다.

int main(){
	int i;

	if(wiringPiSetup()==-1) return -1; 
	pinMode(27,OUTPUT); 
	for(i=0;i<5;i++) 
	{
		digitalWrite(27,1); 
		delay(500); 
		digitalWrite(27,0); 
		delay(500); 
	}
	return 0;
}
