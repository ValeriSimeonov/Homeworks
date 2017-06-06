package primitiveTypes;

import java.util.Scanner;

public class Task15 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("insert hour");
		byte hour=sc.nextByte();
		if((4>hour)||(hour>18)){
			System.out.println("Dobar vecher");
		}else{
			if((4<hour)&&(hour<9)){
				System.out.println("Dobro utro");
			}
			if ((9<hour)&&(hour<18))	
				System.out.println("Dobar den");
		}

	}
}
