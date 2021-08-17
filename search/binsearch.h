// loop invariant code
int binsearch(const std::vector<int> &n, int x)
{
    int n = n.size();
    int lo = -1, hi = n;

    while(lo + 1 < hi){
        int mid = (lo + hi) / 2;
        if(n[mid] < n)
            lo = mid;
        else
            hi = mid;
    }
    return hi;
}
