class Solution {
    public boolean rotateString(String s, String goal) {
        String tos=goal+goal;
        if(tos.contains(s)) return true;
        return false;
    }
}