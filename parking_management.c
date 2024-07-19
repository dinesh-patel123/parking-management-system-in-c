#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int bus_no,car_no,cycle_no,total_no,amount;
int menu(){
    int ch;
    printf("1.Enter bus:\n");
    printf("2.Enter car:\n");
    printf("3.Enter cycle:\n");
    printf("4.Show status:\n");
    printf("5.Delete data:\n");
    printf("6. Exit:\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    return(ch);
}
void delete(){
    bus_no=0;
    car_no=0;
    cycle_no=0;
    total_no=0;
    amount=0;
}
void show_detail(){
    printf("The number of buses = %d\n",bus_no);
    printf("The number of cars= %d\n",car_no);
    printf("The number of cycles = %d \n",cycle_no);
    printf("Total number of vehicles = %d\n",total_no);
    printf("Total gain amount = %d\n",amount);
}
void bus(){
    bus_no++;
    amount=amount+100;
    total_no++;
    printf("Entry successful\n");
}
void car(){
    car_no++;
    amount=amount+50;
    total_no++;
    printf("Entry successful\n");
}
void cycle(){
    cycle_no++;
    amount=amount+10;
    total_no++;
    printf("Entry successful\n");
}

int main()
{ 
   int condition=1; 
   while(condition){
    
    switch (menu())
    {
    case 1:
            bus();
        break;
    case 2:
            car();
            break;
    case 3:
            cycle();
            break;
    case 4:
            show_detail();
            break;
    case 5:
            delete();
            break;
    case 6:
            condition=0;
            break;

    default:
        printf("Please select valid option");
        break;
    }
    getch();
   }
return 0;
}