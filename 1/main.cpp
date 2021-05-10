#include <iostream>
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7
#define DAY(x) #x
int main() {
    int number_day;
    std::cout<<"Input day's number"<<std::endl;
    std::cin>>number_day;
    if (number_day==MONDAY) std::cout<<DAY(MONDAY);
    else if (number_day==TUESDAY) std::cout<<DAY(TUESDAY);
    else if (number_day==WEDNESDAY) std::cout<<DAY(WENESDAY);
    else if (number_day==THURSDAY) std::cout<<DAY(THURSDAY);
    else if (number_day==FRIDAY) std::cout<<DAY(FRIDAY);
    else if (number_day==SATURDAY) std::cout<<DAY(SATURDAY);
    else if (number_day==SUNDAY) std::cout<<DAY(SUNDAY);
    return 0;
}
