#include <vector>

using namespace std;

struct Result {
    Result() {}
    int output1[1000];
};

Result altTab(int input1, int input2, int input3[]) {
    // Initialize a vector to represent the current ALT-TAB window
    vector<int> altTabWindow(input3, input3 + input1);
    
    // Perform ALT-TAB operation input2 times
    for (int i = 0; i < input2; i++) {
        // The most recently used application will be the last one in the current window
        int mostRecentlyUsed = altTabWindow.back();
        altTabWindow.pop_back();
        // Add it back to the front of the window to make it the most recent
        altTabWindow.insert(altTabWindow.begin(), mostRecentlyUsed);
    }
    
    // Convert the final vector to an array for the result
    Result result;
    for (int i = 0; i < input1; i++) {
        result.output1[i] = altTabWindow[i];
    }
    
    return result;
}
