#include<stdio.h>
int main() {
	FILE *fp1, *fp2;
	char c[100];
	char d[100];
	fp1 = fopen("text1.txt", "r");
	fp2 = fopen("text2.txt", "r");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Error");
		return -1;
	}
	while (fgets(c, 100, fp1) != NULL && fgets(d, 100, fp2) != NULL) {
		printf("%s", c);
		printf("%s", d);
	}
	while (fgets(c, 100, fp1) != NULL) {
		printf("%s", c);
	}
	while (fgets(d, 100, fp2) != NULL) {
		printf("%s", d);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
