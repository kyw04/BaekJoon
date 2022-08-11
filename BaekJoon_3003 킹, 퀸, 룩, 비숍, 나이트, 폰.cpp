#include <iostream>
#define KING 1
#define QUEEN 1
#define ROOK 2
#define BISHOP 2
#define KNIGHT 2
#define PAWN 8
 
using namespace std;

int main()
{
	int king, queen, rook, bishop, knight, pawn;
	
	cin >> king >> queen >> rook >> bishop >> knight >> pawn;
	
	printf("%d %d %d %d %d %d", KING - king, QUEEN - queen, ROOK - rook, BISHOP - bishop, KNIGHT - knight, PAWN - pawn);
	
	return 0;
}
