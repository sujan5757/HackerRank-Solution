#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, i; 
    char* words[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    
    scanf("%d\n%d", &a, &b);
         for(i = a; i <= b; i++)
            if (i <=9 ){
            printf("%s\n", words[i-1]);
            }else{   
                switch (i % 2) {
                    case 0:
                        printf("even\n");
                        break;
                    default:
                        printf("odd\n");
                        break;
                    }
                }
    
   
    return 0;
}
