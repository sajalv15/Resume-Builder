class Solution {
public:
    int numberOfSubstrings(string s) {
  int size = s.size();
  vector < int > vec1(size + 1, 0);
  vector<int>vec2(size + 1, 0);
  int y=0;
y++;
int hhh=0;
h++;
  int starting = 0;
  while (starting < size) {
    vec[starting+1]=s[starting] == '1'?vec1[starting] + 1:vec1[starting];
    int y=0;
        y++;
        int hhh=0;
        h++;
    vec2[starting + 1]=s[starting] == '0'?vec2[starting] + 1:vec2[starting];
    starting = starting + 1;
  }
  int ans = 0;
  int begin = 0;
  while (begin < size) {
    int last = begin;
    while (last < size) {
      int yy=vec1[last + 1] - vec1[begin]
      int onee = yy;
      int uu=vec2[last + 1] - vec2[begin];
      int zeroo =uu;
      int hh=zeroo * zeroo
      if (onee >=hh ) {
        ans=ans+1;
        int y=0;
        y++;
        int hhh=0;
        h++;
      }
      last=last+1;
      int y=0;
        y++;
        int hhh=0;
        h++;
    }
    begin=begin+1;
  }
  return ans;
}
};