// Simple Division


#include <iostream>
#include <vector>
    using namespace std;

int countNumbers(const vector<int> &arr, int X, int Y)
{
    int count = 0;
    for (int num : arr)
    {
        if (num <= X && num % Y == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int result = countNumbers(arr, X, Y);
        cout << result << endl;
    }

    return 0;
}

//  Students and Fighting

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        long long int n, i, max = -1;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == max)
                ans = 1;
            if (arr[i] > max)
            {
                max = arr[i];
                ans = 0;
            }
        }
        if (ans == 0)
            cout << "peace:)" << endl;
        else
            cout << "fight:(" << endl;
    }
    return 0;
}

//  Maximum Difference

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxDifference(const vector<std::vector<int>> &matrix)
{
    int maxDiff = 0;
    for (const auto &row : matrix)
    {
        int minVal = *min_element(row.begin(), row.end());
        int maxVal = *max_element(row.begin(), row.end());
        int diff = maxVal - minVal;
        maxDiff = max(maxDiff, diff);
    }
    return maxDiff;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> matrix(N, vector<int>(M));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cin >> matrix[i][j];
            }
        }

        int result = findMaxDifference(matrix);
        cout << result << endl;
    }

    return 0;
}

//  Redoing the undone

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    stack<string> A;
    stack<string> B;

    for (int i = 0; i < Q; i++)
    {
        int query;
        cin >> query;

        if (query == 1)
        {
            string S;
            cin >> S;
            A.push(S);
        }
        else if (query == 2)
        {
            int K;
            cin >> K;
            for (int j = 0; j < K; j++)
            {
                if (!A.empty())
                {
                    B.push(A.top());
                    A.pop();
                }
                else
                {
                    break;
                }
            }
        }
        else if (query == 3)
        {
            int L;
            cin >> L;
            for (int j = 0; j < L; j++)
            {
                if (!B.empty())
                {
                    A.push(B.top());
                    B.pop();
                }
                else
                {
                    break;
                }
            }
        }

        if (!A.empty())
        {
            cout << A.top() << endl;
        }
        else
        {
            cout << "Nil" << endl;
        }
    }

    return 0;
}

//  Holi and Miss Ural

#include <iostream>
#include <vector>
#include <limits>

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N, K;
        std::cin >> N >> K;

        std::vector<long long> D(N);
        std::vector<long long> R(N);

        for (int i = 0; i < N; i++)
        {
            std::cin >> D[i];
        }

        for (int i = 0; i < N; i++)
        {
            std::cin >> R[i];
        }

        long long min_cost = std::numeric_limits<long long>::max();

        for (int i = 0; i < N; i++)
        {
            long long travel_cost = D[i] * K;
            long long total_cost = travel_cost + R[i];
            if (total_cost < min_cost)
            {
                min_cost = total_cost;
            }
        }

        std::cout << min_cost << std::endl;
    }

    return 0;
}

// Modular Arithmetic

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    unordered_map<int, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        freq[A[i] % M]++;
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int i, V;
            cin >> i >> V;

            freq[A[i - 1] % M]--;
            A[i - 1] = V;
            freq[A[i - 1] % M]++;
        } else if (type == 2) {
            int X;
            cin >> X;

            cout << freq[X] << endl;
        }
    }

    return 0;
}

//  Thef and his Bed

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int T = 0;
	cin>>T;
	while(T--){
	    long long int N , Q;
	    cin>>N>>Q;
	    long long int sum = 0 , mode = -1 , maxOccur = 0 , mean;
	    vector<long long int> visited(1e5 + 1,0);
	    for(long long int i = 0;i<N;i++){
	        long long int temp ;
	        cin>>temp;
	        sum += temp;
	        visited[temp]++;
	        if(visited[temp] > maxOccur){
	            mode = temp;
	            maxOccur = visited[temp];
	        }
	        else if(visited[temp] == maxOccur){
	            mode = min(mode,temp);
	        }
	    }
	    mean = sum / N;
	    while(Q--){
	        long long int type;
	        cin>>type;
	        if(type == 1){
	            // add an element
	            long long int X;
	            cin>>X;
	            sum += X;
	            N++;
	            mean = sum / N; //  mean  ends
	            visited[X]++; // mode starts
    	        if(visited[X] > maxOccur){
    	            mode = X;
    	            maxOccur = visited[X];
    	        }
    	        else if(visited[X] == maxOccur){
    	            mode = min(mode,X);
    	        }
	        }
	        else if(type == 2){
                cout<<mean<<endl;	            
	        }
	        else if(type == 3){
	            cout<<mode<<endl;
	        }
	    }
	}
	return 0;
}
// Thef, Thefina and Thefi
// python me

def check_noise(s):
    mom_idx = 0
    dad_idx = 0

    for char in s:
        if char == 'm' and mom_idx == 0:
            mom_idx += 1
        elif char == 'o' and mom_idx == 1:
            mom_idx += 1
        elif char == 'm' and mom_idx == 2:
            mom_idx += 1

        if char == 'd' and dad_idx == 0:
            dad_idx += 1
        elif char == 'a' and dad_idx == 1:
            dad_idx += 1
        elif char == 'd' and dad_idx == 2:
            dad_idx += 1

        if mom_idx == 3:
            return "Mom"
        elif dad_idx == 3:
            return "Dad"

    return "Goo-Goo"


# Read number of test cases
t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    result = check_noise(s)
    print(result)

// Jelly Volume

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> // for std::setprecision

double calculateTemperature(int N, double U, const std::vector<double>& volumes) {
    double low = 0.0;
    double high = 1e9; // Assume a high initial value

    while (high - low > 1e-6) {
        double mid = (low + high) / 2.0;
        double sumVolumes = 0.0;

        for (int i = 0; i < N; i++) {
            sumVolumes += pow(volumes[i] + mid, 3);
        }

        if (sumVolumes > U) {
            high = mid;
        } else {
            low = mid;
        }
    }

    return (low + high) / 2.0;
}

int main() {
    int Q;
    std::cin >> Q;

    while (Q--) {
        int N;
        double U;
        std::cin >> N >> U;

        std::vector<double> volumes(N);
        for (int i = 0; i < N; i++) {
            std::cin >> volumes[i];
        }

        double temperature = calculateTemperature(N, U, volumes);
        std::cout << std::fixed << std::setprecision(2) << temperature << std::endl;
    }

    return 0;
}


// Out of the Abyss

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

vector<int> findDistances(vector<vector<int>>& graph, vector<int>& specialNodes) {
    int n = graph.size();
    vector<int> distances(n, INT_MAX);
    vector<bool> visited(n, false);
    queue<int> q;

    for (int node : specialNodes) {
        distances[node] = 0;
        visited[node] = true;
        q.push(node);
    }

    while (!q.empty()) {
        int currNode = q.front();
        q.pop();

        for (int neighbor : graph[currNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                distances[neighbor] = distances[currNode] + 1;
                q.push(neighbor);
            }
        }
    }

    return distances;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        vector<vector<int>> graph(N);
        for (int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;
            addEdge(graph, u - 1, v - 1);
        }

        vector<int> specialNodes(K);
        for (int i = 0; i < K; i++) {
            cin >> specialNodes[i];
            specialNodes[i]--;
        }

        vector<int> distances = findDistances(graph, specialNodes);

        int Q;
        cin >> Q;
        while (Q--) {
            int u;
            cin >> u;
            u--;

            if (distances[u] == INT_MAX)
                cout << -1 << endl;
            else
                cout << distances[u] << endl;
        }
    }

    return 0;
}
