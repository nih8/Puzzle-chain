
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
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int medium2(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int hard2(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}