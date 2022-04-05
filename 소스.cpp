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
            cout << "�Է�: ";
            cin >> arrays[i];
        }
        cout << "�Էµ� �迭:";
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
        sort(arrays, arrays + num, greater<int>()); //sort(start,end, greater<�ڷ���>()); �������� �⺻����
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
    cout << "N �Է� �� 0 - N���� �迭�� ����" << '\n';
    cout << "N��:";
    cin >> n;
    array1 arr = array1(n);
    arr.get_array();

    int ch = -1;
    while (ch) {
        cout << "1. ������������ ���� �� �迭 ���" << '\n';
        cout << "2. ���������� ���� �� �迭 ���" << '\n';
        cout << "0. ����" << '\n';
        cin >> ch;
        if (ch == 1)
            arr.up();
        else if (ch == 2)
            arr.down();
    }

    return 0;
}