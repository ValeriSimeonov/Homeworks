package primitiveTypes;

import java.util.Scanner;

public class Task07 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
        System.out.println("Introduce a hour.");
		byte hour=sc.nextByte();
		System.out.println("Insert money.");
		float money=sc.nextFloat();	
		System.out.println("Insert true or false for am i healty.");
		boolean amIHealtly=sc.nextBoolean();
		if((0<=hour)&&(hour<=24)){
			System.out.println("The hour is " +hour);
		}
		if (amIHealtly==true) {
			if (money>10.0f) {
				System.out.println("I'll go on a cinema whit friens");
			}
			if (money<10.0f) {
				System.out.println("I'll go to cafe");
			}
		}else if(amIHealtly==false){
			if (money==0.0f) {
				System.out.println("I'll stay in home and drink tea");
			}
			if (money>0.0f) {
				System.out.println("I'll buy medications for as much money for as I can get");
			}
		}
		
		
		
		
		
		
		

	}

}
