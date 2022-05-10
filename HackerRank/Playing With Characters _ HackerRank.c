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
	char ch ,s[100],sen[100];
	    scanf("%c",&ch);
	    scanf("%s",s);

	    scanf("\n");
	    scanf("%[^\n]%*c", sen);
	    printf("%c\n",ch);
	    printf("%s\n",s);
	    printf("%s\n",sen);
	return 0;
}

