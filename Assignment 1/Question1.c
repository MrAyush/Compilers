/*q1.txt must be in the root*/
#include<stdio.h>
void main() {
    FILE *fp;
    char s;
    fp = fopen("q1.txt", "r+");
    if (fp == NULL)
        printf("File does not exist");
    else {
    		while ((s = fgetc(fp)) != EOF) {
	    		printf("%c", s);
	    	}
   	}
   	printf("\n");
    fclose(fp);
}
