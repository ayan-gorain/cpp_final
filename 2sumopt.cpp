#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[] = {2,7,11,15};
    int n=sizeof(nums)/sizeof(int);
    int target=0;
    map<int, int> mpp;
       std::map<int, int> mpp;
    for (int i = 0; i < n; ++i) {
        int a = nums[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {-1, -1};
}





  return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  return 0;
}