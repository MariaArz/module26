#include <iostream>
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

#define MONDAY_NAME "MONDAY"
#define TUESDAY_NAME "TUESDAY"
#define WEDNESDAY_NAME "WEDNESDAY"
#define THURSDAY_NAME "THURSDAY"
#define FRIDAY_NAME "FRIDAY"
#define SATURDAY_NAME "SATURDAY"
#define SUNDAY_NAME "SUNDAY"

#define DAY(x) x##_NAME
int main() {
    int number_day;
    std::cout<<"Input day's number"<<std::endl;
    std::cin>>number_day;
    if (number_day==MONDAY) std::cout<<DAY(MONDAY);
    else if (number_day==TUESDAY) std::cout<<DAY(TUESDAY);
    else if (number_day==WEDNESDAY) std::cout<<DAY(WEDNESDAY);
    else if (number_day==THURSDAY) std::cout<<DAY(THURSDAY);
    else if (number_day==FRIDAY) std::cout<<DAY(FRIDAY);
    else if (number_day==SATURDAY) std::cout<<DAY(SATURDAY);
    else if (number_day==SUNDAY) std::cout<<DAY(SUNDAY);
    return 0;
}
