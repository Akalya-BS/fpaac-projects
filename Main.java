import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String name;
        int rollNo;
        int[] marks = new int[5];
        int total = 0;
        double average, percentage;

        System.out.print("Enter Student Name: ");
        name = sc.nextLine();

        System.out.print("Enter Roll Number: ");
        rollNo = sc.nextInt();

        System.out.println("Enter marks for 5 subjects:");

        for(int i = 0; i < 5; i++) {
            System.out.print("Subject " + (i + 1) + ": ");
            marks[i] = sc.nextInt();
            total += marks[i];
        }

        average = total / 5.0;
        percentage = (total / 500.0) * 100;

        System.out.println("\n----- STUDENT DETAILS -----");
        System.out.println("Name       : " + name);
        System.out.println("Roll No    : " + rollNo);

        System.out.println("Marks:");
        for(int i = 0; i < 5; i++) {
            System.out.println("Subject " + (i + 1) + ": " + marks[i]);
        }

        System.out.println("Total Marks: " + total);
        System.out.println("Average    : " + average);
        System.out.println("Percentage : " + percentage + "%");

        sc.close();
    }
}