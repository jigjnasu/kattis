/*
  Kattis.com
  Problem Best Relay Team.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 10/11/2017
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

class Athelete {
public:
    Athelete() : m_start_time(0), m_finish_time(0) {}
    Athelete(const std::string& name,
             float start_time,
             float finish_time) :
        m_name(name),
        m_start_time(start_time),
        m_finish_time(finish_time) {}

    Athelete(const Athelete& rhs) {
        m_name = rhs.m_name;
        m_start_time = rhs.m_start_time;
        m_finish_time = rhs.m_finish_time;
    }

    ~Athelete() {}

    Athelete& operator = (const Athelete& rhs) {
        m_name = rhs.m_name;
        m_start_time = rhs.m_start_time;
        m_finish_time = rhs.m_finish_time;

        return *this;
    }

    bool operator < (const Athelete& rhs) const {
        return m_finish_time < rhs.m_finish_time;
    }

    bool operator > (const Athelete& rhs) const {
        return m_finish_time > rhs.m_finish_time;
    }

    std::string name() const {
        return m_name;
    }

    float start_time() const {
        return m_start_time;
    }

    float finish_time() const {
        return m_finish_time;
    }

private:
    std::string m_name;
    float m_start_time;
    float m_finish_time;
};

void check(int a, int b, int c, int d,
           std::vector<std::string>& result,
           float& best_time,
           const std::vector<Athelete>& atheletes) {
    if ((atheletes[a].start_time()  +
         atheletes[b].finish_time() +
         atheletes[c].finish_time() +
         atheletes[d].finish_time()) < best_time) {
        best_time = atheletes[a].start_time() +
            atheletes[b].finish_time() +
            atheletes[c].finish_time() +
            atheletes[d].finish_time();
        result[0] = atheletes[a].name();
        result[1] = atheletes[b].name();
        result[2] = atheletes[c].name();
        result[3] = atheletes[d].name();
    }
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::vector<Athelete> atheletes;
    for (int i = 0; i < n; ++i) {
        std::string data;
        std::getline(std::cin, data);
        std::istringstream iss(data);

        std::string name;
        float start_time = 0.0f;
        float finish_time = 0.0f;
        iss >> name >> start_time >> finish_time;

        Athelete a(name, start_time, finish_time);
        atheletes.push_back(a);
    }

    std::sort(atheletes.begin(), atheletes.end());

    float best_time = atheletes[atheletes.size() - 1].finish_time() * 4;;
    std::vector<std::string> result;
    result.push_back("0");
    for (std::size_t i = 0; i < 3; ++i)
        result.push_back(atheletes[i].name());

    float t = 0.0f;
    for (std::size_t i = 0; i < 3; ++i)
        t += atheletes[i].finish_time();
    for (std::size_t i = 3; i < atheletes.size(); ++i) {
        if (atheletes[i].start_time() + t < best_time) {
            best_time = t + atheletes[i].start_time();
            result[0] = atheletes[i].name();
        }
    }

    check(0, 1, 2, 3, result, best_time, atheletes);
    check(1, 0, 2, 3, result, best_time, atheletes);
    check(2, 0, 1, 3, result, best_time, atheletes);
    check(3, 0, 1, 2, result, best_time, atheletes);

    std::cout << best_time << std::endl;
    for (std::size_t i = 0; i < result.size(); ++i)
        std::cout << result[i] << std::endl;

    return 0;
}

