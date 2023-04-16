class Solution {
    public String solution(String my_string) {
        String answer = "";
        int index=0;
        for(int i=my_string.length()-1; i>=0; i--){
            answer=answer+my_string.charAt(i);
        }
        return answer;
    }
}