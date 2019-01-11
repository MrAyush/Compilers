#include<stdio.h>
#include<string.h>
int main(int argc, char **argv) {
	FILE *fp;
	char c[100];
	fp = fopen(argv[1], "r+");
	if (fp == NULL) {
		printf("Error");
		return -1;
	}
	while (fgets(c, 100, fp) != NULL) {
		//printf("%s\n", c);
		if (c[strlen(c) - 2] == '{' || c[strlen(c) - 2] == ')') {
			strtok(c, " ");
			if (strcmp(c, "int") == 0 || strcmp(c, "float") == 0|| strcmp(c, "double") == 0 || strcmp(c, "long") == 0 ||
				strcmp(c, "void") == 0) {
				printf("func: %s\n", strtok(NULL, " ("));
			}
		}
	}
	fclose(fp);
	return 0;
}
