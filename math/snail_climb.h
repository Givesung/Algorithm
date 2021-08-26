int climb(int &A, int &B, int &V)
{
    return static_cast<int>((V - B - 1) / (A - B) + 1);
}
