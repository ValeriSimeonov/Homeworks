package primitiveTypes;

import java.util.Scanner;

public class Task13 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("insert  temperatura");
		byte t=sc.nextByte();
		if(t<(-20)){
			System.out.println("ledeno studeno");
		}else{
			if(((-20)<t)&&(t<0)){
				System.out.println("studeno");
			}
			if((0<t)&&(t<15)){
				System.out.println("hladno");
			}
			if((15<t)&&(t<25)){
				System.out.println("toplo");
			}
			if(t>25){
				System.out.println("goreshto");
			}
		}
	}
}
