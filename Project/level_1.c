
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"levels.h"
int easy1();
int hard1();
int medium1();


int level1(int k){
    if(k==1) return easy1();
    else if(k==2) return medium1();
    else if(k==3) return hard1();
}
int easy1(){
    printf("Easy peasy level entereddddd\n");
    char *q= "Which letter comes after C?";
    
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"d");
    if(check==0) return 3;
    wrong++;

    if(wrong>=3) {
        printf("YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("OOPS that was wrong\n");
    }
    q= "What is 2 + 2?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"4");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("Wrong again\n");
    }
     q= "Which vowel comes after A?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("Wrong \n");
    }

   
}


int medium1(){
    char *q = "Alphabet position of letter F?";
    char *a ;
    printf("%s\n",q);
    scanf(" %s",a);
    int check = strcasecmp(a,"6");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("OOPS that was wrong\n");
    }
    q = "What is the reverse of the word "DOG"?";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"god");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    else{
        printf("Wrong again\n");
    }
    q = "What is 10 divided by 2?";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"5");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    else{
        printf("Wrong \n");
    }



}
int hard1(){
    char *q = "If A=1, B=2, ..., what is the sum of C + D?";
    char *a ;
    printf("%s\n",q);
    scanf(" %s",a);
    int check = strcasecmp(a,"7");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("OOPS that was wrong\n");
    }
    q = "What is 3^3 (3 raised to the power 3)?";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"27");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    else{
        printf("Wrong again\n");
    }
    q = "Which letter is 4th from the end of the alphabet?";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"w");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    else{
        printf("Wrong \n");
    }


}
