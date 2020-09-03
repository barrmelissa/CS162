//
//  main.cpp
//  CS TA CODE SAMPLE
//
//  Created by Melissa Barr on 6/14/17.
//  Copyright © 2017 Melissa Barr. All rights reserved.
//

#include <vector>
#include <unordered_map>
#include <string>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> sort_string_anagram(vector<string> array)
{
    unordered_map<string, set<string>> anagram;
    
    for(string word : array)
    {
        string sorted_word(word);
        
        sort(sorted_word.begin(),sorted_word.end());
        
        anagram[sorted_word].insert(word);
    }
    
    sort(array.begin(), array.end());
    
    vector<string> result;
    
    for(string word : array)
    {
        unordered_map<string,set<string>>::iterator iter;
        
        string sorted_word(word);
        
        sort(sorted_word.begin(), sorted_word.end());
        
        if( (iter = anagram.find(sorted_word)) != anagram.end() )
        {
            for(set<string>::iterator it = (iter->second).begin(); it!= (iter->second).end();++it)
            {
                result.push_back(*it);
            }
            anagram.erase(iter);
        }
    }
    return result;
}