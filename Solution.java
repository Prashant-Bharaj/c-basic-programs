//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<String, Integer> mp = new HashMap<String, Integer>();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            mp.put(name,phone);
            // Write code here
        }
        while(in.hasNext()){
            String s = in.next();
            if(mp.containsKey(s)){
                System.out.println(s+"="+mp.get(s));
            }else{
                System.out.println("Not found");
            }

            // Write code here
        }
        in.close();
    }
}