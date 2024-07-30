#include<stdio.h>
#include<time.h>

int main(){
 time_t s,val=1;
 struct tm* current_time;

 //time in second
 s=time(NULL);
 //to get current time
 current_time=localtime(&s);

 //print time in minues
 //hours and seconf
 printf("%02d : %02d :%02d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
 return 0;
}
