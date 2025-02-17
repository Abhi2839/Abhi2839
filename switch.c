#include<stdio.h>
int main(){
    int day;
    printf("enter a day(1-7):");
    scanf("%d",&day);
   switch(day){
       case 1 : printf("monday \n");
                break;
        case 2 : printf("tuesday \n");
                break;
        case 3 : printf("wednesday \n");
                break;
        case 4 : printf("thursday \n");
                break;
        case 5 : printf("friday \n");
                break;
        case 6 : printf("saturday \n");
                break;
        case 7 : printf("sunday \n");
                break;
        default: printf("enter a valid day!!");
   }
    return 0 ;
}

//without break it will terminate in case of char case 'a'


#include<stdio.h>
int main(){
    char day;
    printf("enter a day code:");
    scanf("%c",&day);
   switch(day){
       case 'm' : printf("monday \n");
                break;
        case 't' : printf("tuesday \n");
                break;
        case 'w' : printf("wednesday \n");
                break;
        case 'th' : printf("thursday \n");
                break;
        case 'f' : printf("friday \n");
                break;
        case 'sat' : printf("saturday \n");
                break;
        case 'sun' : printf("sunday \n");
                break;
        default: printf("enter a valid day!!");
   }
   printf("Have a good day!");
    return 0 ;
}