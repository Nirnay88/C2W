/*
 *
 *
 * Name - Nirnay Khajuria
 *
 *
 */


#include<stdio.h>

void sol1(){

	int a =  20;

	switch(~a){


		case 20:
			printf("Case 20\n");
			printf("a=%d\n",a);
			break;
		case -20 :
			printf("Case -20\n");
			printf("a=%d\n",a);
			break;
		case -21 :
			printf("Case -21\n");
			printf("a=%d\n",a);
			break;
			/*
			   this case matches bcz ~x (if x is positive) equals -(x+1)

*/
		default:
			printf("Default\n");
			break;
	}

}


void sol2(){

	int x=10,y=20;
	/*
	   switch (x){



	   case x:		//Error bcz expression must have a constant value.
	   printf("Case 10\n");
	   printf("x=%d\n",x);
	   break;

	   case y:		//Error bcz expression must have a constant value.
	   printf("Case 20\n");
	   printf("y=%d\n",y);
	   break;


	   default:
	   printf("Default\n");
	   break;
	   }

*/
}

void sol3(){

	float a = 5.2;

	switch((int)a){

		case 1:
			printf("one\n");
			break;

		case 5:
			printf("five\n");
			break;
			/*
			   Above case is selected bcz when we typecasted float to int only mantissa part is stored and exponent part is lost
			   */ 

		case 2:
			printf("two\n");
			break;

		default:
			printf("Deafult\n");
			break;

	}
}


void sol4(){

	int x=2;

	switch(x<<(x+1)){


		/*
		 *	x<<(x+1)
		 x<<3
		 0000 0010 << 3
		 0000 0010
		 <<	3
		 --------------
		 0001 0000(16)
		 ------------

*/

		// the value in switch is 16 it matches none of the cases and thus deafult case is matched and we've not given break in default so 1 is also printed.

		default :
			printf("Default\n");

		case 1:
			printf("1\n");
			break;

		case 2:
			printf("2\n");
			break;

		case 3:
			printf("3\n");
			break;

		case 4:
			printf("4\n");
			break;

		case 8:
			printf("8\n");
			break;

	}


}

void sol5(){

	int a;

	printf("%d",(sizeof(int)>-1));

	switch(a=(sizeof(int)>-1)){	//Might be because of sixeof returns long and we are using int

		case 1:
			printf("True\n");
			break;

		case 0 :
			printf("False\n");
			break;
	}

}


void sol6(){

	int a=5,b=3;


	/*

	   switch(a){

	   case 1 :
	   printf("One\n");

	   case 5 :
	   printf("Two\n");

	   case b :		// Variable not allowed here
	   printf("Three\n");

	   case 'a':
	   printf("Four\n");

	   default:
	   printf("Default\n");
	   }


*/

}

void sol7(){

	int a,b,c,d,e;

	printf("Enter the marks for 5 subjects: \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	if(a<=30 || b<=30 || c<=30 || d<=40 || e<=30){
		printf("You failed in exam.\n");
		return;
	}

	int marks = a+b+c+d+e;

	switch(marks){	//Will match the range in which the addition matches

		case 155 ... 300:		
			printf("Passed!!!\n");
			break;

		case 301 ... 400 :
			printf("Third class.\n");
			break;


		case 401 ... 450 :
			printf("Second class.\n");
			break;

		case 451 ... 500 :
			printf("First class.\n");
			break;

		default :
			printf("Some Error!!!\n");

	}
}


void sol8(){

	int a;
	printf("enter a number b/w 0-5 \n");
	scanf("%d",&a);

	switch(a){	// Prints the matching case
		case 1:
			printf("one\n");
			break;

		case 2:
			printf("two\n");
			break;

		case 3:
			printf("three\n");
			break;

		case 4:
			printf("four\n");
			break;

		case 5:
			printf("five\n");
			break;
		default:
			printf("Try again\n");
			break;
	}



}


