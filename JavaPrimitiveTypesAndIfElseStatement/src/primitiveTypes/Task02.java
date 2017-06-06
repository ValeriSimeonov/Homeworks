package primitiveTypes;

import java.util.Scanner;

public class Task02 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Vavedete chisla");
		int firstNumber= sc.nextInt();
		int secondNumber= sc.nextInt();
		//float number1= sc.nextFloat();
		//float number2= sc.nextFloat();
		System.out.println("Sum is: "+(firstNumber+secondNumber));
		System.out.println("Difference is: "+(firstNumber-secondNumber));
		System.out.println("Result after multiplication is "+(firstNumber * secondNumber));
		System.out.println("Remainder of division is "+(firstNumber % secondNumber));
		System.out.println("Result after division is "+(firstNumber / secondNumber));
		
	}

}
