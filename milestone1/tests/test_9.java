class Student{
public static void main() {
// student_arr is the name of 3d array 
int student_arr[][][] = {
                            {
                            {10, 20, 30},
                            {20, 30, 40}
                            },
                            {
                            {40, 50, 60},
                            {10, 70, 80},
                            }
                        };
// for loop to iterate through each element of 3D array 
    for (tables = 0; tables<2; tables++)
    {
        for (rows= 0; rows <2; rows++)
        {
            for (columns= 0; columns<3; columns++)
            {
                System.out.print(student_arr[tables][rows][columns]);
            }
            System.out.println();
        }
    System.out.println();
    }
}
}