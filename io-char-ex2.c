//write a program to convert uppercase to lowercase and vice versa
//can take cla for name of file or ask user
//create a temp file to store result and then rename temp file back to original
//user issupper, tolower, toupper, or ascii conversion

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = NULL;
    FILE *tmp = NULL;
    fp = fopen("data", "r");
    tmp = fopen("tmp", "w");
    
    int ch = 0;
    
    while((ch = fgetc(fp)) != EOF) {
        if (isupper(ch)) {
            fputc(tolower(ch), tmp);
        } else {    
            fputc(toupper(ch), tmp);
        }
    }
    
    fclose(fp);
    fclose(tmp);
    
    rename("tmp", "data");
}
