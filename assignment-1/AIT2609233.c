#include<stdio.h>
#include<stdlib.h>// libary for rand () function, used for get_question
#include<time.h>// 
#include<stdbool.h>// used in while loop
#include<math.h>   // to coustum round function                      

int wrong =0,correct =0, marks=0; // introducing global variable 
float ans;// introducing global variable 

int get_input(){ //getting input from user to choose level 
    printf("choose level to start\n");
    printf("level 1-Easy \n");
    printf("level 2-moderate\n");
    printf("level 3-diffcult\n");
    printf("Enter 1 or 2 or 3\n");
    int user_input;
    scanf("%d",&user_input);
    
    if (user_input==1 || user_input==2 || user_input==3){
        return user_input;

    }
    else{
        printf("invalid input\n");
        return get_input();
    }
}


void check_ans(float x, float y){ // check answer and claculate the marks 
    if (x==y){
         printf("correct, keep going\n ");
         correct++;
         marks+=4;
    }
    else{
       printf("oops wrong better luck next time\n"); 
       wrong++;
       marks--;

    }

}


void grading(){
    printf("\n");
    printf("#### Result ####\n");// grading the user based on marks 
    if (marks>75){
        printf("Good job 👏 \n");
        printf("Grade=A");

    }
    else if(marks>60){
        printf("Above Average 👍\n");
        printf("Grade=A-");
    }
    else if(marks>50){
        printf("Below Average 👌\n");
        printf("Grade=B");
    }
    else if(marks>40){
        printf("Not Bad 🥲\n");
        printf("Grade=C");
    }
    else{
        printf("Failed 😭\n");
        printf("Better Luck Next Time\n");
        printf("Grade=F\n");
    }
    printf("total marks for this level = %d\n",marks);
    printf ("Total Wrong Answer = %d\n",wrong);
    printf("Total Correct Answer = %d\n",correct);
    printf("\n");


    
}


float coustum_round(float x){// used to round of the value to 2 decimal places 
     return roundf(x * 100.0) / 100.0;
}


void get_question_ans(int x){// generate questions given level and allow the user enter the answer for each question
    
    
    if (x==1){//level 1
     srand(time(NULL));   
     for(int i=1;i<26;i++)
      { 
        int a= rand()%10;
        int b=rand()%10;
        int opperation= rand()%2;
        if (opperation==1)
        {
            printf("Q%d %d + %d =\n",i,a,b);
            printf("Answer=");
            scanf("%f",&ans);
            check_ans((float)ans,(float)a+b);
        }
        else{
            printf("%d - %d =\n",a,b);
            printf("Answer=");
            scanf("%f",&ans);
            check_ans((float)ans,(float)a-b);
        }
     }                                
    }
   
   
    else if(x==2){ // level 2
        srand(time(NULL));
        for(int i=1;i<26;i++)
            { 
                int a= rand()%100 +1;
                int b=rand()%100 +1;
                int opperation= rand()%2;
                if (opperation==1)
                {
                    printf("Q%d %d * %d =\n",i,a,b);
                    printf("Answer=");
                    scanf("%f",&ans);
                    check_ans(ans,(float)a*b);
                }
                else{
                    printf("*Round your value to two decimal places\n");
                    printf("Q%d %d / %d =\n",i,a,b);
                    printf("Answer=");
                    scanf("%f",&ans);
                    check_ans((float)ans,coustum_round((float)a/b));
                }
            }                                
    }
    
    
    else if(x==3){// level 3
        srand(time(NULL));
            
        for(int i=1;i<26;i++)
            { 
                int a= rand()%100+1;
                int b=rand()%100+1;
                int c= rand()%100+1;
                int d=rand()%100+1;
                int opperation= rand()%4;
                if (opperation==0)
                {
                    printf("%d + %d - %d * %d =\n",a,b,c,d);
                    printf("Answer=");
                    scanf("%f",&ans);
                    check_ans(ans,(float)(a+b-c*d));
                }
                else if(opperation==1){
                    printf("*Round your value to two decimal places\n");
                    printf("Q%d %d - %d/%d*%d =\n",i,a,b,c,d);
                    printf("Answer=");
                    scanf("%f",&ans);
                    check_ans(ans,coustum_round(a-(float)b/c*d));

                }
                else if(opperation==2){
                    printf("*Round your value to two decimal places\n");
                    printf("Q%d %d + %d/%d*%d =\n",i,a,b,c,d);
                    printf("Answer=");
                    scanf("%f",&ans);
                    check_ans(ans,coustum_round(a+(float)b/c*d));

                }
                else if(opperation==3){
                    printf("*Round your value to two decimal places\n");
                    printf("Q%d %d / %d + %d - %d =\n",i,a,b,c,d);
                    printf("Answer=");
                    scanf("%f",&ans);
                    check_ans(ans,coustum_round((float)a/b+c-d));

                }

            } 
    }

    }



int main(){
    
    printf("'''Marking scheme +4 for correct and -1 for wrong ans'''\n");
    switch(get_input()){// used switch without break to automatically go to next level
            case 1:
            
            while (true){
            get_question_ans(1);// allow the user to see question and answer it 
            grading();
            if (marks>40){
                printf("Congratulation For Passing\n ");
                marks=0, wrong=0, correct=0;// resetting the marks to zero 
                break;
                
            }
            else{
                printf("Try Again Till You Pass~😉\n");
                printf("\n");
                marks=0, wrong=0, correct=0;
            }

            }
            case 2:

            while (true){
            get_question_ans(2);
            grading();
            if (marks>40){
                printf("Congratulation For Passing\n ");
                marks=0, wrong=0, correct=0;
                break;
                
            }
            else{
                printf("Try Again Till You Pass~😉\n");
                printf("\n");
                marks=0, wrong=0, correct=0;
            }

            }
            case 3:
              while (true){
                get_question_ans(3);
                grading();
                if (marks>40){
                    printf("Congratulation For Passing\n ");
                    marks=0, wrong=0, correct=0;
                    break;
                    
                }
                else{
                    printf("Try Again Till You Pass~😉\n");
                    printf("\n");
                    marks=0, wrong=0, correct=0;
                }

            }

      

    }
      
   return 0;


}
