import java.util.Scanner;

public class Salary {
    public static void main(String[] args) {
        System.out.println("Enter Your Salary: ");
        Scanner in = new Scanner(System.in);
        int Salary= in.nextInt();
        if(Salary>=20000){
            System.out.println(Salary+1000);
        }
        else{
            System.out.println(Salary+2000);
        }
    }
    
}
