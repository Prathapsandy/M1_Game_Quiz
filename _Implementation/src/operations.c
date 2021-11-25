#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f; 
 system("cls");
 f=fopen("score.txt","r");
 scanf(f,"%s%f",&name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }



void help()
 {
 system("cls");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided. Your score will be calculated at the");
 printf("\n\n\tend. Remember that the more quicker you give answer the more");
 printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 printf("\n\n\tat the end and displayed. If you secure highest score, your score");
 printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 scanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
