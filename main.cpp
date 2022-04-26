//
// Created by ivanr on 4/14/2022.
//

#include "teamData.cpp"
#include "teamImproved.cpp"
#include "yearlyTeamData.cpp"
int main() {
    //using main function to test
    using namespace NS_DATA;
    using namespace NS_TEAM_IMPROVED;
    using namespace NS_YEARLYDATA;
    yearlyTeamData year2017("Datasets\\cbb17.csv");
    yearlyTeamData year2018("Datasets\\cbb18.csv");
    cout << year2017.getYearlyData().at(1).getTeamRank() << endl; //should return 2, since the rank starts at 1
    cout << year2017.getMeanAveDefence() << endl;
    string team = "Villanova";
    cout << year2017.getTeamStatRating(team) << endl;
    vector<teamData> test1 = year2017.getYearlyData();
    vector<teamData> test2 = year2018.getYearlyData();
    for(int i = 0; i < year2017.getYearlyData().size(); i++) {
        teamImproved(year2018.getYearlyData().at(i).getTeamName(), test1, test2);
    }

    return 0;
}
