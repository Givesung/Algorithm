void selection(std::vector<int> &e)
{
    for(int i=0; i<e.size(); ++i){
        int minIndex=i;
        for(int j=0; j<e.size(); ++j)
            if(e[minIndex] > e[j])
                minIndex=j;
        swap(e[i], e[minIndex]);
    }
}

