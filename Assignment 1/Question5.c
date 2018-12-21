#include<stdio.h>

struct Student {
	char name[20];
	int reg;
}s;

void main() {
	/*FILE *fp;
	fp = fopen("q5.txt","a+");
	printf("Enter a name: ");
	scanf("%s", s.name);
	printf("Enter a reg: ");
	scanf("%d", &s.reg);
	fprintf(fp, "%s", s.name);
	fprintf(fp, " %d", s.reg);
	fputs("\n", fp);
	fclose(fp);*/
	FILE *fp;
	char c = 'y';
	fp = fopen("q5.txt","a+");
	while (c == 'y') {
		printf("Enter a name: ");
		scanf("%s", s.name);
		printf("Enter a reg: ");
		scanf("%d", &s.reg);
		fprintf(fp, "%s", s.name);
		fprintf(fp, " %d", s.reg);
		fputs("\n", fp);
		printf("\nDo you want to enter more records: ");
		scanf(" %c", &c);
	}
	fclose(fp);
	
}
