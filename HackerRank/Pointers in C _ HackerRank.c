/*
 * main.c
 *
 *  Created on: Apr 5, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
#include "string.h"
#include "math.h"
void update(int *a,int *b) {
    int x,y;
    x=*a + *b;
    y=abs(*a - *b);
    *a=x;
    *b=y;
}

int main (){
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);


	return 0;
}

