import java.util.Scanner;

public class CaeserCipher {
    public static void main(String[] args) {
        String message;
        String decryptedMessage = "";
        int key;
        char checkMessage;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter a message: ");
        message = scan.nextLine();
        for (key = 1; key < 26; key++) {
            for(int i = 0; i < message.length(); ++i) {
                checkMessage = message.charAt(i);
                if (checkMessage >= 'a' && checkMessage <= 'z') {
                    checkMessage = (char) (checkMessage - key);
                    if (checkMessage < 'a') {
                        checkMessage = (char) (checkMessage + 'z' - 'a' + 1);
                    }
                    decryptedMessage += checkMessage;
                } else if (checkMessage >= 'A' && checkMessage <= 'Z') {
                    checkMessage = (char) (checkMessage - key);
                    if (checkMessage < 'A') {
                        checkMessage = (char) (checkMessage + 'Z' - 'A' + 1);
                    }
                    decryptedMessage += checkMessage;
                } else {
                    decryptedMessage += checkMessage;
                }
            }
            System.out.println("Possible message: " + decryptedMessage);
            decryptedMessage = "";
        }
    }
}
