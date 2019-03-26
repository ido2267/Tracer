
#include "/platform_independent/tracer.h"

int main()
{
   // printf() displays the string inside 
     TRACE( "Hello worlf program", __LINE__ , 0, 0);
   printf("Hello, World!");
   return 0;
}