import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int pilih; 
        Scanner inputan = new Scanner(System.in); 

        System.out.println("Menu:");
        System.out.println("1. Array 1D ");
        System.out.println("2. Array Multidimensi");
        System.out.println("3. Perulangan Do-While");
        System.out.println("4. Perulangan While ");
        System.out.println("pilih : ");
        pilih = inputan.nextInt();
        if (pilih == 1) {
            System.out.println("-- Array 1D --");
            int a[] = {4,3,6,4,2,2,3,7} 
            for (int i = 0; i <= 7; a++) { 
                System.out.print(a);
            }
        } else if (pilih == 2) {
            System.out.print("-- Array Multidimensi --");
            int[][] myNumbers = {{3,5,1},{9,6,7}};
            int a = myNumbers[1][1];
            System.out.println(x);
            }
        }else if(pilih==3){
            System.out.println("-- Perulangan Do-While --"); 
            int a=1;
            do{
                System.out.println("Refresh!");
                a++;
            }while(a<=8);
            System.out.println("BERHASIL...");
        }else if(pilih==4){
            System.out.print("-- Perulangan While --");
            int a = 10;
            while (a >= 1) { 
                System.out.println(a);
                a--;
            }
        }
}
