/*
 *
 *
 * Name -Nirnay Khajuria
 *
 */


#include<stdio.h>

void sol1(){

    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    for (int i = 1; i <=10; i++){
        
        printf("%d\t",(num*i));
    }


   /*
    *	DRY RUN
    *
    * 	i=1 (initialization only once)
    *
    *	i=1	i<=10 +		i++	Output
    *----------------------------------------------
    *	1	+		2	Printed	
    *	2	+		3   	Printed
    *	3	+		4   	Printed
    *	4	+		5   	Printed
    *	5	+		6  	Printed
    *	6	+		7   	Printed
    *	7	+		8   	Printed
    *	8	+		9   	Printed
    *	9	+		10  	Printed
    *	10	+		11  	Printed
    *	11	-           	Not Printed
    *
    *	break it will move out of loop........
    *
    *
    *
    *
    */ 

}

void sol2(){

    for (int i = 20; i <=40; i++)
    {
        if(i%2!=0)
            printf("%d\t",i);
    }
    
    
    
   /*
    *	DRY RUN
    *
    * 	i=20 (initialization only once)
    *
    *	i=20	i<=40 		i++	Output
    *----------------------------------------------
    *	20	+		21	Printed	
    *	21	+		22   	Printed
    *	22	+		23  	Printed
    *	23	+		24   	Printed
    *	24	+		25 	Printed
    *	25	+		26  	Printed
    *	26	+		27  	Printed
    *	27	+		28  	Printed
    *	28	+		29  	Printed
    *	29	+		30  	Printed
    *	30	+       31		Printed
    *	31	+		32   	Printed
    *	32	+		33  	Printed
    *	33	+		34   	Printed
    *	34	+		35 	Printed
    *	35	+		36  	Printed
    *	36	+		37  	Printed
    *	37	+		38  	Printed
    *	38	+		39  	Printed
    *	39	+		40  	Printed
    *	40	+       41		Printed
    *	41	-			Not Printed
    *
    *	break it will move out of loop........
    *
    *
    *
    *
    */

}



void sol3(){

    for (int i = 50; i <=70; i++)
    {
        if(i%2==0)
            printf("%d\t",i);
    }
    
   
   /*
    *	DRY RUN
    *
    * 	i=50 (initialization only once)
    *
    *	i=50	i<=70 	i++		Output
    *----------------------------------------------
	*	 50 	+		 51 	Printed
	*	 51 	+		 52 	Printed
	*	 52 	+		 53 	Printed
	*	 53 	+		 54 	Printed
	*	 54 	+		 55 	Printed
	*	 55 	+		 56 	Printed
	*	 56 	+		 57 	Printed
	*	 57 	+		 58 	Printed
	*	 58 	+		 59 	Printed
	*	 59 	+		 60 	Printed
	*	 60 	+		 61 	Printed
	*	 61 	+		 62 	Printed
	*	 62 	+		 63 	Printed
	*	 63 	+		 64 	Printed
	*	 64 	+		 65 	Printed
	*	 65 	+		 66 	Printed
	*	 66 	+		 67 	Printed
	*	 67 	+		 68 	Printed
	*	 68 	+		 69 	Printed
	*	 69 	+		 70 	Printed
	*	 70 	+		 71 	Printed
	*	 71		-		Not Printed
	*
	*
	*	Loop end
	*
	*/



}

