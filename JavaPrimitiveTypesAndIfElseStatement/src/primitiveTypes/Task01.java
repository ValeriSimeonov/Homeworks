package primitiveTypes;

import java.util.Scanner;

public class Task01 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Vavedete granici");
		float lowLimit = sc.nextFloat();
		float highLimit = sc.nextFloat();
		System.out.println("Vavedete chislo");
		float curentNumber = sc.nextFloat();
		if ((lowLimit < curentNumber && curentNumber < highLimit) || (highLimit < curentNumber && curentNumber < lowLimit)) {

			System.out.println("Chisloto " + curentNumber + " e mejdu " + lowLimit + " i " + highLimit);

		} else {
			System.out.println("Chisloto e izvan granicite");

		}

	}

}
