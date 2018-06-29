/*
  Kattis.com
  Problem Roll Call.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 22/11/2017
 */

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

class Student {
public:
    Student() {}
    Student(const std::string& first_name,
            const std::string& last_name) :
        m_first_name(first_name), m_last_name(last_name) {}

    Student(const Student& rhs) {
        m_first_name = rhs.m_first_name;
        m_last_name = rhs.m_last_name;
    }

    ~Student() {}

    Student& operator = (const Student& rhs) {
        m_first_name = rhs.m_first_name;
        m_last_name = rhs.m_last_name;

        return *this;
    }

    bool operator < (const Student& rhs) const {
        if (m_last_name == rhs.m_last_name)
            return m_first_name < rhs.m_first_name;
        else
            return m_last_name < rhs.m_last_name;
    }

    bool operator > (const Student& rhs) const {
        if (m_last_name == rhs.m_last_name)
            return m_first_name > rhs.m_first_name;
        else
            return m_last_name > rhs.m_last_name;
    }

    bool operator == (const Student& rhs) const {
        return (m_first_name == rhs.m_first_name) &&
            (m_last_name == rhs.m_last_name);
    }

    std::string first_name() const {
        return m_first_name;
    }

    std::string last_name() const {
        return m_last_name;
    }

private:
    std::string m_first_name;
    std::string m_last_name;
};

int main() {
    std::map<std::string, int> dict;
    std::vector<Student> students;

    std::string name;
    while (std::getline(std::cin, name)) {
        std::istringstream iss(name);

        std::string first_name;
        std::string last_name;
        iss >> first_name >> last_name;
        students.push_back(Student(first_name, last_name));
        ++dict[first_name];
    }

    std::sort(students.begin(), students.end());

    for (std::size_t i = 0; i < students.size(); ++i)
        if (dict[students[i].first_name()] > 1)
            std::cout << students[i].first_name() << " " << students[i].last_name() << std::endl;
        else
            std::cout << students[i].first_name() << std::endl;

    return 0;
}
