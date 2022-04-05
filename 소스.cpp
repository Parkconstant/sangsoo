#include <iostream>
#include <algorithm>

using namespace std;

class array1 {
public:
    int num;
    int arrays[10000] = { 0, };
    array1();
    array1(int n) {
        num = n;
    }
    void get_array() {
        for (int i = 0; i < num; i++)
        {
            cout << "입력: ";
            cin >> arrays[i];
        }
        cout << "입력된 배열:";
        for (int i = 0; i < num; i++)
        {
            cout << arrays[i] << " ";
        }
        cout << endl;
    };

    void up() {

        sort(arrays, arrays + num);
        for (int i = 0; i < num; i++)
        {
            cout << arrays[i] << " ";
        }
        cout << endl;
    }
    void down()
    {
        sort(arrays, arrays + num, greater<int>()); //sort(start,end, greater<자료형>()); 내림차순 기본형식
        for (int i = 0; i < num; i++)
        {
            cout << arrays[i] << " ";
        }
        cout << endl;
    }

};

int main()
{
    int n = 0;
    cout << "N 입력 후 0 - N까지 배열에 저장" << '\n';
    cout << "N값:";
    cin >> n;
    array1 arr = array1(n);
    arr.get_array();

    int ch = -1;
    while (ch) {
        cout << "1. 오름차순으로 정렬 후 배열 출력" << '\n';
        cout << "2. 내림순으로 정렬 후 배열 출력" << '\n';
        cout << "0. 종료" << '\n';
        cin >> ch;
        if (ch == 1)
            arr.up();
        else if (ch == 2)
            arr.down();
    }

    return 0;
}