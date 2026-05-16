import java.util.Scanner;

public class CoinConvert {
    public static void main(String[] args) {
        // Write your code here 💖
        System.out.print("Enter the amount of coins: ");
        Scanner coin= new Scanner(System.in);
        double coins= coin.nextDouble();
        double total= coins*0.0045;
        System.out.println("Coin -> USD= $ " + total);


        
    }
}
