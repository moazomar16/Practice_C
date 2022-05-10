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
    /* the idea is that the user can enter a string of character and the program will output the freq of the digites from 0 to 9 in that string for example if the user entered "a11472o5t6" as input the program is going to count the number of zeros in the string and save that number and go`s on till 9 then it`s going to output the freq of each digit as following "0 2 1 0 1 1 1 1 0 0"
in the o/p the program did not found any zeros in the string so it o/p 0 and found two ones and o/p 2 .....   */
     char str[1000],arr[10]={0};
    int i,j,limit,x;
    gets(str);
    limit= strlen(str);
    for(x=0; x<limit; x++){
        for(j=0; j<limit; j++){
            if (str[j]=='0'+x)
                arr[x]++;
        }
    }
    for(i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
	return 0;
}

