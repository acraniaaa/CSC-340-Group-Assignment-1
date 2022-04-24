//
// Created by ivanr on 4/14/2022.
//

#include "team_data.h"
#include "csv_reader.h"

int main() {
    using namespace NS_DATA;
    using namespace NS_READER;
    team_data obj1;
    vector<team_data> teamList;
    obj1.setTeamName("test");
    std::cout << obj1.getTeamName() << endl;

    readFromCSV("Datasets\\cbb18.csv", teamList);
    return 0;
}
