import java.util.*;

class Solution {
    public List<Integer> solution(int n) {
        List<Integer> answer = new ArrayList<>(1000);
        int i = 0;
        answer.add(n);
        
        while(n > 0){
            if(n % 2 == 0) n = (n / 2);
            else n = (3 * n + 1);
            answer.add(n);
            i++;
            if(n == 1) break;
        }
        return answer;
    }
}