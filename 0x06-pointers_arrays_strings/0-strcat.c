#include<stdio.h>
#include<string.h>

int main()
{
	char text1[]="My name is ";
	char text2[]="Dorcas";
	strcat(text1 , text2);
	printf("%s",text1);
	return 0;
}

