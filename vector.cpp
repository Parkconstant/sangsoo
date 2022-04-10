#include <iostream>
using namespace std;

class Vector {
    int top;
    int* array;
public:
    Vector(int n);

    void push_back(int value);
    void pop_back();
    void size();

    ~Vector() // 소멸자
    {
        delete[] array;
    }
};

Vector::Vector(int n)
{
    this->top = 0;
    this->array = new int[n];
    for (int i = 0; i < n; i++)
        array[i] = 0; // 배열 초기화
}

void Vector::push_back(int value)
{
    int n = _msize(array); //동적 배열 크기 구하기. sizeof(array)/sizeof(array[0])x 동적할당해서 정적으로는 크기계산 안됨

    if (this->top == n)
    {
        cout << "에러" << endl;
        exit(1);
    }
    else
    {
        array[this->top++] = value;

    }

}

void Vector::pop_back()
{

    if (this->top == 0)
    {
        cout << "에러" << endl;
        exit(1);
    }
    else
    {
        cout << array[this->top-1] << endl;
        this->top--;
    }

}

void Vector::size() {
    cout << "현재까지 저장된 array의 개수: " << top << endl;
}

int main()
{
    Vector array1 = Vector(5);

    array1.push_back(1);// array[0] = 1
    array1.push_back(2);// array[1] = 2
    array1.push_back(3);// array[2] = 3
    array1.push_back(4);// array[3] = 4
    array1.push_back(5);// array[4] = 5
    array1.pop_back(); // array[4]
    array1.pop_back();// array[3]
    array1.pop_back();// array[2]
    array1.pop_back();// array[1]
    array1.size();

    return 0;
}