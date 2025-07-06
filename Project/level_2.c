
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"levels.h"
int easy2();
int medium2();
int hard2();
int level2(int k){
    if(k==1) return easy2();
    else if(k==2) return medium2();
    else if(k==3) return hard2();   
}

int easy2(){
     printf("Easy peasy level entereddddd\n");
    char *q= "What is the next number in: 2, 4, 6, __?";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"8");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("OOPS that was wrong\n");
    }
    q= "Shift 'B' forward by 1 letter.";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"c");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("Wrong again\n");
    }
     q= "If CAT = 3 + 1 + 20, what is the sum?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"24");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("Wrong \n");
    }

   
}
int medium2(){
    char *q= "Decode Caesar cipher (+1): Dppe";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"Eqqf");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("OOPS that was wrong\n");
    }
    q= "What comes next: J, K, L, __?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"m");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("Wrong again\n");
    }
     q= "What is binary 00000101 in decimal?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("Wrong \n");
    }

   
}
int hard2(){
    char *q= "What’s the 10th prime number?";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"29");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("OOPS that was wrong\n");
    }
    q= "What letter is at position 20 in the alphabet?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"t");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("Wrong again\n");
    }
     q= "If Z=26 and A=1, what is M?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"13");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("Wrong \n");
    }

   
}