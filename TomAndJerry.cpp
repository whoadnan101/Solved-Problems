/*Tom and Jerry being bored in this pandemic, decides to play a game. Given an integer N. On each player's turn, that player makes a move by subtracting a divisor of current N (which is less than N) from current N, thus forming a new N for the next turn. The player who does not have any divisor left to subtract loses the game.

The game begins with Tom playing the first move. Both Tom and Jerry play optimally. The task is to determine who wins the game. Return 1 if Tom wins, else return 0.

Example 1:

Input:
N = 2
Output:
1
Explanation:
Tom subtracts 1 from N to make N = 1.
Now, Jerry isn't left with any possible
turn so Tom wins the game, and therefore
the Output is 1.*/

//PROBLEM OF THE DAY

int numsGame(int n) {
        if(n%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }