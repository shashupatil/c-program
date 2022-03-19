#include<stdio.h>
#define METER_CHARGE 100//syntax:#define <constant_name_in_caps> <value>
int main()
{
    float units,total;
    char name[20];
    //accept customers name
    printf("Enter the name:");
    scanf("%s",name);
    //accept No. of inputs consumed
    printf("Enter the units:");
    scanf("%f",&units);
    if (units<0)
    {
        printf("Invalid Input\n");
        printf("Retry with valid input....\n");
        return 1;
    }
if(units <= 200)  //charge 80 paise per unit for first 200 units
{
total = (units*0.8)+METER_CHARGE;
}
else if(units<=300) //charge 90 paise per unit for next 100 units
{
total = (200*0.8)+((units-200)*0.9)+METER_CHARGE;  
}  
else if(units>300)
{
total = (200*0.8)+(100*0.9)+((units-300)*1.0)+METER_CHARGE;  
}
if(total>400)
{
 total = total+(total*0.15);//Add additional surcharge of 15 percent of total amount 
}
//Display the electricity bill
printf("\n\nELECTRICITY BILL\n");
printf("--------------\n");
printf("\nName:%s\n",name);
printf("No. of units:%2f\n",units);
printf("Total Bill Amount:Rs.%.2f\n",total);
printf("--------------\n");
return 0;
}


