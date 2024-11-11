#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void max(char str[]){
    int count[256]={0};

    int len=strlen(str);
    for(int i=0;i<len;i++){
        count[(int)str[i]]++;
    }
    int maxlen=0;
    char maxchar;
    for(int i=0;i<len;i++){
        if(count[str[i]]>maxlen){
         maxlen=count[str[i]];
         maxchar=str[i];

        }
    }
    printf("%d%c",maxlen,maxchar);
}





int main(){
    char str[] = "sample string";
    max(str);
    return 0;
}