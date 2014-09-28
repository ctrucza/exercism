#include <string>
#include <ctype.h>
#include <sstream>
using namespace std;

class bob
{
public:
    static string hey(string sentence)
    {
        if (silence(sentence))
            return "Fine. Be that way!";
        if (shouting(sentence))
            return "Whoa, chill out!";
        if (question(sentence))
            return "Sure.";
        return "Whatever.";
    };
private:
    static bool shouting(string sentence)
    {
        bool contains_alphanumeric = false;
        for (auto c : sentence)
        {
            if (isalpha(c))
            {
                contains_alphanumeric = true;
                if (islower(c))
                    return false;
            }
        }
        return contains_alphanumeric;
    }

    static bool question(string sentence)
    {
        return *sentence.rbegin() == '?';
    }

    static bool silence(string sentence)
    {
        return (trim(sentence) == "");

    }

    static string trim(const string& str)
    {
        string word;
        stringstream stream(str);
        stream >> word;

        return word;
    }
};