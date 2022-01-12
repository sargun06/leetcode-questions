class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        char[] keywords = p.toCharArray();
        Arrays.sort(keywords);
        List<Integer> ret = new ArrayList<>();
        for (int i=0; i<s.length()-p.length()+1; i++) {
            char[] compare = s.substring(i, i+p.length()).toCharArray();
            Arrays.sort(compare);
            
            if (String.valueOf(compare).equals(String.valueOf(keywords))) {
                ret.add(i);
            }
        }
        
        return ret;
    }
}