// Write a program to find the number of occurrences of a word in a sentence?

#include <stdio.h>
int getCount(char *str, char *ptr){
    int count = 0;
    for (int i = 0; str[i]; i++){
        int flag = 1;
        for (int j = 0; ptr[j] && str[i+j]; j++){
            if(str[i+j] != ptr[j]) {
                flag = 0;
                break;
            }
        }
        if(flag) count++;
    }
    return count;
}
int main(){

    char str[] = "She saw sea shells on the sea shore";
    int n = getCount(str, "sea");
    printf("%d", n);
    return 0;
}