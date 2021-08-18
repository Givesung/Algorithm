void brute_force(int n)
{
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            for(int k=0; k<n; ++k)
                for(int l=0; l<n; ++l)
                    std::cout << i << " " << j << " " << k << " " << l << " " << std::endl;
}
void recursive_pick(int n, std::vector<int> &picked, int toPick)
{
    if(toPick == 0) {printPicked(picked); return;}
    int smallest = picked.empty() ? 0 : picked.back() + 1;
    for(int next = smallest; next < n; ++next){
        picked.push_back(next);
        pick(n, picked, toPick-1);
        picked.pop_back();
    }
}

