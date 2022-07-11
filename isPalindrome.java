import java.io.*;
import java.util.*;

public class isPalindrome {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str=in.nextLine();
        int start=0;
        int end=str.length()-1;
        
        boolean isPalindrome=true;
        
        while(start<end){
            if(str.charAt(start) != str.charAt(end)){
                isPalindrome=false;
                break;
            }
            start++;
            end--;
        }
        if(isPalindrome){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}