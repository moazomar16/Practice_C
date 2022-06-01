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
	int n,swap,arr[100];
	scanf("%d",&n);
	int i,j;
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++){
		j=i+1;
				for( ;j<n;j++){
					if(arr[i]>arr[j]){
						swap=arr[i];
						arr[i]=arr[j];
						arr[j]=swap;
					}
				}
	}
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	return 0;
}
