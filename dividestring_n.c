#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void divide(char *str,int n){
int len=strlen(str);
int parts=len/4;
int start=0;
if (strlen(str) % n != 0) {
        printf("Invalid Input: String size is not "
               "divisible by n\n");
        return;
    }
 
while(start<=len)
{

char substr[parts+1];
strncpy(substr,str+start,parts);
substr[parts]='\0';
printf("%s\n",substr);
start+=parts;
}

}



int main(){
    char str[]="ikhithh";
    int n=4;
    divide(str,n);
    return 0;

}