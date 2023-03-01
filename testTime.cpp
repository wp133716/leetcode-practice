#include <iostream>
#include <string>
#include <chrono>

void Run(){
    for(int i=0; i<10000000; i++){

    }
}

void timeConsumed1(){
    clock_t startTime = clock();
    Run();
    clock_t endTime = clock();
    double spendSecond = (double)(endTime-startTime)/CLOCKS_PER_SEC;
    std::cout<<"spend time : "<<std::endl
    <<spendSecond<<" s"<<std::endl;}

void timeConsumed2(){
    std::chrono::high_resolution_clock::time_point startTime = std::chrono::high_resolution_clock::now();
    Run();
    std::chrono::high_resolution_clock::time_point endTime = std::chrono::high_resolution_clock::now();

    //秒
    double duration_second = std::chrono::duration<double>(endTime - startTime).count();
    std::cout << duration_second << " s" << std::endl;
}

// void timeConsumedInMilli(){
//     auto startTime = std::chrono::steady_clock::now();
//     Run();
//     auto endTime = std::chrono::steady_clock::now();

//     //毫秒级
//     auto duration_second = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
//     std::cout<< duration_second.count() << " ms" << std::endl;
// }

// void timeConsumedInMicro(){
//     auto startTime = std::chrono::steady_clock::now();
//     Run();
//     auto endTime = std::chrono::steady_clock::now();

//     //微秒级
//     double duration_second = std::chrono::duration<double, std::micro>(endTime - startTime).count();
//     std::cout<< duration_second << " us" << std::endl;
// }

// void timeConsumedInNano(){
//     auto startTime = std::chrono::steady_clock::now();
//     Run();
//     auto endTime = std::chrono::steady_clock::now();

//     //纳秒级
//     auto duration_second = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime);
//     std::cout<< duration_second.count() << " ns" << std::endl;}

int main(int argc, char** argv){
    timeConsumed1();
    timeConsumed2();
    // timeConsumedInMilli();
    // timeConsumedInMicro();
    // timeConsumedInNano();

    return 0;
}
