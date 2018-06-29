/*
  Kattis.com
  Problem Eligibility.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/04/2017
*/

#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string name;
        std::string course_start;
        std::string dob;
        int courses = 0;
        std::string result = "coach petitions";

        std::cin >> name >> course_start >> dob >> courses;

        if (std::atoi(course_start.substr(0, 4).c_str()) >= 2010 ||
            std::atoi(dob.substr(0, 4).c_str()) >= 1991)
            result = "eligible";
        else if (courses >= 41)
            result = "ineligible";

        std::cout << name << " " << result << std::endl;
    }

    return 0;
}
