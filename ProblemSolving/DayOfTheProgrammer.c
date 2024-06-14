#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum Months{
  Jan = 1,
  Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec 
};

int getFeb(int year){
    if (year<1918){
        if(year%4==0){
            return 29;
        }else{
            return 28;
        }
    }else if(year==1918){
        return 15;
    }else{
        if(year%400==0||((year%4==0)&&(year%100!=0))){
            return 29;
        }else{
            return 28;
        }
    }
}

void getMonth(int year){
    int month = 0;
    int days = 0;
    int change;
    while(days<255){
        if(month%2==0){
            if(month==Feb){
                days+=getFeb(year);
            }else{
                days+= 31;   
                change = 31;           
            }
        }else{
            days+=30;
            change = 30;
        }
        month++;
    }
    int day = 255 - (days - change+1);
    printf("%01d.0%d.%d",day, month, year);

}

int main(){
    int year;
    scanf("%d", &year);
    if(year<1700||year>2700){
        return 0;
    }
    getMonth(year); 
}
