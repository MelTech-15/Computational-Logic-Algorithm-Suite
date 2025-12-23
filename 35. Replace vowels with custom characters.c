/*

Receive the 3 words from user separely, In first word, vowels should be replaced with &, and in the second word, we should replace the consonants with $. In third word, we should change small letters to capital letters. Finally we should append all the words.

Constraints
Receive 3 strings separately.

Sample Input 0
ramu raja venkat

Sample Output 0
r&m&$a$aVENKAT

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void spchrep(char* s1, char* s2, char* s3) {
    for(int i=0; i<strlen(s1); i++) {
        char ch = toupper(s1[i]);
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("&");
        else
            printf("%c",s1[i]);
    }

    for(int i=0; i<strlen(s2); i++) {
        char ch = toupper(s2[i]);
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("%c",s2[i]);
        else
            printf("$");
    }

    for(int i=0; i<strlen(s3); i++) {
        char ch = toupper(s3[i]);
        printf("%c",ch);
    }
}

int main() {

    char s1[50], s2[50], s3[50];
    scanf("%s %s %s",s1,s2,s3);
    spchrep(s1,s2,s3);
    return 0;
}
