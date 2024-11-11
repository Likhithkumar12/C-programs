#include<stdio.h>
#include<stdlib.h>

void ispalindrome(char *string){
  
int low=0;
int high;
high=strlen(string)-1;
while(low<=high){
    if (string[low]==string[high]){
        low++;
        high--;
    }
    else{
        printf("not palindrome");
        exit(0);
    }
}
printf("palindrrome");


}



int main(){
    ispalindrome("madam");
    return 0;
}