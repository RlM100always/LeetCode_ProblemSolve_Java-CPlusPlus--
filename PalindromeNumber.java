
import java.util.Scanner;
//9. Palindrome Number(LeetCode)

public class PalindromeNumber{

    

    public static boolean isPalindrome(int x) {

        String a = String.valueOf(x);
        String d = new StringBuilder(a).reverse().toString();


        if(a.equals(d)){
            return true;
        }


        return false ;
        
    }



     public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int num ;
        num = input.nextInt();
        Boolean collectAns = isPalindrome(num);

        System.out.println(collectAns);



        input.close();


     }

    
}