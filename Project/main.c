
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "levels.h"
int wrong =0;
/*int easy1();
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
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
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
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    q = "if B-> E and E-> H, then J->??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"M");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    q = "12 X 7 = ??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"84");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3){
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
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
    q = "if A->1, B->3, C->5 then F->??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"11");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }
    q = "25 X 7= ??";
    printf("%s\n",q);
    scanf(" %s",a);
    check = strcasecmp(a,"175");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3){
       printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4; 
    }

}
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
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
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
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
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
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int easy3();
int medium3();
int hard3();
int level3(int k){
    if(k==1) return easy3();
    else if(k==2) return medium3();
    else if(k==3) return hard3();   
}
int easy3(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int medium3(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int hard3(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int easy4();
int medium4();
int hard4();
int level4(int k){
    if(k==1) return easy3();
    else if(k==2) return medium3();
    else if(k==3) return hard3();   
}
int easy4(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int medium4(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
}
int hard4(){
    char *q= "A ___ a day, keeps the doc away";
    char a[100];
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    int check = strcasecmp(a,"apple");
    if(check==0) return 3;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
    q= "if A->1, B->2 then E-> ??";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"5");
    if(check==0) return 2;
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    }
     q= "4 X 9 =?";
    
    printf("%s\n",q);
    scanf(" %[^\n]",a);
    check = strcasecmp(a,"36");
    if(check==0) return 1;
    
    wrong++;
    if(wrong>=3) {
        printf("%s", "YOU LOST. BETTER LUCK NEXT TIME\n");return 4;
    } 
   
} */
char * l(int k){
    if(k==1) return "EASY";
    else if(k==2) return "MEDIUM";
    else if(k==3) return "HARD";
}
void certificate(char *name,char * path){
    printf("enterterd\n");
    printf("%s\n","Enter a file-name for certificate:");
    char filename[1000];
    scanf(" %s",filename);
    strcat(filename,".html");
    FILE *ptr;
    ptr = fopen(filename,"w");
    fprintf(ptr,"<html><head><link rel='stylesheet' href='style.css'></head><body><div id = 'heading'>CERTIFICATE</div><div id='heading2'> OF COMPLETION</div><br><div id='l1'>THIS CERTIFICATE IS PROUDLY PRESENTED TO</div><br><div id='l2'><U>");
    fprintf(ptr,name);
    fprintf(ptr,"</U></div><br><div id='l3'>FOR COMPLETING THE</div><br><div id='l4'><a href='https://www.linkedin.com/in/niharika-more-315112328/' target='_blank'>PUZZLE-CHAIN CHALLENGE</a></div><br><div id='l5'>USING THE PATH</div><br><div id='l6'> ");
    fprintf(ptr,path);
    fprintf(ptr,"</div></body></html>");
        
    fclose(ptr);
    printf("file closed\n");
    char command[100];

    #ifdef _WIN32
        sprintf(command, "start %s", filename);
    
    #endif

    system(command); 
}

int main(){
    printf("WELCOME, PLEASE ENTER YOUR NAME:\n");
    char name[1000];
    scanf("%[^\n]",name);
    printf("%s\n",name);
    printf("%s","Select difficulty level (enter the option number only):\n 1.Easy\n 2.Medium\n 3.Hard\n");
    int level;
    scanf("%d",&level);
    printf("%d\n",level);
    while(level != 1 && level !=2 && level !=3){
        printf("%s\n","Invalid input\n Enter Again:\n");
        scanf("%d",&level);
    }
    int a,b,c;
    int next = level1(level);

    if(next==4) return 0;
    a = next;
    
    next = level2(next);
    if(next==4) return 0;
    b = next;
    
    next = level3(next);
    if(next==4) return 0;
    c = next;
    
    next = level4(next);
    if(next==4) return 0;

    printf("%s\n", "CONGRATULATIONS!!!\n YOU WON!!\n");
    
    printf("%s-> %s-> %s-> %s",l(level),l(a),l(b),l(c)); 
    printf("%s\n","k");
    char path[1000];
    strcpy(path,l(level));
    strcat(path," -> ");
    strcat(path,l(a));
    strcat(path," -> ");
    strcat(path,l(b));
    strcat(path," -> ");
    strcat(path,l(c));
    certificate(name,path);

    /*printf("%s\n","Enter a file-name for certificate:");
    char *filename;
    scanf(" %s",filename);
    strcat(filename,".html");
    FILE *ptr;
    ptr = fopen(filename,"w");
    fputs("<html><body>hello<br>Your path was",ptr);
    char *yo = "kn bas";
    fputs(yo,ptr);

    fputs("</body></html>",ptr);
    fclose(ptr);
    char command[100];

    #ifdef _WIN32
        sprintf(command, "start %s", filename);
    
    #endif

    system(command); */
    
    
    





}
