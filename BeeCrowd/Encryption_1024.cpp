#include<bits/stdc++.h>

using namespace std;

int strnlen(char *str){
    int length = 0;

    while(*str != '\0'){
        length++;

        str++;
    }

    return length;
}

int main(){

    int n, len;
    char str[100];
    
    scanf("%d", &n);

    while(n--){
        scanf("%[^\n]s",str);
        len = strnlen(str);

        int l1 = len/2;
        int l2 = len - l1;

        for(int i=len-1; i>l2-1; i--){
            if((str[i] <= 'z' && str[i] >= 'a') || (str[i]<='Z' && str[i]>='A')){
                printf("%c", str[i]+3);
            }
            else
              printf("%c", str[i]);
        }

        for(int i=l2-1; i>=0; i--){
            if((str[i] <= 'z' && str[i] >= 'a') || (str[i]<='Z' && str[i]>='A')){
                printf("%c", str[i]+2);
            }
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }
    
    return 0;
}