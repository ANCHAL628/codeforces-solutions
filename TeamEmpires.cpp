#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int individualOccurence(vector<int>teams , int n) {
    int count = 0 ;
    for (int i = 0 ; i < teams.size() ; i++) {
        if (teams[i] == n) {
           count++ ; 
        }
    }
    return count ;
}
int minimumOcurrence(vector<int>teams) {
    int answer = min(individualOccurence(teams , 1),min(individualOccurence(teams , 2) , individualOccurence(teams , 3))) ;
    return answer ;
}
vector<int>position(vector<int> teams , int n ,int minimum) {
    vector<int> teams1 ;
    vector<int> teams2 ;
    vector<int> teams3 ;
    int x = 0 ;
    int y = 0 ;
    int z = 0 ;
    for ( int i = 0 ; i < teams.size() ; i++) {
        if (teams[i] == n) {
          if ( n == 1 ){
              teams1[x] = i + 1 ;
              x++ ;
          }else if ( n == 2 ){
              teams2[y] = i + 1 ;
              y++ ;
          }else if (n == 3) {
              teams3[z] = i + 1 ;
              z++ ;
          }
    }
    if ( n == 1){
        return teams1 ;
    }else if (n == 2){
        return teams2 ;
    }else{
        return teams3 ;
    }
}

int main() {
    int number  ;
    cin >> number ;
    vector<int>teams ;
    for (int i = 0 ; i < number ; i++) {
        int a ;
        cin >> a ;
        teams.push_back(a) ;
    }
    sort(teams.begin(), teams.end()) ;
    int miniValue = minimumOcurrence(teams) ;
    vector<int> posOfTeams1 = position(teams , 1 , miniValue) ;
    vector<int> posOfTeams2 = position(teams , 2 , miniValue) ;
    vector<int> posOfTeams3 = position(teams , 3 , miniValue) ;
    cout << miniValue << endl ;
    for (int i = 0 ; i < miniValue ; i++) {
        cout <<  posOfTeams1[i] <<  posOfTeams2[i] <<  posOfTeams3[i] << endl ;
        
    }
    return 0 ;
}