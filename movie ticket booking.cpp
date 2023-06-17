#include<stdio.h> 
#include<stdlib.h>
void select();
void timeslot();
void detail();
void bill();
void pay();
int main()
 {
printf("\n\n\n\tMOVIE TICKET BOOKING\n\nMovie which are on our theater:\n\ t ticket for frontseat: 100rs and ticket for backseat :120rs");
printf("\n");
printf("\nselect one which u want to watch\n"); 
select();
timeslot();
detail();
bill();
pay();
return 0;
}
void select() 
{
int choice;
printf("\nPress <1> SHERSHAH");
printf("\nPress <2> BHUJ");
printf("\nPress <3> LUCA");
printf("\nPress <4> FAST AND FURIOUS 9 ");
printf("\nPress <5> SING 2");
printf("\nEnter your Choice ::");
 scanf("%d",&choice);
}
void timeslot() 
{
int choice;
printf("\n\tTIMESLOTS\n ");
printf("\nPress <1> 9 am ");
printf("\nPress <2> 12 pm");
printf("\nPress <3> 3 pm ");
printf("\nPress <4> 6 pm");
printf("\nPress <5> 9 pm");
printf("\nEnter your Choice ::"); scanf("%d",&choice);
}
void detail() 
{
char name[50];
printf("\n\n\t ENTER YOUR NAME: "); scanf(" %s", &name);
int mobile;
printf("\n mobile number :");
scanf("%d",&mobile);
}
void bill() 
{
int back_seat,front_seat,total;
printf("\n\t\t no of frontseat tickets :"); scanf("%d", &front_seat);
printf("\n\t\t no of back seat tickets :"); scanf("%d", &back_seat);
total=100*front_seat+120*back_seat;
printf("\n \t\t\tyour bill is %d rs ", total);
 }
void pay()
 {
int choice;
printf("\n\tPAYMENT METHODS\n ");
printf("\nPress <1> SBI CARD ");
printf("\nPress <2> GOOGLE PAY");
printf("\nPress <3> PHONE PAY ");
printf("\nPress <4> OTHER CARD ");
printf("\nPress <5> CASH ");
printf("\nEnter your Choice ::"); 
scanf("%d",&choice);
printf("\n\n\t....THANK YOU FOR BOOKING TICKETS.... \n\n");
 }
