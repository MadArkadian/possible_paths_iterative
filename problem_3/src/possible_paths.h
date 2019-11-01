long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}

long possiblePathsIterative(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }
    int path[M*N];

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (i - 1 < 0 || j - 1 < 0) path[i + j * M] = 1;
            else path[i + j * M] =  path[i - 1 + j * M] + path[i + (j - 1) * M];
        }
    }
    return path[M*N-1]; // place holder
}
