package primitiveTypes;

import java.util.Scanner;

public class Task05 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Vavedete 3 chisla");
		float number1 = sc.nextFloat();
		float number2 = sc.nextFloat();
		float number3 = sc.nextFloat();
		if ((number1 < number2) && (number2 < number3)) {
			System.out.println(number3);
			System.out.println(number2);
			System.out.println(number1);
		}
		if ((number2 < number3) && (number3 < number1)) {
			System.out.println(number1);
			System.out.println(number3);
			System.out.println(number2);
		}
		if ((number3 < number1) && (number1 < number2)) {
			System.out.println(number2);
			System.out.println(number1);
			System.out.println(number3);
		}
		if ((number1 < number3) && (number3 < number2)) {
			System.out.println(number2);
			System.out.println(number3);
			System.out.println(number1);
		}
		if ((number3 < number2) && (number2 < number1)) {
			System.out.println(number1);
			System.out.println(number2);
			System.out.println(number3);
		}
		if ((number2 < number1) && (number1 < number3)) {
			System.out.println(number3);
			System.out.println(number1);
			System.out.println(number2);
		}

	}
}
