import java.util.Scanner;

public class Solution{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        String b=in.next();
        String str=b.replace('.','B');
            if(str.contains("HH")){
                System.out.println("NO");
            }
            else{
                System.out.println("YES");
                System.out.println(str);
            }
    }
}