#include<stdio.h>
#include<string.h>
int levels(char copyname[10]);
int main() {
	printf("\t\t\tREMEMBER YOUR ONE ANSWER LEAD YIU LOST THE QUIZ\n\n\n");
	printf("\t\t\tlet us know me your name\n");
	char name[10];
	scanf("%s",&name);
	printf("\t\t\tLets us start a quiz\n");

	levels(name);

	return 0;



}
int levels(char copyname[10]) {
		printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 1*\n");
	printf("\t\t_____________________________\n");
	printf("\t\t\tQ)  4+5x5-3+2 = ?\n\n");
	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)44  b)42  c)24  d)34\n");

	printf("\t\t\tDo you want hint (yes or no):\n");
	char hint_1[3];
	scanf("%s",&hint_1);
	
	if(strlen(hint_1)==3){
		printf("\t\t\tApply BODMAS RULE \n");
	}
	
	int answer_1;
	
	
	
	printf("\t\t\t Answer:");
	scanf("%d",&answer_1);
		

	if(answer_1==24){
		printf("\t\t\tIts a Right Answer \n");
		printf("\t\t\t Ready for the next level(yes or no)\n\n");
	}
	
	
	else {
	
	printf("your answer is wrong.\n");
        	printf("The answer was 24.\n");}
        	
	char input[3];
	scanf("%s",&input);
	if(strlen(input)==3){
			printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 2*\n");
	printf("\t\t_____________________________\n");
	printf("\t\t\tQ)  6 =30 \n");
	printf("\t\t\t    3 =15 \n");
    printf("\t\t\t    7 =35 \n");
    printf("\t\t\t    2 =?\n");
    	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)29  b)10  c)47   d)30\n");
	printf("\t\t\tDo you want hint (yes or no):\n");
	char hint_2[3];
	scanf("%s",&hint_2);
	
	if(strlen(hint_2)==3){
		printf("\t\t\t Its a simple multiplication\n");
	}
	
	int answer_2;
		
	printf("\t\t\t Answer:");
	scanf("%d",&answer_2);
		

	if(answer_2==10){
		printf("\t\t\tIts a Right Answer\n");
		printf("\t\t\t Ready for the next level(yes or no)\n\n");}
		else {
	
	printf("your answer is wrong.\n");
        	printf("The answer was 10.\n");} }
		     	
	char input_1[3];
	scanf("%s",&input_1);
	if(strlen(input_1)==3){
			printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 3*\n");
	printf("\t\t_____________________________\n");
	printf("\t\t\tQ) A+B=60\n");
	printf("\t\t\t   A-B=40 \n");
    printf("\t\t\t   A/B=? \n");
   
    	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)5  b)45 c)24   d)67\n");
	printf("\t\t\tDo you want hint (yes or no):\n");
	char hint_3[3];
	scanf("%s",&hint_3);
	
	if(strlen(hint_3)==3){
		printf("\t\t\t find the value of A and B\n");
	}
	
	int answer_3;
		
	printf("\t\t\t Answer:");
	scanf("%d",&answer_3);
	
	if(answer_3==5){
		printf("\t\t\tyour Answer is Right\n");
	printf("\t\t\t Ready for the next level(yes or no)\n\n");
	}
		
		
	
	
	
	else {
	
	printf("your answer is wrong.\n");
        	printf("The answer was 5.\n");} }
        	
        	char input_2[3];
	scanf("%s",&input_2);
	if(strlen(input_2)==3){
			printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 4*\n");
	printf("\t\t_____________________________\n");
    
	printf("\t\t\tQ)\n");
      for(int i=1;i<=4;i++){
      	printf("\t\t\t\t");
     	for(int j=1;j<=i;j++){
     	
     		printf("*");
		 }
	 printf("\n");
	 }
	 
	 printf("\t\t\t         TRAINLGE\n");
	 for(int i=1;i<=3;i++){
	 	
	 
		 printf("\t\t\t\t*****\n");
	 }
   
    	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)rectangle  b)square c)cicle   d)none of these\n");
	printf("\t\t\tDo you want hint (yes or no):\n");
		char hint_4[3];
	scanf("%s",&hint_4);
	
	if(strlen(hint_4)==3){
		printf("\t\t\t find figure type\n");
	}
	
	char answer_4[10];
		
	printf("\t\t\t Answer:");
	scanf("%s",&answer_4);
	
	if(strlen(answer_4)==6){
		printf("\t\t\tyour Answer is Right\n");
	printf("\t\t\t Ready for the next level(yes or no)\n\n");
	}
		
		
	
	
	
	else {
	
	printf("your answer is wrong.\n");
        	printf("The answer was square.\n");}
	}
	char input_3[3];
		scanf("%s",&input_3);
	if(strlen(input_3)==3){
			printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 5*\n");
	printf("\t\t_____________________________\n");
	printf("\t\t\tQ) 9->15->21->?\n");

   
    	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)16  b)45 c)32   d)24\n");
	printf("\t\t\tDo you want hint (yes or no):\n");
	char hint_4[3];
	scanf("%s",&hint_4);
	
	if(strlen(hint_4)==3){
		printf("\t\t\t Table of Particular NUmber\n");
	}
	
	int answer_4;
		
	printf("\t\t\t Answer:");
	scanf("%d",&answer_4);
	
	if(answer_4==24){
		printf("\t\t\tyour Answer is Right\n");
	printf("\t\t\t Ready for the next level(yes or no)\n\n");
	}
		
		
	
	
	
	else {
	
	printf("your answer is wrong.\n");
        	printf("The answer was 24.\n");} }
        	
        	
        	
        	char input_4[3];
		scanf("%s",&input_4);
	if(strlen(input_4)==3){
			printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 6*\n");
	printf("\t\t_____________________________\n");
		printf("\t\t\tQ)  90,60 =30 \n");
	printf("\t\t\t    30,15 =15 \n");
    printf("\t\t\t    7,3 =4 \n");
    printf("\t\t\t    2,0 =?\n");


   
    	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)21  b)1 c)0   d)2\n");
	printf("\t\t\tDo you want hint (yes or no):\n");
	char hint_5[3];
	scanf("%s",&hint_5);
	
	if(strlen(hint_5)==3){
		printf("\t\t\t simple MULTIPLICATION\n");
	}
	
	int answer_5;
		
	printf("\t\t\t Answer:");
	scanf("%d",&answer_5);
	
	if(answer_5==2){
		printf("\t\t\tyour Answer is Right\n");
	printf("\t\t\t Ready for the next level(yes or no)\n\n");
	}
		
		
	
	
	
	else {
	
	printf("your answer is wrong.\n");
        	printf("The answer was 2.\n");} }
        	
        	
        	
        	
        	
        	
        	
		
        	char input_5[3];
		scanf("%s",&input_5);
	if(strlen(input_5)==3){
			printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 7*\n");
	printf("\t\t_____________________________\n");
		printf("\t\t\tQ)  1^(5)+5^(2)/25^(0)-5^(1) \n");



     
    	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)56  b)10 c)21   d)78\n");
	printf("\t\t\tDo you want hint (yes or no):\n");
	char hint_6[3];
	scanf("%s",&hint_6);
	
	if(strlen(hint_6)==3){
		printf("\t\t\t '^'indicates power\n");
	}
	
	int answer_6;
		
	printf("\t\t\t Answer:");
	scanf("%d",&answer_6);
	
	if(answer_6==21){
		printf("\t\t\tyour Answer is Right\n");
	printf("\t\t\t Ready for the next level(yes or no)\n\n");
	}
		
		
	
	
	
	else {
	
	printf("your answer is wrong.\n");
        	printf("The answer was 21.\n");} }
        	
        	
        		char input_6[3];
		scanf("%s",&input_6);
	if(strlen(input_6)==3){
			printf("\t\t_____________________________\n");
	printf("\t\t\t*Level 8*\n");
	printf("\t\t_____________________________\n");
		printf("\t\t\tQ)  (3^(2)-2^(3))^66 \n");



     
    	printf("\t\t\tOptions:\n");
	printf("\t\t\ta)1  b)100 c)261   d)87\n");
	printf("\t\t\tDo you want hint (yes or no):\n");
	char hint_7[3];
	scanf("%s",&hint_7);
	
	if(strlen(hint_7)==3){
		printf("\t\t\t '^'indicates power\n");
	}
	
	int answer_7;
		
	printf("\t\t\t Answer:");
	scanf("%d",&answer_7);
	
	if(answer_7==1){
		printf("\t\t\tyour Answer is Right\n");

	}
		
		
	
	
	
	else {
	

        	printf("The answer was 1.");} }
        	
        	
        	 
        	 
     printf("\t\t\tThank you for playing the Quiz %s",copyname) ;
	 printf("\t\t\tYOUR SCORE-8/8");  	 
        	 
        	 
        	
	

	
        	
        	
        	
        	


	
	

return 0;
}
