#include <iostream>
#include <vector>




#define COUNT(x)for (int i=0; i<x; i++)

bool passenger_more(int n){
    return n>20;
}

#define PASSENGER(wagon)  (passenger_more(wagon[i]))


int main() {
    std::vector<int>wagon_pass;
    int k, sum=0;
    COUNT(10){
        std::cin>> k;
        wagon_pass.push_back(k);
        sum+=k;
    }
    COUNT(wagon_pass.size())
    if (PASSENGER(wagon_pass)==true){
        std::cout<<wagon_pass[i]<<" overfull"<<std::endl;
    }
    COUNT(wagon_pass.size())
        if (PASSENGER(wagon_pass)==false){
            std::cout<<wagon_pass[i]<<" incomplete"<<std::endl;
        }
    std::cout<<"All passengers "<<sum<<std::endl;
    return 0;
}
