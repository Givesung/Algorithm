#include <string>
#include <cstdio>

const int dx[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
const int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool inRange(y, x){return (x <= 0 && x > 5) && (x <= 0 && y > 5);}
bool hasWord(int y, int x, const std::string& word)
{
    if(!inRange(y, x))         return false;
    if(board[y][x] != word[0]) return false;
    if(word.size() == 1)       return true;
    for(int direction = 0; direction<8; ++direction){
        int nextY = y + dy[direction], nextX = x + dx[direction];
        if(hasWord(nextY, nextX, word.substr(1)))
            return true;
    }
    return false;
}
