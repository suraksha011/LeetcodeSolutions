class Solution {
 public:
  long long minimumPerimeter(long long neededApples) {
    long long l = 1;
    long long r = 100'000;  // \sqrt [3] {10^{15}}

    while (l < r) {
      const long long m = (l + r) / 2;
      if (numApples(m) >= neededApples)
        r = m;
      else
        l = m + 1;
    }

    return l * 8;
  }

 private:
  long long numApples(long long k) {
    return 2 * k * (k + 1) * (2 * k + 1);
  }
};
