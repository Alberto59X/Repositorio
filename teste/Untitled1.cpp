#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iso646.h>
 
 #define MIN 1000
 #define MAX 2000
 
int main(void) {
	int i;
	for(i = MIN; i <= MAX; i++) {
		if(i % 11 == 5) {
			printf("%d\n", i);
		}
	}
	return 0;
}
