#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;
void printItinerary(unordered_map<string, string> tickets)
{
    // starting point
    unordered_set<string> to;
    for (pair<string, string> ticket : tickets)
    {
        // <from : to >
        to.insert(ticket.second);
    }
    string start = "";
    for (pair<string, string> ticket : tickets)
    {
        // ticket.first = > from value
        if (to.find(ticket.first) == to.end())
            {
        // starting point jo from ke inside hai but to ke nahi
        start = ticket.first;
    }
}
    // plan print
    cout << start << " -> ";
    while (tickets.count(start))
    {
        cout << tickets[start] << " -> ";
        start = tickets[start]; // destination
    }
    cout << "final destination\n";
}
int main()
{
    unordered_map<string, string> tickets;
    tickets["chennai"] = "bengaluru";
    tickets["mumbai"] = "delhi";
    tickets["goa"] = "chennai";
    tickets["delhi"] = "goa";

    printItinerary(tickets);
    return 0;
}
//mumbai -> delhi -> goa -> chennai -> bengaluru -> final destination