#include<stdio.h>
#include<stdlib.h>
void main() {
	int i;
	FILE *fp;
	fp = fopen("Source.txt", "w+");
	for ( i = 0; i < 10; i++) {
		fprintf(fp, "%d\n", rand()%50);
		//printf("%d\n", rand()%50);
	}
	fclose(fp);
}
