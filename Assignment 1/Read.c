#include<stdio.h>
void main() {
    FILE *fp;
    int x;
    fp = fopen("Text.txt", "r");
    if (fp == NULL)
        printf("File does not exist");
    else {
    	while(fscanf(fp,"%d \n",&x) != EOF) {
    		printf("%d \n", x);
    	}
    }
    fclose(fp);
}
