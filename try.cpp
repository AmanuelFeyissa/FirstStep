//A PROGRAM THAT FINDS AND GROUPS ANAGRAMS TOGETHER FROM GIVEN LIST OF WORDS
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Function to group anagrams together from given list of words
void groupAnagrams(string words[], int n)
{
	// construct a vector out of given words and sort each word
	vector<string> list(words, words + n);
	for (string &s: list)		
		sort(s.begin(), s.end());

	// construct a map where key is each sorted word and value is list of indices where it is present
	unordered_map<string, vector<int>> map;
	for (int i = 0; i < n; i++)
		map[list[i]].push_back(i);

	// traverse the map and read indices for each sorted key. The anagrams are present in actual list at those indices
	for (auto itr : map)
	{
		for (int index : itr.second)
			cout << words[index] << " ";
		cout << endl;
	}
}

// Group anagrams together from given list of words
int main()
{
	// list of words
	string words[] =
	{
		"CARS", "REPAID", "DUES", "NOSE", "SIGNED", "LANE",
		"PAIRED", "ARCS", "GRAB", "USED", "ONES", "BRAG",
		"SUED", "LEAN", "SCAR", "DESIGN"
	};

	// size of list
	int n = sizeof(words) / sizeof(words[0]);

	groupAnagrams(words, n);

	return 0;
}
