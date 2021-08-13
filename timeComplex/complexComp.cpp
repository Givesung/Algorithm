const int MIN = INT_MAX;

int inefficientMaxSum(const std::vector<int> &n) // O(N^3)
{
    int N = n.size(), ret = MIN;

    for(int i=0; i<N; ++i)
        for(int j=0; j<N; ++j){
            int sum=0;
            for(int k=i; k<=j; ++k)
                sum += A[k];
            ret = max(ret, sum);
        }
    return ret;
}

int betterMaxSum(const std::vector<int> &n) // O(N^2)
{
    int N = n.size(), ret = MIN;

    for(int i=0; i<N; ++i)
        int sum=0;
        for(int j=0; j<N; ++j){
            sum += n[j];
            ret = max(ret, sum);
    }
}

int fastMaxSum(const std::vector<int> &n, int lo, int hi) // O(nlogn)
{
    if(lo==hi) return n[lo];
    int mid = (lo+hi)/2;
    int left = MIN, right = MIN, sum = 0;
    
    for(int i=mid; i>=lo; --i){
        sum += n[i];
        left = max(left, sum);
    }

    sum=0;
    for(int j=mid+1; j<=hi; ++j){
        sum += n[j];
        right = max(right, sum);
    }
    int single = max(fastMaxSum(A, lo, mid),
                 max(fastMaxSum(A, mid+1, hi));

    return max(left+right, single);
}

int fastestMaxSum(const std::vector<int> &n)
{
    int N = n.size(), ret = MIN, psum = 0;
    
    for(int i=0; i<N; ++i){
        psum = max(psum, 0) + n[i];
        ret = max(psum, ret);
    }

    return ret;
}

int main()
{

    return 0;
}
