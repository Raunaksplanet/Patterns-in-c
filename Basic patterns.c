------------------------------------------------------------------------------------------------------------------------------------
/* q1. 
* * * * *
* * * * *
* * * * *
* * * * *
* * * * * */

// ans1. 
#include<stdio.h>  
int main()    
{    
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("* ");
    }
    printf("\n");
}  
}
------------------------------------------------------------------------------------------------------------------------------------
/* q2. 
*
* *
* * *
* * * *
* * * * * */

//ans2.
#include<stdio.h>  
int main()    
{    
for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}  
}
------------------------------------------------------------------------------------------------------------------------------------
/* q3. 
1 
2 3
4 5 6
7 8 9 0
1 2 3 4 5 */    

//ans3. 
#include <stdio.h>
int main()
{
    int f=1;
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            printf("%d ", f++);
            f=(f==10)?0:f;
        }
        printf("\n");
    }
}     
------------------------------------------------------------------------------------------------------------------------------------
/* q4. 
1 
1 1
1 1 1
1 1 1 1
1 1 1 1 1 */
//ans4.
#include <stdio.h>
int main()
{
    int f=1;
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            printf("%d ", f);
            f=(f==10)?0:f;
        }
        printf("\n");
    }
}
------------------------------------------------------------------------------------------------------------------------------------
/* q5. 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */

//ans5.
#include <stdio.h>
int main()
{
    for (int i=1;i<=5;++i){
        for (int j=1;j<=i;++j){
            printf("%d ",j);
            
        }
        printf("\n");
    }
}
------------------------------------------------------------------------------------------------------------------------------------
/* q6. 
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5 */    
    
//ans6.
#include <stdio.h>
int main()
{
    for (int i=1;i<=5;++i){
        for (int j=1;j<=i;++j){
            printf("%d ",i);
            
        }
        printf("\n");
    }
}    
------------------------------------------------------------------------------------------------------------------------------------
/* q7. 
 *       *
 *     *
 *   *
 * *
 *           */  
    
//ans7.
#include <stdio.h>
int main()
{
    int i,j,x=5;
    for(i=1;i<=5;i++,x--){
        for(j=1;j<=5;j++){
            (j==1 || j==x)?printf(" *"):printf("  ");
        }
        printf("\n");
    }
}
------------------------------------------------------------------------------------------------------------------------------------
  /* q7. 
 *       *
 *     *
 *   *
 * *
 *           */   
