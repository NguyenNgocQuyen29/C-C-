#include <iostream>

const int lengh = 5;

int main(){
    using namespace std;
    int Numbers[lengh] = {1, 3, 5, 7, 9};
    //ptr = &Numbers[0] => *ptr = 1
    //ptr + 1 = &Numbers[1] =>*(ptr+1) = 2
    const int *ptr = Numbers;
    for(int index = 0; index<lengh; ++index)
        cout << "Element [" << index << "]:" << *(ptr + index) << endl;
    return 0;
}

int NumberOne[500]; //NumberOne is an array of 500 int object
int *NumberTwo[500]; //NumberTwo is an array off 500 pointers to int object
int *NumberThree = new int[500]; //NumberThree is a pointer to an array of 500 int object

