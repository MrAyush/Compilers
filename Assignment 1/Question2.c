/*q2.txt must be in the root*/
#include<stdio.h>
void main() {
    FILE *fp;
    char s;
    int tab = 0, space = 0, nl = 0, c = 0;
    fp = fopen("q2.txt", "r+");
    if (fp == NULL)
        printf("File does not exist");
    else {
    		while ((s = fgetc(fp)) != EOF) {
	    		switch(s) {
	    			case ' ':
	    				space++;
	    				break;
	    			case '\n':
	    				nl++;
	    				break;
	    			case '	':
	    				tab++;
	    			default:
	    				c++;
	    				break;
	    		};
	    	}
	    	printf("Chars: %d\nTabs: %d\nSpaces: %d\nNewLine: %d", c, tab, space, nl);
   	}
   	printf("\n");
    fclose(fp);
}
