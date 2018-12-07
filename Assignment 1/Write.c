#include<stdio.h>
void main() {
    FILE *fp;
    int i = 0;
    fp = fopen("Text.txt", "w+");
    if (fp == NULL)
        printf("File does not exist");
    else {
    	while(i < 10) {
    		fprintf(fp, "%d\n", i);
    		i++;
    	}
    }
    fclose(fp);
}
