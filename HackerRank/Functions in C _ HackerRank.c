/*
 * main.c
 *
 *  Created on: Apr 5, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
#include "string.h"
#include "math.h"

int max_of_four(int a, int b, int c, int d){
    if(a>=b && a>=c && a>=d)
    return a;
    else if(b>=a && b>=c && b>=d)
    return b;
    else if(c>=b && c>=a && c>=d)
    return c;
    else
    return d;

}

int main (){
	setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF,0);
	int main(){
	int a, b, c, d;
	    scanf("%d %d %d %d", &a, &b, &c, &d);
	    int ans = max_of_four(a, b, c, d);
	    printf("%d", ans);
	return 0;
}

