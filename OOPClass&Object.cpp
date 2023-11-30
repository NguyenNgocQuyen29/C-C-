#include <iostream>

/*class Lop9A{
public:
    int id;
    int weight;
};
int main(){
    Lop9A Quyen;
    Quyen.weight = 65;
    std :: cout << "Quyen nang " << Quyen.weight << "Kg" << std::endl;
    return 0;
}*/

/*should private data
how access information about the class???
=>create public functions known as accessor methods. Use these methods to set and get the private member variables
*/

class Quyen{
public:
    void setWeight(int weight);
    int getWeight();
private:
    int myWeight;
};
void Quyen:: setWeight(int weight){
    myWeight = weight;
}
int Quyen :: getWeight(){
    return myWeight;
}
int main(){
    Quyen quyen;
    quyen.setWeight(65);
    std::cout << "Can nang cua Quyen la: " << quyen.getWeight() << " Kg\n";
    return 0;
}
//inline keywork: keo code vo thuc hien thay vi nhay ra ngoai
//=>lam cho thuc thi nhanh hon
//la ham thuc hien tren 1 dong, tren 1 dong nen dung inline
