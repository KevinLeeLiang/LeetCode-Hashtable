//
// Created by garen_lee on 2025/8/1.
/**
  ******************************************************************************
  * @file           : L391_isRectangleCover.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/1
  ******************************************************************************
  */
//

#include "L391_isRectangleCover.h"
typedef pair<int, int> Point;
bool L391_isRectangleCover::isRectangleCover(vector<vector<int>>& rectangles) {
    long area = 0;
    int minX = rectangles[0][0], minY = rectangles[0][1], maxX = rectangles[0][2], maxY = rectangles[0][3];
    map<Point, int>cnt;
    for (auto & rect : rectangles) {
        int x = rect[0], y = rect[1], a = rect[2], b = rect[3];
        area += (long) (a - x) * (b - y);

        minX = min(minX, x);
        minY = min(minY, y);
        maxX = max(maxX, a);
        maxY = max(maxY, b);

        Point point1({x, y});
        Point point2({x, b});
        Point point3({a, y});
        Point point4({a, b});

        cnt[point1] += 1;
        cnt[point2] += 1;
        cnt[point3] += 1;
        cnt[point4] += 1;
    }
    Point pointMinMin({minX, minY});
    Point pointMinMax({minX, maxY});
    Point pointMaxMin({maxX, minY});
    Point pointMaxMax({maxX, maxY});
    if (area != (long long) (maxX - minX) * (maxY - minY) || !cnt.count(pointMinMin) || !cnt.count(pointMinMax) ||
        !cnt.count(pointMaxMin) || !cnt.count(pointMaxMax)) {
        return false;
    }

    cnt.erase(pointMinMin);
    cnt.erase(pointMinMax);
    cnt.erase(pointMaxMin);
    cnt.erase(pointMaxMax);

    for (auto & entry : cnt) {
        int value = entry.second;
        if (value != 2 && value != 4) {
            return false;
        }
    }
    return true;
}

void L391_isRectangleCover::test() {
    vector<vector<int>> rectangles = {{1, 1, 3, 3}, {3, 1, 4, 2}, {3, 2, 4, 4}, {1, 3, 2, 4}, {2, 3, 3, 4}};
    cout << isRectangleCover(rectangles) << endl;
    rectangles = {{1, 1, 2, 3}, {1, 3, 2, 4}, {3, 1, 4, 2}, {3, 2, 4, 4}};
    cout << isRectangleCover(rectangles) << endl;
    rectangles = {{1, 1, 3, 3}, {3, 1, 4, 2}, {1, 3, 2, 4}, {2, 2, 4, 4}};
    cout << isRectangleCover(rectangles) << endl;
}