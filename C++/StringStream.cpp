#include<vector>
#include<iostream>

int main(){

    char delim;
    int  element;
    std::vector<int> intVec;
    
    while(std::cin >> element)
    {
        intVec.push_back(element);
        std::cin >> delim;
    }
    
    for(auto num : intVec)
    {
        std::cout<< num << std::endl;
    }
}