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
	int arr[5][5],result[2];
	int i,j;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			scanf("%d",&arr[i][j]);
			if (arr[i][j]==1){
				result[0]=i;
			    result[1]=j;
		}}
	}
		printf("%d",abs(result[0]-2)+abs(result[1]-2));

	return 0;
}
