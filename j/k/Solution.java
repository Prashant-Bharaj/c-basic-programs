import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    private static final Scanner scanner = new Scanner(System.in);
    String s=new String();
    int counter=0, max=0, maxdigit,precounter=0;
    void binaryCounter(){
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?"); 
        scanner.close();
        int i =n;
        while(i!=0){
            while(i!=0){
                s=s+i%2;
                i=i/2;
            }
            // System.out.println(s);
            for(int j = 0; j<s.length(); j++){
                
                if((s.substring(j, j+1)).equals("1")){
                    counter=counter+1;
                }else if((s.substring(j, j+1)).equals("0")){

                    counter=0;
                }
                if(counter>=precounter){
                    precounter=counter;
                }
            }
            // System.out.println("precounter"+counter);
            if(precounter>max){
                max=precounter;
                maxdigit = n;
            }
            s="";
            n=n-1;
            i=n; 
            counter=0;
        }
        // System.out.println(max+" "+n+" " +maxdigit);
        System.out.println(maxdigit);
    }

    public static void main(String[] args) {
        
        new Solution().binaryCounter();
    }
}

