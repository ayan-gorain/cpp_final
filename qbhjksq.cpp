#include <bits/stdc++.h>
using namespace std;

// Function to reverse a substring
void reverseee(char ch[], int s, int e) {
    while (s < e) {
        swap(ch[s++], ch[e--]);
    }
}

string reverseWords(string s) {
    int n = s.length();
    char ch[n + 1];
    strcpy(ch, s.c_str());

    int start = 0;

    // Step 1: Reverse each word in the string
    for (int i = 0; i <= n; i++) {
        // When we reach a space or the end of the string
        if (isspace(ch[i]) || i == n) {
            reverseee(ch, start, i - 1);
            start = i + 1;
        }
    }

    // Step 2: Reverse the entire string to get the words in correct order
    reverseee(ch, 0, n - 1);

    // Convert the character array back to a string
    string ans(ch);

    return ans;
}

int main() {
    string temp = "the sky is blue";
    string result = reverseWords(temp);

    cout << "Input: " << temp << endl;
    cout << "Output: " << result << endl;

    return 0;
}
