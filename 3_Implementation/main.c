 #include "header.h"
int main (void)
{
        int s;
    
        Input:
           printf("Input a number [ +(1), -(2), *(3), /(4), ^(5), !(6)] : ");
           scanf("%d",&s);
         
           if (s > 7 | s < 1){
                  printf("Please input again\n");
                  goto Input;
           }
           sel_func (s);
    
           goto Input;
}
