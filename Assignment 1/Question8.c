#include<stdio.h>
void main() {
	char s;
	FILE *fp1, *fp2;
	fp1 = fopen("temp.txt", "w+");
	fp2 = fopen("q8.txt", "r+");
	while ((s = fgetc(fp2)) != EOF) {
		if (s != ' ' && s != '\n')
			fprintf(fp1, "%c", s);
	}
	remove("q8.txt");
	rename("temp.txt", "q8.txt");
	fclose(fp1);
	fclose(fp2);
}
