#include <iostream>
#include <string>
#include <math.h>

void code01_printBinary(int num);
namespace selectSort{void testCode02_selectSort();}
namespace bubbleSort{void testCode03_bubbleSort();}
namespace insertSort{void testCode04_insertSort();}
using namespace selectSort;
using namespace bubbleSort;
using namespace insertSort;

int main(int argc, char** argv){
    // code01_printBinary(7);
    // testCode02_selectSort();
    // testCode03_bubbleSort();
    testCode04_insertSort();
    return 0;
}
