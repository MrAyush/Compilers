#include<stdio.h>
void main() {
	char s;
	FILE *fp;
	fp = fopen("q7.txt", "w+");
	printf ("Enter a para: ");
	scanf("%c", &s);
	while (s != '~') {
		fprintf(fp, "%c", s);
		scanf("%c", &s);
	}
	fclose(fp);
}
