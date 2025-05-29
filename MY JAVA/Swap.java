public class swap {
    public static void main(String[] args) {
        String arr = "XOOXOOXXOX"; // Input string
        char[] charArr = arr.toCharArray(); // Convert String to mutable char array

        int left = 0, right = charArr.length - 1;

        // Two-pointer approach to rearrange X's and O's
        while (left < right) {
            // Move the left pointer forward if it's already 'X'
            if (charArr[left] == 'X') {
                left++;
            }
            // Move the right pointer backward if it's already 'O'
            else if (charArr[right] == 'O') {
                right--;
            }
            // Swap 'O' at left with 'X' at right
            else {
                char temp = charArr[left];
                charArr[left] = charArr[right];
                charArr[right] = temp;
                left++;
                right--;
            }
        }

        // Convert char array back to String and print the result
        String result = new String(charArr);
        System.out.println("Rearranged Array: " + result);
    }
}

    

