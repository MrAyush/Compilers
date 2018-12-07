/*q4.txt must be in the root*/
#include<stdio.h>
void main() {
    FILE *fp1;
    char s[100];
    fp1 = fopen("q4.txt", "w+");
    if (fp1 == NULL)
        printf("File(s) does not exist");
    else {
    	printf("Enter a string: ");
    	fgets(s, 100, stdin);
    	fprintf(fp1, "%s", s);
   	}
   	printf("\n");
    fclose(fp1);
}
