 int f[N+1];    // initalize an array to store values of f(1), f(2) ... f(N)

void iterativeDP () {
    for (int x=1; x<=N; x++) f[x] = x;      // Initially assume that f(x) = x

    // when we have determined f(x) update values of f(x+1), f(x*2) and f(x*3)
    for (int x=1; x<=N; x++) {
        if (x+1 <= N) f[x+1] = min (f[x+1], f[x]+1);
        if (x*2 <= N) f[x*2] = min (f[x*2], f[x]+1);
        if (x*3 <= N) f[x*3] = min (f[x*3], f[x]+1);
    }
}
