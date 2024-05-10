#include <stdio.h>

int main(){
	char c1,c2,c3,c4,c5;
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	if(c1>='w')
	c1=c1-22;
	else
	c1=c1+4;
	if(c2>='w')
	c2=c2-22;
	else
	c2=c2+4;
	if(c3>='w')
	c3=c3-22;
	else
	c3=c3+4;
	if(c4>='w')
	c4=c4-22;
	else
	c4=c4+4;
	if(c5>='w')
	c5=c5-22;
	else
	c5=c5+4;
	printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
	
	return 0;
}