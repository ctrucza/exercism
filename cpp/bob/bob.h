#include <string>
#include <cctype>
#include <sstream>
#include <algorithm>
#include <boost/algorithm/string/trim.hpp>

using namespace std;

class bob
{
public:
    static string hey(const string& sentence)
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
    static bool shouting(const string& sentence)
    {
        bool contains_alphanumeric = any_of(sentence.begin(), sentence.end(), isalpha);
        bool contains_lowercase = any_of(sentence.begin(), sentence.end(), islower);

        if (contains_lowercase)
            return false;
        return contains_alphanumeric;
    }

    static bool question(const string& sentence)
    {
        return boost::algorithm::trim_copy(sentence).back() == '?';
    }

    static bool silence(const string& sentence)
    {
        return boost::algorithm::trim_copy(sentence).length() == 0;
    }
};