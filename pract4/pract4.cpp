#include <iostream>
#include<string>
#include <random>

using namespace std;

string reverse(string& word);
string removeVowels(string& word);
string removeConsonants(string& word);
string shuffle(string& word);


int main()
{
	setlocale(LC_ALL,"Rus");

	int choiche;
	string word;

	cout << "Введите слово: ";
	cin >> word;

	cout << "Выберите операцию:" << endl;
	cout << "1.Слово выводится задом наперед" << endl;
	cout << "2.Вывести слово без гласных" << endl;
	cout << "3.Вывести слово без согласных" << endl;
	cout << "4. Рандомно раскидывать буквы заданного слова" << endl;
	cin >> choiche;


	switch (choiche)
	{
	case 1:
		cout << reverse(word) << endl;
		main();
		break;
	case 2:
		cout << removeVowels(word) << endl;
		main();
		break;
	case 3:
		cout << removeConsonants(word) << endl;
		main();
		break;
	case 4:
		cout << shuffle(word) << endl;
		main();
		break;
	default:
		cout << "Неверный ввод";
		break;
	}
}

string reverse(string& word) 
{
	reverse(word.begin(), word.end());
	return word;
}

string removeVowels(string& word)
{
	char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
	for (char vowel : vowels) {
		word.erase(remove(word.begin(), word.end(), vowel), word.end());
	}
	return word;
}

string removeConsonants(string& word)
{
	char consonants[] = 
	{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm','n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z',
	'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
	for (char consonant : consonants) {
		word.erase(remove(word.begin(), word.end(), consonant), word.end());
	}
	return word;

}
string shuffle(string& word) 
{
	random_shuffle(word.begin(), word.end());
	return word;
}