------------------------------------------------------------------------------------------------------------------------------------
/* q1. 

* * * * * 
    *
    *
    *
    *    */

// ans1. 
#include<stdio.h>  
int main()    
{    
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        (i==1 || j==3)?printf("* "):printf("  ");
    }
    printf("\n");
}  
}
------------------------------------------------------------------------------------------------------------------------------------
/* q2. 

*       * 
*       *
* * * * *
*       *
*       *    */

// ans2. 
#include<stdio.h>  
int main()    
{    
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        (i==3 || j==1 || j==5)?printf("* "):printf("  ");
    }
    printf("\n");
}  
}
------------------------------------------------------------------------------------------------------------------------------------
/* q3. 

* * * * * 
*
* * * * *
*
*              */

// ans3. 
#include<stdio.h>  
int main()    
{    
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        (i==3 || j==1 || i==1)?printf("* "):printf("  ");
    }
    printf("\n");
}  
}
------------------------------------------------------------------------------------------------------------------------------------
/* q4. 

* * * * * 
*
* * * * *
*
* * * * *   */

// ans4. 
#include<stdio.h>  
int main()    
{    
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        (i==3 || j==1 || i==1 || i==5)?printf("* "):printf("  ");
    }
    printf("\n");
}  
}
------------------------------------------------------------------------------------------------------------------------------------
/* q5. 

* * * * * 
*
* * * * *
*
* * * * *   */

// ans5. 
#include<stdio.h>  
int main()    
{    
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        (i==3 || j==1 || i==1 || i==5)?printf("* "):printf("  ");
    }
    printf("\n");
}  
}
