#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    //

    int setName(User * user, const char* name) {
        if (strlen(name) < 5 || strlen(name) > 20) {
            return -1;
        }
        for (int i = 0; name[i]; i++) {
            if (!isalpha(name[i])) {
                return -1;
            }
        }
        strcpy(user->name, name);
        return 0;
    }

}