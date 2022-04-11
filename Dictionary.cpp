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
    }
    else
    {
        string* tmp;
        tmp = words;
        this->size++;
        words = new string[this->size];
        
    }

}

void Dictionary::print_all_words()
{
    for (int i = 0; i < size; i++)
    {
        cout << words[i] << endl;
    }
}

void Dictionary::print_words_to_index(char index)
{

}

void Dictionary::print_index(string word) 
{

}

int main()
{




}