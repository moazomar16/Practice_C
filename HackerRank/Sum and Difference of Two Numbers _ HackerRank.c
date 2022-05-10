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
	int x,y;
	    float n,m;
	    scanf("%d %d",&x,&y);
	    scanf("%f %f",&n,&m);
	    printf("%d %d",x+y,x-y);
	    printf("\n%.1f %.1f",n+m,n-m);
	return 0;
}

