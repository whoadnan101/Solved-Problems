import java.util.Scanner;

public class Largest {
    public static void main(String[] args) {
        System.out.println("Enter 3 integers to check which one is latgest among them:");
        Scanner in  = new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        int c=in.nextInt();
        int max =a;
        if(b>max){
        max=b;
        }
        if(c>max){
        max=c;
        }
        System.out.println(max+ " Is the largest among them.");
}
    
}
