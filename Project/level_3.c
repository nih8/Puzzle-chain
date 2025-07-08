#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"levels.h"
int easy3();
int medium3();
int hard3();
int level3(int k){
    if(k==1) return easy3();
    else if(k==2) return medium3();
    else if(k==3) return hard3();   
}
int easy3(){
     printf("Easy peasy level entereddddd\n");
    char *q= "How many letters are there in the word 'apple'?";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"5");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("OOPS that was wrong\n");
    }
    q= "What comes next: 5, 10, 15, __?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"20");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("Wrong again\n");
    }
     q= "What is the opposite of LEFT (on a compass)?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"right");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("Wrong \n");
    }

   
}
int medium3(){
    char *q= "Shift "D" back by 2 letters.";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"b");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("OOPS that was wrong\n");
    }
    q= "What comes next: 1, 4, 9, 16, __?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"25");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("Wrong again\n");
    }
     q= "How many vowels in the word 'education'?";
    
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
int hard3(){
    char *q= "Hex 0x0F equals what in decimal?";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"15");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("OOPS that was wrong\n");
    }
    q= "What is the result of 6 × 7?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"42");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    else{
        printf("Wrong again\n");
    }
     q= "Which letter is exactly between H and L?";
     
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"J");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    else{
        printf("Wrong \n");
    }

   
}