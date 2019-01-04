#include<stdio.h>
void main() {
	int i, j, k, m, n;
	FILE *fp, *fp2;
	fp = fopen("input.txt", "r+");
	fp2 = fopen("output.txt", "w+");
	fscanf(fp, "%d", &i);
	fscanf(fp, "%d", &j);
	fscanf(fp, "%d", &k);
	m = i;
	n = j;
	int x, y, z;
	fscanf(fp, "%d %d %d", &x, &y, &z);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (i == x && j == y) {
				fprintf(fp2, "%d ", z);
				fscanf(fp, "%d %d %d", &x, &y, &z);				
			} else
				fprintf(fp2, "0 ");
		}
		fprintf(fp2, "\n");
	}
	fclose(fp);
	fclose(fp2);
}
