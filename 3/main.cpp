#include <iostream>
#define WINTER 1
#define SPRING 2
#define SUMMER 3
#define AUTUMN 4
#define SEASON(x) #x

#if 1
int main() {
    int number_day;
    std::cout<<"Input day's number"<<std::endl;
    std::cin>>number_day;
    if (number_day==WINTER) std::cout<<SEASON(WINTER);
    else if (number_day==SPRING) std::cout<<SEASON(SPRING);
    else if (number_day==SUMMER) std::cout<<SEASON(SUMMER);
    else if (number_day==AUTUMN) std::cout<<SEASON(AUTUMN);
    return 0;
}
#endif
