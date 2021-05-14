#include <iostream>



#define COUNT(x) for (int i=0; i<x; i++)

#define PASSENGER(wagon)  wagon(i,wagon_pass[i])

void passenger_more(int i, int n){

    if (n>20){
        std::cout<<i<<" wagon overfull ("<<n<<") passengers"<<std::endl;
    }
}

void passenger_less(int i, int n){

    if (n<20){
        std::cout<<i<<" suboptimal("<<n<<") passengers"<<std::endl;
    }
}


int sum=0;

void sumAll(int i, int n){
    sum+=n;
}

int main() {
    int wagon_pass[10];
    COUNT(10){
        std::cin>> wagon_pass[i];
    }
    COUNT(10){
        PASSENGER(passenger_more);
        PASSENGER(sumAll);
    }
    COUNT(10){
        PASSENGER(passenger_less);
    }

    std::cout<<"All passengers "<<sum<<std::endl;
    return 0;
}
