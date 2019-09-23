#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  // balloon
  int maxNumberOfBalloons(string &text) {
    int result = INT_MAX;
    vector<int> balon{0, 0, 0, 0, 0};
    for (auto ch: text) {
      switch (ch) {
      case 'b': ++balon[0];
        break;
      case 'a': ++balon[1];
        break;
      case 'l': ++balon[2];
        break;
      case 'o': ++balon[3];
        break;
      case 'n': ++balon[4];
        break;
      default: break;
      }
    }
    // balloon
    result = min(result, balon[0]);
    result = min(result, balon[1]);
    result = min(result, balon[2] / 2);
    result = min(result, balon[3] / 2);
    result = min(result, balon[4]);
    return result;
  }
};

void test1() {
  string text = "nlaebolko";

  cout << "1 ? " << Solution().maxNumberOfBalloons(text) << endl;

  text = "loonbalxballpoon";

  cout << "2 ? " << Solution().maxNumberOfBalloons(text) << endl;
}

void test2() {

}

void test3() {

}