void sol4(){

    for(int i=1; i<=50/2; i++){

        if(50%i == 0)
            printf("%d",i);
    }
	/*
	*	DRY RUN
	*
	* 	i= 1  (initialization only once)
	*
	*	i= 1 		i<= 25 		i++	Output
	*----------------------------------------------
	*	 1 		+		 2 	Printed
	*	 2 		+		 3 	Printed
	*	 3 		+		 4 	Printed
	*	 4 		+		 5 	Printed
	*	 5 		+		 6 	Printed
	*	 6 		+		 7 	Printed
	*	 7 		+		 8 	Printed
	*	 8 		+		 9 	Printed
	*	 9 		+		 10 	Printed
	*	 10 		+		 11 	Printed
	*	 11 		+		 12 	Printed
	*	 12 		+		 13 	Printed
	*	 13 		+		 14 	Printed
	*	 14 		+		 15 	Printed
	*	 15 		+		 16 	Printed
	*	 16 		+		 17 	Printed
	*	 17 		+		 18 	Printed
	*	 18 		+		 19 	Printed
	*	 19 		+		 20 	Printed
	*	 20 		+		 21 	Printed
	*	 21 		+		 22 	Printed
	*	 22 		+		 23 	Printed
	*	 23 		+		 24 	Printed
	*	 24 		+		 25 	Printed
	*	 25 		+		 26 	Printed
	*	 26 		-			Not Printed
	*
	*
	*
	*
	* For loop Breaked now control is outside the for loop.
	*
	*
	*
	*
	*
	*/
    

  
}

