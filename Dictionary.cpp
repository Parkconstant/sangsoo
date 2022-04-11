#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Dictionary {
    string* words;
    int size;
public:
    Dictionary();
    void input_word(string word);
    void print_all_words();
    void print_words_to_index(char index);
    void print_index(string word);
};

Dictionary::Dictionary() 
{
    this->words = NULL; // NULL로 초기화
    this->size = 0; // 배열길이 담는 변수
}

void Dictionary::input_word(string word)
{
    if (words == NULL) 
    {
       this->words = new string[1]; // words가 NULL일때 string배열을 1로 동적할당받아 words에 단어를 넣는다.
       words[this->size] = word;
       size++;
    }
    else
    {
        string* tmp; // words 저장된 단어들+ 새롭게 들어간 단어를 저장하는 배열
        tmp = new string[this->size+1];// 한단어를 더추가 하니까 한칸을 더추가
        for (int i = 0; i < size; i++)
        {
            tmp[i] = words[i];
        }
        tmp[this->size] = word;
        delete[] words; // 동적할당 운영체제에 메모리를 빌려온것 -> delete를 이용해서 반환해줘야된다(더이상 사용하지 않을때). 
        words = tmp; // words를 반환해줬기에 쓰레기값이 있음. words에 tmp를대입
        this->size++;
        sort(words, words+this->size);
    }
}

void Dictionary::print_all_words()
{
    for (int i = 0; i < size; i++)
    {
        cout << words[i] << endl;
    }
    cout << "==================" << endl;
}

void Dictionary::print_words_to_index(char index)
{
    cout << "앞 글자가 같은 단어 :";
    for (int i = 0; i < this->size; i++)
    {
        if (words[i][0] == index) // string을  *char로 변경 c_str()함수 // 첫글자가 index랑 같으면 그 단어 출력
        {
            cout << words[i] << " ";
        }
    }
    cout << endl;
}

void Dictionary::print_index(string word) 
{
    int x = 0;
    for (int i = 0; i < size; i++)
    {
        if (words[i] == word)
        {
            cout << "인덱스: " << i <<endl;
            x++; // 단어를 찾으면 인덱스를 출력하고 x에 1을 더한 후 종료
            break; 
        }
    }
    if (x == 0) // for문을 돌았는데 x가 증가하지 않았으면 NO WORD 출력
    {
        cout << "NO WORD" << endl;
    }
    
}

int main()
{

    Dictionary sang;
    sang.input_word("apple"); // index = 1
    sang.input_word("banana"); // index = 2
    sang.print_all_words();
    sang.input_word("airplane"); // index = 0
    sang.input_word("sangsoo"); // index = 4
    sang.input_word("chicken"); // index = 3
    sang.print_all_words();
    sang.print_words_to_index('a');

    sang.print_index("apple");
    return 0;
}
