#include<stdio.h>
void main() {
	int i, j;
	FILE *fp;
	int arr[10];
	fp = fopen("Source.txt", "r+");
	for ( i = 0; i < 10; i++) {
		fscanf(fp, "%d", &arr[i]);
	}
	fclose(fp);
	fp = fopen("Target.txt", "w+");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	
	for ( i = 0; i < 10; i++) {
		fprintf(fp, "%d\n", arr[i]);
	}
	fclose(fp);
}
