#pragma once
#include<vector>
#include<string>
#include<iostream>
using namespace std;


namespace Utils {
    class String {
    public:
        static vector<string> split(string haystack, string needle) {
            vector<string> result;
            int startPos = 0;
            size_t foundPos = haystack.find(needle, startPos);
            while (foundPos != string::npos) {
                int count =(int) foundPos - startPos;
                string token = haystack.substr(startPos, count);
                result.push_back(token);

                startPos = (int)foundPos + needle.length();
                foundPos = haystack.find(needle, startPos);
            }

            // The remaining
            string token = haystack.substr(startPos, haystack.length() - startPos);
            result.push_back(token);

            return result;
        }
    };
}