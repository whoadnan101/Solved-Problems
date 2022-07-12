import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str=in.nextLine();
        int a=in.nextInt();
        int b=in.nextInt();
        System.out.println(str.substring(a,b));
    }
}