void sol9(){

	int a;
	printf("Enter the number for the month :\n");
	scanf("%d",&a);

	switch(a){		//Number of days in that month is printed

		case 1:
			printf("Month %d has %d no of days.\n",a,31);
			break;

		case 2:
			printf("Month %d has %d no of days.\n",a,28);
			break;

		case 3:
			printf("Month %d has %d no of days.\n",a,31);
			break;

		case 4:
			printf("Month %d has %d no of days.\n",a,30);
			break;

		case 5:
			printf("Month %d has %d no of days.\n",a,31);
			break;

		case 6:
			printf("Month %d has %d no of days.\n",a,30);
			break;


		case 7:
			printf("Month %d has %d no of days.\n",a,31);
			break;

		case 8:
			printf("Month %d has %d no of days.\n",a,31);
			break;

		case 9:
			printf("Month %d has %d no of days.\n",a,30);
			break;


		case 10:
			printf("Month %d has %d no of days.\n",a,31);
			break;

		case 11:
			printf("Month %d has %d no of days.\n",a,30);
			break;

		case 12:
			printf("Month %d has %d no of days.\n",a,31);
			break;


		default:
			printf("Invalid Entry.\n");


	}

}


void sol10(){

	int a,b;

	printf("Enter 2 positive numbers : \n");
	scanf("%d%d",&a,&b);

	if(a<0 || b<0){
		printf("Enter +ve nos.\n");
		return;
	}

	int mul = a*b;
	int rem = mul%2;

	switch(rem){	//Odd / Even

		case 0:
			printf("Even\n");
			break;


		default:
			printf("Odd\n");
	}

}


void sol11(){


	int a;
	printf("enter a number b/w 0-5 \n");
	scanf("%d",&a);

	switch(a){
		case 1:
			printf("one\n");
			break;

		case 2:
			printf("two\n");
			break;

		case 3:
			printf("three\n");
			break;

		case 4:
			printf("four\n");
			break;

		case 5:
			printf("five\n");
			break;

		case 6:
			printf("Six\n");
			break;


		case 7:
			printf("Seven\n");
			break;


		case 8:
			printf("eight\n");
			break;

		case 9:
			printf("Nine\n");
			break;


		default:
			printf("Try again\n");
			break;
	}


}

void sol12(){


	int a;
	printf("enter a number for weekday \n");
	scanf("%d",&a);

	switch(a){		// Prints weekday
		case 1:
			printf("Monday\n");
			break;

		case 2:
			printf("Tuesday\n");
			break;

		case 3:
			printf("Wednesday\n");
			break;

		case 4:
			printf("Thursday\n");
			break;

		case 5:
			printf("Friday\n");
			break;

		case 6:
			printf("Saturday\n");
			break;


		case 7:
			printf("Sunday\n");
			break;
	}

}

void sol13(){

	int a =10;

	switch(a){

		case 1 :
			printf("Hello\n");
			break;

		case 2:
			printf("Hi\n");
			break;

		default:	//No case matches do default one
			printf("Default Case\n");

	}
}



void sol14(){

	int a =4;
	/*
	   switch(a){

	   case 1:
	   printf("Hello\n");
	   break;

	   case 4:
	   printf("Hii\n");
	   break;

	   case 2+2:	//Error : same cases not allowed
	   printf("Case 4\n");
	   break;

	   default:

	   printf("Default\n");

	   }

*/
}

void sol15(){

	float a = 4.5f;
	switch((int)a) {
		case 1:
			printf("Case 1\n");
			break;
		case 2:
			printf("Case 2\n");
			break;
		case 4:	//While typecasting only 4 is preserved and rest value is lost
			printf("Case 4\n");
			break;
		default:
			printf("Default case\n");
			break;

	}

}

void sol16(){
	int a;
	switch(a=10) {

		case 0:
			printf("Case 0\n");
			printf("a= %d\n",a);
			break;
		case 1:
			printf("Case 1\n");
			printf("a= %d\n",a);
			break;
		case 10:	// This case will be matched bcz a has been assigned value 10
			printf("case 10\n");
			printf("a= %d\n",a);
			break;
		default:
			printf("Default\n");
			break;

	}


}

void main(){

	sol1();
	sol2();
	sol3();
	sol4();
	sol5();
	sol6();
	sol7();
	sol8();
	sol9();
	sol10();
	sol11();
	sol12();
	sol13();
	sol14();
	sol15();
	sol16();
}
