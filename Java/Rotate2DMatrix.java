import java.util.Arrays;

class Rotate2DMatrix {
  
  // We have to rotate given matrix 90 degree(clockwise) without using extra space
  
    public static void main(String[] args) {
        int[][] matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
        
        rotate(matrix);
    
        System.out.println(Arrays.deepToString(matrix));
  }
  
    public static void rotate(int[][] matrix) {
        int n = matrix.length;
        
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int temp = 0;
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n/2; j++) {
                int temp = 0;
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][n-j-1];
                matrix[i][n-j-1] = temp;
            }
        }
        
    }
}
