//
// Created by javi & hetgar on 2022/04/21.
//
#include "team_data.h"
#include "project2.h"

namespace NS_READER {
    
    double getMeanAveDefence(vector <team_data> team) {
        double def=0;
        int count=team.size();
        for(int i=0; i<team.size();i++){
    //uses the functions in team_data to find the adjustedDefensiveFreq of the team vector
             def+=team[i].getAdjustedDefensiveFreq();
        }
        return (def/count);
    }
//gets offensive data of a chosen team
    double getTeamStatRating(string TeamName, vector <team_data> team) {
       double offense=0;
       bool exists=false;
       double Stat=0;

        for(int i=0; i<team.size();i++){
           if(TeamName==team[i].getTeamName()){
              offense+=team[i].getAdjustedOffensiveFreq();
           exists=true;
           }
           i++;
        }
        //account for teams that don't exist by checking the bool statement exists
        if(exists==true){
        Stat=(offense-getMeanAveDefence(team));
         cout<<TeamName<<" had a stat of "<<Stat<<endl;
        return Stat;
    }
        //if it is false then says the team isn't on the listing
        cout<<TeamName<<" isn't on the listing ";
        return 0;
    }
}
