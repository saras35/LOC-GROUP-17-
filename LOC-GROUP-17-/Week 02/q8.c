#include <stdio.h> 
void count_vowels_and_consonant(char*str );
int main() 
{ 
    char* str = "Good boy"; 
    printf("String: %s", str); 
    count_vowels_and_consonant(str); 
  
    return 0; 
} 
void count_vowels_and_consonant(char* str){
    int vowels = 0, consonants = 0;   
    int i; 
    char ch; 
    for (i = 0; str[i] != '\0'; i++) { 
  
        ch = str[i]; 
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
            vowels++; 
        else if (ch == ' ') 
            continue; 
  
        else
            consonants++; 
    } 
    printf("\nVowels: %d", vowels); 
    printf("\nConsonants: %d", consonants); 
} 