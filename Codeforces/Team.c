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
	int n,arr[1000][3],result=0;
	scanf("%d",&n);
	int i,j;
	for (i=0; i<n; i++){
		for(j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
	}
	for(i=0;i<n;i++){
		if((arr[i][0]+arr[i][1]+arr[i][2])>1)
			result++;
	}
	printf("%d",result);

	return 0;
}

