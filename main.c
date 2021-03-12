#include <stdio.h> 
#include <stdlib.h>
int main()
{
time_t now  ; 
time (&now) ; 
printf("aujoudhui :%s ",ctime(&now) ) ; 

return 0 ;  
}
