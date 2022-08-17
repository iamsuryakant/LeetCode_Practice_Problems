class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        
        String arr[]=new String[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> set=new HashSet<>();
     for(String s:words){
         String res="";
         for(int c=0;c<s.length();c++){
             int i=s.charAt(c)-'a';
             res+=(arr[i]);
         }
         set.add(res);
     }   
       return set.size(); 
    }
}