#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void removesupli(char *str){
int index=0;
int len=strlen(str);
int i,j;
for( i=0;i<len;i++){
    for(j=0;j<=i;j++){
        if(str[i]==str[j]){
            break;
        }
    }
    if(j==i){
        str[index++]=str[i];
    }

}
str[index]='\0';
printf("%s",str);
}

int main(){
    char str[]="likhith";
    removesupli(str);
    return 0;

}