#include <stdio.h>

int main(){
    int row,col,i,j,space;
    row=7,col=7;
    for(i=1;i<=row;i++){

        //! A
        for(j=1;j<=col;j++){
            if(i==1 || j==1 || j==col|| i==row/2)
            printf("* ");
            else
            printf("  ");
        }for(j=1;j<=col;j++){
            printf(" ");
        }

       //!B
         for(j=1;j<=col;j++){
            if(i==1 || j==1 || i==row||i==4 || j==col || (j==col && i<=row/2)  || (i==col && j==row))
            printf("* ");
            else
            printf("  ");
        }for(j=1;j<=col;j++){
            printf(" ");
        }
       //!D


          for(j=1;j<=col;j++){
          	if(i==1 || j==1  || i==row|| j==col ||(j==col && i<=row/2)  || (i==col && j==row))
          	 printf("* ");
            else
            printf("  ");
		  } for(j=1;j<=col;j++){
            printf(" ");
        }
	   //!U

	   for(j=1;j<=col;j++){
          	if(  j==1  || i==row||j==col ||(j==col && i<=row/2)  || (i==col && j==row))
          	 printf("* ");
            else
            printf("  ");
		  }for(j=1;j<=col;j++){
            printf(" ");
        }

	   //!L
	    for(j=1;j<=col;j++){
          	if(  j==1  || i==row   || (i==col && j==row))
          	 printf("* ");
            else
            printf("  ");
		  }for(j=1;j<=col;j++){
            printf(" ");
        }
        
        
        
     
		  
	//!K
	 for(j=1;j<=col;j++){
          	if(  j==1 ||(i==4 && j==2) ||(i==5 && j==3) ||(i==6 && j==4)||(i==7 && j==5)||(i==3 && j==3)||(i==2 && j==4)||(i==1 && j==5)|| (i==col && j==row))
          	 printf("* ");
            else
            printf("  ");
		  }




        printf("\n");

    }



        return 0;
    }
