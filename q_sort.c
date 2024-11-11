#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int stringcompare(const void *a,const void *b){
 
 const char **str1=(const char**)a;
 const char **str2=(const char**)b;
 return strcmp(*str1,*str2);

}
int main(){
    const char* arr[]={"likhith","kumar"};
    int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(const char *),stringcompare);

    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
    return 0;
}