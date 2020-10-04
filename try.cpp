//program to check whether two strings are anagrams of each other
#include <iostream> 
using namespace std; 

/* function to check whether two strings are anagram of each other */
bool areAnagram(string str1, string str2) 
{ 
	// Get lengths of both strings 
	int m1 = str1.length(); 
	int m2 = str2.length(); 

	// If length of both strings is not same, then they can not be anagram 
	if (m1 != m2)
		return false; 
	// Sort both the strings 
	sort(str1.begin(), str1.end()); 
	sort(str2.begin(), str2.end()); 
	// Compare sorted strings 
	for (int i = 0; i < m1; i ++)
		if (str1[i] != str2[i]) 
			return false; 
	return true; 
} 

int main() 
{ 
	string str1 = "test"; 
	string str2 = "ttew"; 
	if (areAnagram(str1, str2)) 
		cout << "The two strings are anagram of each other"; 
	else
		cout << "The two strings are not anagram of each other"; 

	return 0; 
} 
