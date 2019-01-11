#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char **argv) {
	FILE *fp1, *fp2;
	char c;
	fp1 = fopen(argv[1], "r+");
	fp2 = fopen("temp", "w+");
	if (fp1 == NULL) {
		printf("Error");
		return -1;
	}
	while ((c = fgetc(fp1)) != EOF) {
		c = toupper(c);
		fprintf(fp2, "%c", c);
	}
	fclose(fp1);
	fclose(fp2);
	remove(argv[1]);
	rename("temp", argv[1]);
	return 0;
}
