#include<stdio.h>

struct Student {
	char name[20];
	int reg;
}s;

void main() {
	FILE *fp;
	char c = 'y';
	fp = fopen("q5.txt","r+");
	while (fscanf(fp, "%s %d", s.name, &s.reg) != EOF) {
		printf ("\nContents of the file: \n%s %d", s.name, s.reg);
	}
	printf("\n");
	fclose(fp);
}
