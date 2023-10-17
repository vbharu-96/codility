int CountFactors(int N) {
    if(N == 1) return 1;
    int count = 2;
    for(int i = 2;i<=N/2;i++){
        if(N/i < i) break;
        if(N%i == 0){
            count += ((N/i == i)?1:2);
        }
    }
    return count;
}
