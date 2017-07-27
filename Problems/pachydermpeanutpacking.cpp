/*
  Kattis.com
  Problem Pachyderm Peanut Packing.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/05/2017
*/

#include <iostream>
#include <string>
#include <vector>

struct Box {
    Box() : x1(0.0f), y1(0.0f), x2(0.0f), y2(0.0f) {}
    Box(double a, double b, double p, double q, const std::string& t) :
        x1(a), y1(b), x2(p), y2(q), type(t) {}
    ~Box() {}

    double x1;
    double y1;
    double x2;
    double y2;
    std::string type;
};

std::string where_is(std::vector<Box>& boxes,
                     double x, double y, const std::string& type) {
    for (std::size_t i = 0; i < boxes.size(); ++i) {
        if (x >= boxes[i].x1 && x <= boxes[i].x2 &&
            y >= boxes[i].y1 && y <= boxes[i].y2)
            if (boxes[i].type == type)
                return "correct";
            else
                return boxes[i].type;
    }

    return "floor";
}

int main() {

    while (1) {
        int n = 0;
        std::cin >> n;

        if (n == 0)
            break;

        std::vector<Box> boxes;
        while (n--) {
            double x1 = 0.0f;
            double y1 = 0.0f;
            double x2 = 0.0f;
            double y2 = 0.0f;
            std::string type;

            std::cin >> x1 >> y1 >> x2 >> y2 >> type;

            boxes.push_back(Box(x1, y1, x2, y2, type));
        }

        int m = 0;
        std::cin >> m;

        while (m--) {
            double x = 0.0f;
            double y = 0.0f;
            std::string type;

            std::cin >> x >> y >> type;

            std::cout << type << " " << where_is(boxes, x, y, type) << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
