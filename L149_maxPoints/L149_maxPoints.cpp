//
// Created by garen_lee on 2025/4/18.
/**
  ******************************************************************************
  * @file           : L149_maxPoints.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/18
  ******************************************************************************
  */
//

#include "L149_maxPoints.h"

int L149_maxPoints::gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}
int L149_maxPoints::maxPoints(vector<vector<int>>& points) {
    int n = points.size();
    if (n <= 2) {
        return n;
    }
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (res >= n - i || res > n / 2) {
            break;
        }
        unordered_map<int, int> mp;
        for (int j = i + 1; j < n; ++j) {
            int dx = points[j][0] - points[i][0];
            int dy = points[j][1] - points[i][1];
            if (dx == 0) {
                dy = 1;
            } else if (dy == 0) {
                dx = 1;
            } else {
                if (dy < 0) {
                    dx = -dx;
                    dy = -dy;
                }
                int gcdXY = gcd(abs(dx), abs(dy));
                dx /= gcdXY, dy /= gcdXY;
            }
            int key = dx  * 40001 + dy;
            mp[key]++;
        }
        int maxn = 0;
        for (auto &[_, num] : mp) {
            maxn = max(maxn, num + 1);
        }
        res = max(res, maxn);
    }
    return res;
}

void L149_maxPoints::test() {
    vector<vector<int>> points = {{1, 1}, {3, 2}, {5, 3}, {4, 1}, {2, 3}, {1, 4}};
    int result = maxPoints(points);
    cout << "The maximum number of points that can be covered is: " << result << endl;
    points = {{1, 1}, {2, 2}, {3, 3}};
    result = maxPoints(points);
    cout << "The maximum number of points that can be covered is: " << result << endl;
}
