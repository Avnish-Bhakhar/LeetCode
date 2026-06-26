
class Solution {
public:
    int guessNumber(int n) {
        int l = 1, h = n;

        int mid;

        while(l<=h)
        {
            mid = l + (h-l)/2;

            if(guess(mid) == 0) break;

            else if(guess(mid) == -1) h = mid -1;

            else l = mid +1;
        }

        return mid; 
    }
};