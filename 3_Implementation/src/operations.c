#include "header.h"

void sel_func (int s)
{
        void (*fptr)(void);
        switch (s){
        case 1:
                fptr = add;
                break;
        case 2:
                fptr = sub;
                break;
        case 3:
                fptr = mul;
                break;
        case 4:
                fptr = div;
                break;
        case 5:
                fptr = sqr;
                break;
       /*case 6:
                fptr = prime_factorization;
                break;*/
        case 6:
                fptr = factorial;
                break;        
        }
    
        fptr();
}

void add ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a + b);
}

void sub ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}

void mul ()
{
        int a, b;
      
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a * b);
}

void div ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a / b);
}

void sqr (){
        int exp, base, i;
        int result = 1;
    
        printf("Input base : ");
        scanf("%d",&base);
        printf("Input exp : ");
        scanf("%d",&exp);
    
        for (i = 0; i < exp; ++i)
                result *= base;
            
        printf("%d^%d = %d\n",
                    base,exp,result);
}
void factorial ()
{
       int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    } 
}




