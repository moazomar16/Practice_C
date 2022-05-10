/*
 * main.c
 *
 *  Created on: Apr 5, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
#include "string.h"
#include "math.h"

int main (){
	setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF,0);
	int main()
	{

		char s[100];
		scanf("%[^\n]%*c", &s);

		printf("Hello, World!\n%s",s);
		return 0;
	}

	return 0;
}

