#include<stdio.h>
#include<string.h>

int main(){

    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int n, len, i, j, tmp;
    char str[100], rev[100];
    
    scanf("%d", &n);
    getchar();
    while(n--){
        scanf("%[^\n]s",str);
        getchar();
        
        len = strlen(str);

        tmp = len/2;
        

        for(i=0; i<len; i++){
            if((str[i] <= 'z' && str[i] >= 'a') || (str[i]<='Z' && str[i]>='A')){
                str[i] = str[i]+3;
            }
        }

        j = 0;
        for(i=len-1; i>=0; i--){
            rev[j] = str[i];
            j++;
        }
        rev[j] = '\0';
        
        for(i=len/2; i<len; i++){
            rev[i] -= 1;
        }
       
        printf("%s", rev);
        printf("\n");
    }
    
    return 0;
}