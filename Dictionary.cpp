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
    this->words = NULL; // NULL�� �ʱ�ȭ
    this->size = 0; // �迭���� ��� ����
}

void Dictionary::input_word(string word)
{
    if (words == NULL) 
    {
       this->words = new string[1]; // words�� NULL�϶� string�迭�� 1�� �����Ҵ�޾� words�� �ܾ �ִ´�.
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