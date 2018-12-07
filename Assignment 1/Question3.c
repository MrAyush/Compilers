/*q2.txt must be in the root*/
#include<stdio.h>
void main() {
    FILE *fp1, *fp2;
    char s;
    fp1 = fopen("q2.txt", "r+");
    fp2 = fopen("q3.txt", "w+");
    if (fp1 == NULL || fp2 == NULL)
        printf("File(s) does not exist");
    else {
    		while ((s = fgetc(fp1)) != EOF) {
	    		fputc(s, fp2);
	    	}
   	}
   	fprintf(fp2, "\n%s", "(Copied)");
   	printf("\n");
    fclose(fp1);
    fclose(fp2);
}
