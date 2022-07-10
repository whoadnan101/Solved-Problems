import java.util.Scanner;
public class Temperature {
    public static void main(String[] args) {
        System.out.println("Enter the number to convert it into F");
        Scanner in= new Scanner(System.in);
        Float TempC=in.nextFloat();
        Float TempF=(TempC*9/5)+32;
        System.out.println("Your Result = "+TempF);
    }
}