void sol5(){

    for (int i = 1; i <=128; i++)
    {
        printf("%d --> %c\n",i,i);
    }
    
	/*
	*	DRY RUN
	*
	* 	i= 1  (initialization only once)
	*
	*	i= 1 		i<= 128 	i++	Output
	*------------------------------------------------------------------------------
	*	 1 		+		 2 	Printed
	*	 2 		+		 3 	Printed
	*	 3 		+		 4 	Printed
	*	 4 		+		 5 	Printed
	*	 5 		+		 6 	Printed
	*	 6 		+		 7 	Printed
	*	 7 		+		 8 	Printed
	*	 8 		+		 9 	Printed
	*	 9 		+		 10 	Printed
	*	 10 		+		 11 	Printed
	*	 11 		+		 12 	Printed
	*	 12 		+		 13 	Printed
	*	 13 		+		 14 	Printed
	*	 14 		+		 15 	Printed
	*	 15 		+		 16 	Printed
	*	 16 		+		 17 	Printed
	*	 17 		+		 18 	Printed
	*	 18 		+		 19 	Printed
	*	 19 		+		 20 	Printed
	*	 20 		+		 21 	Printed
	*	 21 		+		 22 	Printed
	*	 22 		+		 23 	Printed
	*	 23 		+		 24 	Printed
	*	 24 		+		 25 	Printed
	*	 25 		+		 26 	Printed
	*	 26 		+		 27 	Printed
	*	 27 		+		 28 	Printed
	*	 28 		+		 29 	Printed
	*	 29 		+		 30 	Printed
	*	 30 		+		 31 	Printed
	*	 31 		+		 32 	Printed
	*	 32 		+		 33 	Printed
	*	 33 		+		 34 	Printed
	*	 34 		+		 35 	Printed
	*	 35 		+		 36 	Printed
	*	 36 		+		 37 	Printed
	*	 37 		+		 38 	Printed
	*	 38 		+		 39 	Printed
	*	 39 		+		 40 	Printed
	*	 40 		+		 41 	Printed
	*	 41 		+		 42 	Printed
	*	 42 		+		 43 	Printed
	*	 43 		+		 44 	Printed
	*	 44 		+		 45 	Printed
	*	 45 		+		 46 	Printed
	*	 46 		+		 47 	Printed
	*	 47 		+		 48 	Printed
	*	 48 		+		 49 	Printed
	*	 49 		+		 50 	Printed
	*	 50 		+		 51 	Printed
	*	 51 		+		 52 	Printed
	*	 52 		+		 53 	Printed
	*	 53 		+		 54 	Printed
	*	 54 		+		 55 	Printed
	*	 55 		+		 56 	Printed
	*	 56 		+		 57 	Printed
	*	 57 		+		 58 	Printed
	*	 58 		+		 59 	Printed
	*	 59 		+		 60 	Printed
	*	 60 		+		 61 	Printed
	*	 61 		+		 62 	Printed
	*	 62 		+		 63 	Printed
	*	 63 		+		 64 	Printed
	*	 64 		+		 65 	Printed
	*	 65 		+		 66 	Printed
	*	 66 		+		 67 	Printed
	*	 67 		+		 68 	Printed
	*	 68 		+		 69 	Printed
	*	 69 		+		 70 	Printed
	*	 70 		+		 71 	Printed
	*	 71 		+		 72 	Printed
	*	 72 		+		 73 	Printed
	*	 73 		+		 74 	Printed
	*	 74 		+		 75 	Printed
	*	 75 		+		 76 	Printed
	*	 76 		+		 77 	Printed
	*	 77 		+		 78 	Printed
	*	 78 		+		 79 	Printed
	*	 79 		+		 80 	Printed
	*	 80 		+		 81 	Printed
	*	 81 		+		 82 	Printed
	*	 82 		+		 83 	Printed
	*	 83 		+		 84 	Printed
	*	 84 		+		 85 	Printed
	*	 85 		+		 86 	Printed
	*	 86 		+		 87 	Printed
	*	 87 		+		 88 	Printed
	*	 88 		+		 89 	Printed
	*	 89 		+		 90 	Printed
	*	 90 		+		 91 	Printed
	*	 91 		+		 92 	Printed
	*	 92 		+		 93 	Printed
	*	 93 		+		 94 	Printed
	*	 94 		+		 95 	Printed
	*	 95 		+		 96 	Printed
	*	 96 		+		 97 	Printed
	*	 97 		+		 98 	Printed
	*	 98 		+		 99 	Printed
	*	 99 		+		 100 	Printed
	*	 100 		+		 101 	Printed
	*	 101 		+		 102 	Printed
	*	 102 		+		 103 	Printed
	*	 103 		+		 104 	Printed
	*	 104 		+		 105 	Printed
	*	 105 		+		 106 	Printed
	*	 106 		+		 107 	Printed
	*	 107 		+		 108 	Printed
	*	 108 		+		 109 	Printed
	*	 109 		+		 110 	Printed
	*	 110 		+		 111 	Printed
	*	 111 		+		 112 	Printed
	*	 112 		+		 113 	Printed
	*	 113 		+		 114 	Printed
	*	 114 		+		 115 	Printed
	*	 115 		+		 116 	Printed
	*	 116 		+		 117 	Printed
	*	 117 		+		 118 	Printed
	*	 118 		+		 119 	Printed
	*	 119 		+		 120 	Printed
	*	 120 		+		 121 	Printed
	*	 121 		+		 122 	Printed
	*	 122 		+		 123 	Printed
	*	 123 		+		 124 	Printed
	*	 124 		+		 125 	Printed
	*	 125 		+		 126 	Printed
	*	 126 		+		 127 	Printed
	*	 127 		+		 128 	Printed
	*	 128 		+		 129 	Printed
	*	 129 		-			Not Printed
	*
	*
	*
	*
	* For loop Breaked now control is outside the for loop.
	*
	*
	*
	*
	*
	*/

    
   
}


