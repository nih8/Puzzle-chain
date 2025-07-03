
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


int medium1(){
    char *q = "As you sow, so shall you ___";
    char *a ;
    printf("%s\n",q);
    scanf(" %s",a);
    int check = strcasecmp(a,"reap");
    if(check==0) return 3;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    q = "if B-> E and E-> H, then J->??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"M");
    if(check==0) return 2;
    wrong++;
    if(wrong>=5){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    q = "12 X 7 = ??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"84");
    if(check==0) return 1;
    wrong++;
    if(wrong>=5){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }


}
int hard1(){
    char *q = "Beauty lies in the eyes of the ___";
    char *a ;
    printf("%s\n",q);
    scanf(" %s",a);
    int check = strcasecmp(a,"beholder");
    if(check==0) return 3;
    wrong++;
    if(wrong>=5) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    q = "if A->1, B->3, C->5 then F->??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"11");
    if(check==0) return 2;
    wrong++;
    if(wrong>=5){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    q = "25 X 7= ??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"175");
    if(check==0) return 1;
    wrong++;
    if(wrong>=5){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }

}
