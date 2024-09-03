#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
struct datastore
{       
        int tic;
        char name[20];
        int age;
        double mob;
        char gen[1];
};
struct datastore fir[10],sec[10],thi[10];
void bus();
void booking();
void cancel();
void viewbus();
void status();
int trno=0;
int tic;
int ch=-1;
int pay=-1;
int a[10]={0,0,0,0,0,0,0,0,0,0};
int b[10]={0,0,0,0,0,0,0,0,0,0};
int c[10]={0,0,0,0,0,0,0,0,0,0};
int mon;
int i=0;
int j=0;
int to;

int main()
{
    do
    {
    int take;
    printf("\n\n\n-------------- WELCOME TO UNIVERSAL BUS RESERVATION PORTAL ---------------\n\n\n");
    printf("Enter Choice 1 to View Bus List\n");
    printf("Enter Choice 2 to Book Tickets\n");
    printf("Enter Choice 3 to Cancel Booking\n");
    printf("Enter Cloice 4 to Check your Ticket Status\n");
    printf("Enter choice 5 to EXIT\n");
    printf("\nEnter your choice:");
    scanf("%d",&take);
    printf("-------------------------------------------------------------------------");
    switch(take)
      {
        case 1: viewbus();
                break;
        case 2: booking();
                break;
        case 3: cancel();
                break;
        case 4: status();
                break;        
        case 5: printf("\nTHANKYOU FOR VISITING\n");
                printf("\nSource Code Devloped using VSCode on July 2022 by Dhruva Kashyap\n");
                printf("----------------------------------------------------------------------------\n");
                exit(0);
        default: printf("\nINVALID INPUT\nPlease Try Again");

      }
    }while(1);
     return (0);  

}  

