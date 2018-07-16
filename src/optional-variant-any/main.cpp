#include <optional>
#include <iostream>

using namespace std;

class UserName
{
public:
    UserName() : mName("Default")
    {
        cout << "UserName::UserName(" <<mName << ")" << endl;
    }

    ~UserName()
    {
        cout << "UserName::~UserName(" <<mName << ")" << endl;
    }

    UserName(const UserName& rhs)
    {
        cout << "UserName::UserName(copy" <<mName << ")" << endl;
    }

    UserName(UserName&& rhs)
    {
        cout << "UserName::UserName(move " <<mName << ")" << endl;
    }

std::string mName;
};

int main() {
    std::optional<std::string> ostr{"Hello World"};
    std::optional<int> oi{10};

    std::optional<UserName> u0; // empty optional
    std::optional<UserName> u1{}; // also empty

// optional with default constructed object:
    std::optional<UserName> u2{UserName()};

    std::optional<UserName> opt{std::in_place};

    return 0;
}