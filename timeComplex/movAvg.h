vector<double> movingAverage1(const vector<double> &n, int M)
{
    vector<double> ret;
    int N = n.size();
    for(int i=M-1; i<N, ++i){
        double partialSum=0;
        for(int j=0; j<M; ++j)
            partialSum += n[i-j];
        ret.push_back(partialSum / M);
    }

    return ret;
}

vector<double> movingAverage2(const vector<double> &n, int M)
{
    vector<double> ret;
    int N = n.size();
    double partialSum=0;
    
    for(int i=0; i<M-1; ++i)
        partialSum += A[i];

    for(int i=M-1; i<N; ++j){
        partialSum += A[i];
        ret.push_back(partialSum / M);
        partialSum -= A[i-M+1];
    }

    return ret;
}