void bus()
{   
    printf("\n\nBUS LIST\n\n");
    printf("Source : Bangalore\n");
    printf("Destination : Mangalore\n");
    printf("Time Duration : 7 Hrs 30 Min\n");
    printf("Bus Number 1 - SAPTAGIRI EXPRESS\n");
    printf("Bus Number 2 - RAJGOPAL TRAVELS\n");
    printf("Bus Number 3 - WILMAR ROAD LINES\n");

}
void booking()
{ 
  printf("\nUNIVERSAL BUS RESERVATION SYSTEM >> TICKET BOOKING >>\n");
  sleep(1);
  bus();
  printf("Enter the Bus Number:");
  scanf("%d",&trno);
  printf("\n");
  if(trno==1)
  {     
        for(i=0;i<10;i++)
        {
                printf("%d:%s\n",i+1,a[i]==0?"Empty":"Booked");
        }
        printf("Enter the total number of seats to be Booked:");
        scanf("%d",&to);
        if(to>10)
        printf("Maximum Seating is 10\n");
        else
        {
        for(j=0;j<to;j++)
        {
        printf("Enter the Seat Number:");
        scanf("%d",&tic);
        for(i=0;i<10;i++)
        { 
          if(i==tic-1)
          {
         fir[i].tic=tic;
         printf("Enter the Name:");
         scanf("%s",fir[i].name);
         printf("Enter Age:");
         scanf("%d",&fir[i].age);
         printf("Choose the Gender(M:Male,F:Female):");
         scanf("%s",fir[i].gen);
         printf("Enter the 10 digit Phone Number:");
         scanf("%lf",&fir[i].mob);
         printf("Complete the payment of Rs.500\n");
         printf("Redirecting to Your Online Banking\n");
         printf("----------'Request for Payment of Rupee 500'----------\n");
         printf("Enter '1' for  Proceed, '0' for Exit:");
         scanf("%d",&pay);
         if(pay==1)
         {
            printf("Trasaction Successful\n");
            sleep(1);
            printf("Ticket Booked Successfully\n");
            printf("Happy & Safe Journey\n");
            printf("---------------\n");
            sleep(1);
            a[tic-1]=1; 
         }
         else 
         {
           printf("Trasaction Failure\n");

         }
         }
        }
        }
        }
        printf("\n----------------------------------------------------------------------\n");
        
  }
  else if(trno==2)
  {      
        for(i=0;i<10;i++)
        {
                printf("%d:%s\n",i+1,b[i]==0?"Empty":"Booked");
        }
        printf("Enter the total number of seats to be Booked:");
        scanf("%d",&to);
        if(to>10)
        printf("Maximum Seating is 10\n");
        else
        {
        for(j=0;j<to;j++)
        {
        printf("Enter the Seat Number:");
        scanf("%d",&tic);
        for(i=0;i<10;i++)
        {
         if(i==tic-1)
         {
         printf("Enter the Name:");
         scanf("%s",sec[i].name);
         printf("Enter Age:");
         scanf("%d",&sec[i].age);
         printf("Choode the Gender(M:Male,F:Female):");
         scanf("%s",sec[i].gen);
         printf("\nEnter the 10 digit Phone Number:");
         scanf("%lf",&sec[i].mob);
         printf("Complete the payment of Rs.500\n");
         printf("Redirecting to Your Online Banking\n");
         printf("----------'Request for Payment of Rupee 500'----------\n");
         printf("Enter '1' for  Proceed, '0' for Exit:");
         scanf("%d",&pay);
         if(pay==1)
         {
            printf("Trasaction Successful\n");
            sleep(1);
            printf("Ticket Booked Successfully\n");
            printf("Happy & Safe Journey\n");
            printf("---------------\n");
            sleep(1);
            b[tic-1]=1;
            
         }
         else 
         {
           printf("Trasaction Failure\n");

         }
         }
        } 
        } 
        } 
        printf("------------------------------------------------------------------------------");
  }
  else if(trno==3)
  {      
        for(i=0;i<10;i++)
        {
                printf("%d:%s\n",i+1,c[i]==0?"Empty\t":"Booked");
        }
        printf("Enter the total number of seats to be Booked:");
        scanf("%d",&to);
        if(to>10)
        printf("Maximum Seating is 10\n");
        else
        {
        for(j=0;j<to;j++)
        {
        printf("\nEnter the Seat Number:");
        scanf("%d",&tic);
        for(i=0;i<10;i++)
        {
         if(i==tic-1)
         {
        
         printf("Enter the Name:");
         scanf("%s",thi[i].name);
         printf("Enter Age:");
         scanf("%d",&thi[i].age);
         printf("Choose the Gender(M:Male,F:Female):");
         scanf("%s",thi[i].gen);
         printf("Enter the 10 digit Phone Number:");
         scanf("%lf",&thi[i].mob);
         printf("Complete the payment of Rs.500\n");
         printf("Redirecting to Your Online Banking\n");
         printf("----------'Request for Payment of Rupee 500'----------\n");
         printf("Enter '1' for  Proceed, '0' for Exit:");
         scanf("%d",&pay);
         if(pay==1)
         {
            printf("Trasaction Successful\n");
            sleep(1);
            printf("Ticket Booked Successfully\n");
            printf("Happy & Safe Journey\n");
            printf("---------------\n");
            sleep(1);
            c[tic-1]=1;      
         }
         else 
         {
           printf("Trasaction Failure\n");

         }
         }
        }
        }
        }
        printf("----------------------------------------------------------------------------");
  sleep(5);
  }
}
void viewbus()
{
    printf("\nUNIVERSAL BUS RESERVATION SYSTEM >> VIEW BUSES >>\n");
    sleep(1);
    printf("\n\nBUS LIST\n\n");
    printf("Source : Bangalore\n");
    printf("Destination : Mangalore\n");
    printf("Time Duration : 7 Hrs 30 Min\n\n");
    sleep(2);
    printf("Bus Number 1 - SAPTAGIRI EXPRESS\n");
    printf("Seat Available:\n");
    for(i=0;i<10;i++)
    {
        printf("%d:%s\n",i+1,a[i]==0?"Empty":"Booked");
    }
    printf("\n\n");
    sleep(2);
    printf("Bus Number 2 - RAJGOPAL TRAVELS\n");
    printf("Seat Available:\n");
    for(i=0;i<10;i++)
    {
        printf("%d:%s\n",i+1,b[i]==0?"Empty":"Booked");
    }
    printf("\n\n");
    sleep(2);
    printf("Bus Number 3 - WILMAR ROAD LINES\n");
    printf("Seat Available:\n");
    for(i=0;i<10;i++)
    {
        printf("%d:%s\n",i+1,c[i]==0?"Empty":"Booked");
    }
    printf("\n\n");
  sleep(5);
}
void cancel()
{
   printf("\nUNIVERSAL BUS RESERVATION SYSTEM >> TICKET CANCELLATION >>\n");
   sleep(1);
   bus();
   printf("Enter the Bus Number that to be Cancelled:");
   scanf("%d",&trno);
   printf("Do you want to cancel the Ticket?\nEnter '1' for 'Yes' & '0' for 'No'");
   scanf("%d",&ch);
   if(ch==1)
   {
        if(trno==1)
        {
            printf("Enter the seat No. to be Cancelled:");

            scanf("%d",&tic);
            if(a[tic-1]==1)
            {
                a[tic-1]=0; 
                printf("Ticket Cancelled Successfully!\n"); 
                fir[tic-1].tic=999;
            }
            else
            {
                printf("Seat is yet to Book\n");
            }
            printf("\n-----------------------------------------------------------------------");
        }
        else if(trno==2)
        {
            printf("Enter the seat No. to be Cancelled:");
            scanf("%d",&tic);
            if(b[tic-1]==1)
            {
                b[tic-1]=0; 
                printf("Ticket Cancelled Successfully!\n");
                sec[tic-1].tic==999;
            }
            else
            {
                printf("Seat is Yet to Book\n");
            }
            printf("-------------------------------------------------------------------------");
        }
        else if(trno==3)
        {
            printf("Enter the seat No. to be Cancelled:");
            scanf("%d",&tic);
            if(c[tic-1]==1)
            {
                c[tic-1]=0; 
                printf("Ticket Cancelled Successfully!\n");
                thi[tic-1].tic==999;
            }
            else
            {
                printf("Seat is Yet to Book\n");
            }
            printf("-------------------------------------------------------------------------");
        }   
   }
  sleep(5);  
}
void status()
{ 
    printf("\nUNIVERSAL BUS RESERVATION SYSTEM >> CHECK TICKET STATUS >>\n");
     sleep(1);
     bus();
     printf("\nEnter the Bus Number:");
     scanf("%d",&trno);
     if(trno==1)
     {
      printf("\nEnter the Seat Number:");
      scanf("%d",&tic);
      if(fir[tic-1].tic==999)
      {
        printf("Ticket Cancelled");
      }
      else if(a[tic-1]==1)
      {
       printf("\nName of the Passanger: %s\n",fir[tic-1].name);
       printf("Age:%d\n",fir[tic-1].age);
       printf("Gender:%s\n",fir[tic-1].gen);
       printf("Moblie Number:%lf\n",fir[tic-1].mob);
       printf("\nTicket Booking is Conformed");
      }
      else
      {
        printf("\nSeat is Yet to Book\n");
      }
     }
     else if(trno==2)
     {
      printf("\nEnter the Seat Number:");
      scanf("%d",&tic);
      if(sec[tic-1].tic == 999)
      {
        printf("Ticket Cancelled");
      }
      else if(b[tic-1]==1)
      {
       printf("\nName of the Passanger: %s\n",sec[tic-1].name);
       printf("Age:%d\n",sec[tic-1].age);
       printf("Gender:%s\n",sec[tic-1].gen);
       printf("Moblie Number:%lf\n",sec[tic-1].mob);
       printf("\nTicket Booking is Conformed");
      }
      else
      {
        printf("\nSeat is Yet to Book\n");
      }
     }
     else if(trno==3)
     {
      printf("\nEnter the Seat Number:");
      scanf("%d",&tic);
      if(thi[tic-1].tic==999)
      {
        printf("Ticket Cancelled");
      }
      else if(c[tic-1]==1)
      {
       printf("\nName of the Passanger: %s\n",thi[tic-1].name);
       printf("Age:%d\n",thi[tic-1].age);
       printf("Gender:%s\n",thi[tic-1].gen);
       printf("Moblie Number:%lf\n",thi[tic-1].mob);
       printf("\nTicket Booking is Conformed");
      }
      else
      {
        printf("\nSeat is Yet to Book\n");
      }
     }
     printf("\n-----------------------------------------------------------------------");
     sleep(5);
}


