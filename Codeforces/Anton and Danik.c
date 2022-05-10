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
    int n,countA=0,countD=0;
    //char arr[250];
    char arr;
    scanf("%d\n",&n);

    int i;
    for(i=0; i<n; i++){
    	scanf("%c",&arr);
    	(arr=='A')? countA++: countD++;
    }
    (countA==countD)? printf("Friendship\n"): (countA > countD)? printf("Anton\n") : printf("Danik\n");

    return 0;
}

