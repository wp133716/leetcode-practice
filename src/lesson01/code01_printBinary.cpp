#include <iostream>

void code01_printBinary(int num){
    std::cout<<num<<"的二进制: ";
    for(int i=31; i>=0; i--){
        // std::cout<< (1<<i) <<std::endl;
        // std::cout<< (num & (1<<i) )<<std::endl;
        std::cout<< (((num & (1<<i)) == 0) ? '0': '1');
    }
    std::cout<<std::endl;
}