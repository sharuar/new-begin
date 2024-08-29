#include<stdio.h>
#include<string.h>


void print(int led){
    printf("%lu leds\n", led);
}

void solve(int n){
    int led, i;
        char num[100];

    while (n--)
    {
        led = 0;
        scanf("%s", num);

        for(i = 0; num[i] != '\0'; i++){

            if(num[i] == '0')
                led += 6;
            
            else if(num[i] == '1')
                led += 2;

            else if(num[i] == '2')
                led += 5;

            else if(num[i] == '3')
                led += 5;

            else if(num[i] == '4')
                led += 4;
            
            else if(num[i] == '5')
                led += 5;

            else if(num[i] == '6')
                led += 6;
            
            else if(num[i] == '7')
                led += 3;

            else if(num[i] == '8')
                led += 7;

            else
                led += 6;
        }
        print(led);        
    }
}

void input(){
    int n;
    scanf("%d", &n);
    solve(n);
}

int main(){

    input();    
    return 0;
}