﻿#include <iostream>
using namespace std;
#include <cstring>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

char* processStringarr(char* str) {
    int vowelCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            vowelCount++;
        }
    }

    char* result = new char[255]; // массив для хранения результата
    int index = 0;

    if (vowelCount < 5) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (!isVowel(str[i])) {
                result[index++] = str[i];
            }
        }
    }
    else {
        for (int i = 0; str[i] != '\0'; i++) {
            if (isVowel(str[i])) {
                result[index++] = toupper(str[i]); // Заглавная
                result[index++] = tolower(str[i]); // Строчная
            }
            else {
                result[index++] = str[i];
            }
        }
    }

    result[index] = '\0'; // Завершение строки
    std::cout << "Результат: " << result << std::endl;
    return result;
}
void processStringstr(char* str) {
    int vowelCount = 0;
    int length = std::strlen(str);

    // Сначала считаем количество гласных
    for (int i = 0; i < length; ++i) {
        if (isVowel(str[i])) {
            vowelCount++;
        }
    }

    // Если гласных меньше 5, удаляем их
    if (vowelCount < 5) {
        char* result = new char[length + 1]; // Для новой строки
        int j = 0;

        for (int i = 0; i < length; ++i) {
            if (!isVowel(str[i])) { // Если не гласная
                result[j++] = str[i];
            }
        }

        result[j] = '\0'; // Завершаем строку
        std::cout << "Результат: " << result << std::endl;
        delete[] result; // Освобождаем память
    }
    else {
        // Если гласных 5 или больше, удваиваем их
        char* result = new char[2 * length + 1]; // Для новой строки (вдвое больше)
        int j = 0;

        for (int i = 0; i < length; ++i) {
            if (isVowel(str[i])) {
                result[j++] = std::toupper(str[i]); // Заглавная
                result[j++] = std::tolower(str[i]); // Строчная
            }
            else {
                result[j++] = str[i]; // Не гласная
            }
        }

        result[j] = '\0'; // Завершаем строку
        std::cout << "Результат: " << result << std::endl;
        delete[] result; // Освобождаем память
    }
}
int func3() {
    const char* inputFileName = "LabaStruc.txt";
    const char* outputFileName = "LabaStrucOut.txt";
    const int maxLength = 100;
    char inputString[maxLength];


#define _CRT_SECURE_NO_WARNINGS
    FILE* inputFile = fopen(inputFileName, "rb");
    if (inputFile == nullptr) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }

    if (fgets(inputString, maxLength, inputFile) == nullptr) {
        std::cerr << "Error reading from input file" << std::endl;
        fclose(inputFile);
        return 1;
    }
    fclose(inputFile);
    char* resultstr = processStringarr(inputString);


    /* char* newlinePos = strchr(inputString, '\n');
     if (newlinePos != nullptr) {
         *newlinePos = '\0';
     }*/



    FILE* outputFile = fopen(outputFileName, "w");
    if (outputFile == nullptr) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }

    if (fputs(resultstr, outputFile) == EOF) {
        std::cerr << "Error writing to output file" << std::endl;
        fclose(outputFile);
        return 1;
    }
    fclose(outputFile);

    std::cout << "Processed string written to " << outputFileName << std::endl;
    return 0;

}

int main() {
    setlocale(LC_ALL, "Russian");
    char str1[255];
    std::cout << "Введите строку: ";
    std::cin.getline(str1, 255);

    processStringarr(str1);


    char str2[100]; // Размер строки
    cout << "Введите строку: ";
    cin.getline(str2, 100); // Чтение строки

    processStringstr(str2); // Обработка строки

    int variant;
    func3();



    return 0;
}