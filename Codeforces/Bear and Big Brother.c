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
	int a, b;
	scanf("%d %d",&a,&b);
	int i;
	for(i=1; !(a>b);i++){
		a*=3;
		b*=2;
	}
	printf("%d",i-1);

	return 0;
}

