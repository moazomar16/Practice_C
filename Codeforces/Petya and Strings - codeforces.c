/*
 * main.c
 *
 *  Created on: Apr 5, 2022
 *      Author: Moaz Omar
 */
// link of the problem https://codeforces.com/contest/263/problem/A
#include "stdio.h"
#include "string.h"
#include "math.h"

int main (){
	char a[100],b[100];
	scanf("%[^\n]%*c", &a);
	scanf("%[^\n]%*c", &b);
	int flag=0;
	flag=stricmp(a,b);
	printf("%d",flag);


	return 0;
}
