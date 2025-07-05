
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "levels.h"
int wrong =0; //global variable for counting the number of wrong attempts

char * l(int k){                       //function for returning the level
    if(k==1) return "EASY";
    else if(k==2) return "MEDIUM";
    else if(k==3) return "HARD";
}
void certificate(char *name,char * path){  //function for generating a HTML certificate with the name of player and path
    
    printf("Enter a file-name for certificate:\n");
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
    printf("Certificate generated! :)\n");
    char command[100];

    #ifdef _WIN32
        sprintf(command, "start %s", filename);
    
    #endif

    system(command); 
}

int main(){
    printf("WELCOME :D, PLEASE ENTER YOUR NAME:\n"); // \U tag for emoji
    char name[1000];
    scanf("%[^\n]",name);
    printf("You will have three lives for the first 2 levels and 3 lives for the last two\n");
    printf("%s","Select difficulty level (enter the option number only):\n 1.Easy\n 2.Medium\n 3.Hard\n");
    int level;
    scanf("%d",&level);
    printf("%d\n",level);
    while(level != 1 && level !=2 && level !=3){
        printf("%s\n","Invalid input\n Enter Again:\n");
        scanf("%d",&level);
    }
    printf("Entering Level 1.. ALL THE BEST :)\n");
    int a,b,c;
    int next = level1(level);

    if(next==4) return 0;
    
    printf("Entering Level 2.. LESGOO YOU CAN DO IT!!\n");
    a = next;
    
    next = level2(next);
    if(next==4) return 0;
    wrong =0;
    printf("Entering Level 3.. You are on fire\n");
    b = next;
    
    next = level3(next);
    if(next==4) return 0;
    printf("Entering Level 4..\n THE FINAL LEVEL\n");
    c = next;
    
    next = level4(next);
    if(next==4) return 0;

    printf("%s\n", "CONGRATULATIONS!!! YOU WON!!\n");
    printf("Your path was:\n");
    printf("%s-> %s-> %s-> %s",l(level),l(a),l(b),l(c)); 
    
    char path[1000];
    strcpy(path,l(level));   //the path used by the player
    strcat(path," -> ");
    strcat(path,l(a));
    strcat(path," -> ");
    strcat(path,l(b));
    strcat(path," -> ");
    strcat(path,l(c));
    printf("Let's Generate a Certificate for you!\n");
    certificate(name,path);

}
