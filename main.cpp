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
  //file name was the absolute path for above
    
    //testing getting the mean average
    cout<<"mean defense average of "<<getMeanAveDefence(teamList)<<endl;
  //printing the stats as in offense of a specified team - mean defense average
  //free to set up TeamName as user defined or you can define it by giving it a specific team
  getTeamStatRating("Villanova",teamList);
   
    return 0;
}
