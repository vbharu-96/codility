//A non-empty array A consisting of N integers is given. A pair of integers (P, Q), 
//such that 0 ≤ P ≤ Q < N, is called a slice of array A. The sum of a slice (P, Q) is the total of A[P] + A[P+1] + ... + A[Q].

#include<headers_req.h>
#define INM -2147483648
int MaxSliceSum(vector<int> &A) {
    // Implement your solution here
    int max_e =0,max_s= INM ;
    auto max = [](int x,int y){
        return (x>y)?x:y;
    };
    for(auto i : A){
        max_e = max(i,max_e+i);
        max_s = max(max_e,max_s);
    }
    return max_s;
}
