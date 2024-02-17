#include <bits/stdc++.h>

using namespace std;

string solve(string inputDate) {
   
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    
    stringstream ss(inputDate);
    string dayStr, monthStr, yearStr;
    ss >> dayStr >> monthStr >> yearStr;

 
    int day = stoi(dayStr);
    int month = 1; 
    for (int i = 0; i < 12; i++) {
        if (monthStr == months[i]) {
            month = i + 1; 
            break;
        }
    }

    int year = stoi(yearStr);

 
    struct tm timeinfo = {0};
    timeinfo.tm_year = year - 1900; 
    timeinfo.tm_mon = month - 1;    
    timeinfo.tm_mday = day;         

   
    stringstream formattedDate;
    formattedDate << setw(4) << setfill('0') << year << "-"
                  << setw(2) << setfill('0') << month << "-"
                  << setw(2) << setfill('0') << day;

    return formattedDate.str();
}

int main() {
     
    string inputDate = "1st August 2023";
    string formattedDate = solve(inputDate);
    cout << "Formatted Date: " << formattedDate << endl;

    return 0;
}