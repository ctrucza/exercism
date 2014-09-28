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
        for (auto c : sentence)
        {
            if (isalpha(c) && !isupper(c))
                return false;
        }
        return true;
    }

    static bool question(string sentence)
    {
        return *sentence.rbegin() == '?';
    }
};