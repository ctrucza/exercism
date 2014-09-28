#include <string>
#include <ctype.h>
using namespace std;

class bob
{
public:
    static string hey(string sentence)
    {
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
};