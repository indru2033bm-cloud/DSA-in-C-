#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void printItinerary(unordered_map<string , string> tickets){
    unordered_set<string> to;

    for(auto ticket : tickets){
        to.insert(ticket.second);
    }
    string start;
    for(auto ticket : tickets){
        if(to.find(ticket.first) == to.end()){
            start = ticket.first;
        }
    }

    cout << start << " -> ";
    while(tickets.find(start) != tickets.end()){
        cout << tickets[start] << " -> ";
        start = tickets[start];
    }
    cout << "Destination Reached";
}

int main(){
    unordered_map<string , string> tickets;
    tickets["Chennai"] = "Banglore";
    tickets["Bombay"] = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";

    printItinerary(tickets);
    return 0;
}