void sol6(){

    for (int i = 65; i <=90; i++)
    {
        printf("%c --> %c\n",i,i+32);
    }
	/*
	*	DRY RUN
	*
	* 	i= 65  (initialization only once)
	*
	*	i= 65 		i<= 90 		i++	Output
	*---------------------------------------------------------------
	*	 65 		+		 66 	Printed
	*	 66 		+		 67 	Printed
	*	 67 		+		 68 	Printed
	*	 68 		+		 69 	Printed
	*	 69 		+		 70 	Printed
	*	 70 		+		 71 	Printed
	*	 71 		+		 72 	Printed
	*	 72 		+		 73 	Printed
	*	 73 		+		 74 	Printed
	*	 74 		+		 75 	Printed
	*	 75 		+		 76 	Printed
	*	 76 		+		 77 	Printed
	*	 77 		+		 78 	Printed
	*	 78 		+		 79 	Printed
	*	 79 		+		 80 	Printed
	*	 80 		+		 81 	Printed
	*	 81 		+		 82 	Printed
	*	 82 		+		 83 	Printed
	*	 83 		+		 84 	Printed
	*	 84 		+		 85 	Printed
	*	 85 		+		 86 	Printed
	*	 86 		+		 87 	Printed
	*	 87 		+		 88 	Printed
	*	 88 		+		 89 	Printed
	*	 89 		+		 90 	Printed
	*	 90 		+		 91 	Printed
	*	 91 		-			Not Printed
	*
	*
	*
	*
	* For loop Breaked now control is outside the for loop.
	*
	*
	*
	*
	*
	*/




}

void sol7(){

    int a,lim;
    printf("Enter the number :\n");
    scanf("%d",&a);
    printf("enter the limit : ");
    scanf("%d",&lim);

    int count = lim/a;

    for (int i = 1; i <=count; i++)
    {
        printf("%d\t",i*a);
    }
	/*
	*	DRY RUN
	*
	* 	i= 1  (initialization only once)
	*	Let count = 10
	*	i= 1 		i<= 10 		i++	Output
	*----------------------------------------------
	*	 1 		+		 2 	Printed
	*	 2 		+		 3 	Printed
	*	 3 		+		 4 	Printed
	*	 4 		+		 5 	Printed
	*	 5 		+		 6 	Printed
	*	 6 		+		 7 	Printed
	*	 7 		+		 8 	Printed
	*	 8 		+		 9 	Printed
	*	 9 		+		 10 	Printed
	*	 10 		+		 11 	Printed
	*	 11 		-			Not Printed
	*
	*
	*
	*
	* For loop Breaked now control is outside the for loop.
	*
	*
	*
	*
	*
	*/





}



void sol8(){

    for (int i = 121; i >= 'j'; i--)
    {
        printf("%c\t",i);
    }


	/*
	*	DRY RUN
	*
	* 	i= 121  (initialization only once)
	*
	*	i= 121 		i>= 106 	i--	Output
	*---------------------------------------------------------------------------
	*	 121 		+		 120 	Printed
	*	 120 		+		 119 	Printed
	*	 119 		+		 118 	Printed
	*	 118 		+		 117 	Printed
	*	 117 		+		 116 	Printed
	*	 116 		+		 115 	Printed
	*	 115 		+		 114 	Printed
	*	 114 		+		 113 	Printed
	*	 113 		+		 112 	Printed
	*	 112 		+		 111 	Printed
	*	 111 		+		 110 	Printed
	*	 110 		+		 109 	Printed
	*	 109 		+		 108 	Printed
	*	 108 		+		 107 	Printed
	*	 107 		+		 106 	Printed
	*	 106 		+		 105 	Printed
	*	 105 		-			Not Printed
	*
	*
	*
	*
	* For loop Breaked now control is outside the for loop.
	*
	*
	*
	*
	*
	*/

 
    
}


void sol9(){

    int a,b;
    printf("Enter a and b :\n");
    scanf("%d%d",&a,&b);

    for (int i = b; i >=a; i-=2)
    {
        printf("%d\t",i);
    }
    
}


void sol10(){

    int a;
    printf("enter no:\n");
    scanf("%d",&a);

    for (int i = 1; i <= a/2; i++)
    {
        if(a%i==0)
            printf("%d\t",i);
      }
    
 
    
   

}

void main(){


sol1();
printf("\n");

sol2();
printf("\n");

sol3();
printf("\n");

sol4();
printf("\n");

sol5();
printf("\n");

sol6();
printf("\n");

sol7();
printf("\n");

sol8();
printf("\n");

sol9();
printf("\n");

sol10();
printf("\n");


}
