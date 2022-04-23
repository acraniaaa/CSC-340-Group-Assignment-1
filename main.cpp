//
// Created by ivanr on 4/14/2022.
//

#include "team_data.h"

int main() {
    using namespace NS_DATA;
    team_data obj1;
    obj1.setTeamName("test");
    std::cout << obj1.getTeamName();
    return 0;
}
