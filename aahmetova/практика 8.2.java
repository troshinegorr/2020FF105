// Ахметова лаба 8 задание 2 вариант 3
import java.util.Random;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("введите размер:");
        int n=scanner.nextInt();
        Random random=new Random();
        int max;
        int maxPos=0;
 
        int[][]mass=new int[n][n];
 
        for(int i=0;i<mass.length;i++){
            for(int j=0;j<mass.length;j++){
                mass[i][j]=random.nextInt(50);
                System.out.print(String.valueOf(mass[i][j])+" ");
            }
            System.out.print("\n");
        }
        max=mass[0][0];
        for(int i=0;i<mass.length;i++){
            if(mass[i][i]>max){
                max=mass[i][i];
                maxPos=i;
            }
        }
        System.out.println("введите номер строки:");
        int pos=scanner.nextInt();
        int []b=mass[maxPos];
        mass[maxPos]=mass[pos];
        mass[pos]=b;
 
        System.out.println();
        for(int i=0;i<mass.length;i++){
            for(int j=0;j<mass.length;j++){
                System.out.print(String.valueOf(mass[i][j])+" ");
            }
            System.out.print("\n");
        }
    }
}