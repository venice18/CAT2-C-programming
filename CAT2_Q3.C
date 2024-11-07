#include <stdio.h>

int main(){
    float hoursworked, hourlywage, grosspay, taxes, netpay;
    //PROMPT USER TO ENTER HOURS WORKED IN A WEEK AND HOURLY WAGE
    printf("Enter hours worked in a week: ");
    scanf("%f",&hoursworked);
    printf("Enter the hourly wage: ");
    scanf("%f",&hourlywage);
    //Calculate gross pay
    if(hoursworked > 40){
        float overtimehours = hoursworked - 40;
        float overtimepay = overtimehours * hourlywage * 1.5;
        grosspay = 40 * hourlywage + overtimepay;
    }else{
        grosspay = hoursworked * hourlywage;
    }
    //calculate taxes
    if(grosspay <= 600){
        taxes = 600 * 0.15;
    }else{
        taxes = 600 * 0.15 + (grosspay - 600) * 0.20;
    }
    //calculate net pay
    netpay = grosspay - taxes;
    //printing the results
    printf("\nGrosspay: %.2f\n", grosspay);
    printf("Taxes: %.2f\n", taxes);
    printf("Netpay: %2f\n", netpay);
    
    return 0;
}