/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2016-02-13
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    size_t n, m; cin >> n >> m; int sum = 0;
    vector<vector<int>> vec(n, vector<int>(m));

    for(size_t i = 0; i < n; i++) for(size_t j = 0; j < m; j++){
        cin >> vec[i][j]; sum += vec[i][j];
    }

    size_t x, y; cin >> x >> y;
    cout << sum << ' ' << vec[x - 1][y - 1];

    return 0;
}