package primitiveTypes;

import java.util.Scanner;

public class Task06 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Vavedete 3 chisla");
		float firstNumber = sc.nextFloat();
		float secondNumber = sc.nextFloat();
		float thirdNumber = sc.nextFloat();
		float tempNumber ;
		tempNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = thirdNumber;
		thirdNumber = tempNumber;
		System.out.println(firstNumber);
		System.out.println(secondNumber);
		System.out.println(thirdNumber);
	}
}
