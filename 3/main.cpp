#include <iostream>
#define WINTER 1
#define SPRING 2
#define SUMMER 3
#define AUTUMN 4
#define SEASON WINTER
int main() {
#if SEASON == WINTER
    std::cout << "WINTER";
#elif SEASON == SPRING
    std::cout<<"SPRING";
#elif SEASON == SUMMER
    std::cout<<"SUMMER";
#elif SEASON == AUTUMN
    std::cout<<"AUTUMN";
#endif
}