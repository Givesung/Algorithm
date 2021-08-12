void insertion(std::vector<int> &e)
{
    for(int i=0; i<e.size(); ++i)
        int j=i;
        while(j>0 && e[j-1] > a[j]){
            swap(a[j-1], a[j]);
            --j;
        }
}
