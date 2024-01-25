/*
Love Babbar: Lecture 22
Coding Ninjas:  Check If The String Is A Palindrome

Problem statement:
You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

Note :

String 'S' is NOT case sensitive.
Example :

Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.
*/

// Uncomment for code.

/*
#include <bits/stdc++.h>

void toSmall(string &s){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
}

bool isAlphaNum(char s){
    if((s>='A'&&s<='Z')||(s>='a'&&s<='z')||(s>='0'&&s<='9')){
        return true;
    }
    else
        return false;
}

bool checkPalindrome(string s)
{
    int start = 0, end=s.size() - 1;
    toSmall(s);
    while(start<end){
        if(isAlphaNum(s[start])&&isAlphaNum(s[end])){
            if(s[start]!=s[end]){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        else{
            if(!isAlphaNum(s[start])){
                start++;
            }
            else if(!isAlphaNum(s[end])){
                end--;
            }
            else{
                start++;
                end--;
            }
        }
    }
    return 1;
}
*/

// More Optimised
//Same as above but steps are combined and made small.

/*
#include <bits/stdc++.h>
char toSmall(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
}

bool checkPalindrome(string s)
{
    int start = 0, end = s.size() - 1;

    while (start <= end)
    {
        if(!isalnum(s[start])){
            start++;
        }
        else if(!isalnum(s[end])){
            end--;
        }
        else if (toSmall(s[start]) != toSmall(s[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
*/