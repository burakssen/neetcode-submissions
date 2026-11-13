struct NumMatrix {
    prefix: Vec<Vec<i32>>,
}

impl NumMatrix {
    fn new(matrix: Vec<Vec<i32>>) -> Self {
        let m = matrix.len();
        let n = matrix[0].len();
        let mut prefix = vec![vec![0; n + 1]; m + 1];

        for i in 0..m {
            for j in 0..n {
                prefix[i + 1][j + 1] =
                    matrix[i][j] + prefix[i][j + 1] + prefix[i + 1][j] - prefix[i][j];
            }
        }

        Self { prefix }
    }

    fn sum_region(&self, row1: i32, col1: i32, row2: i32, col2: i32) -> i32 {
        let (r1, c1, r2, c2) = (
            row1 as usize,
            col1 as usize,
            row2 as usize + 1,
            col2 as usize + 1,
        );

        self.prefix[r2][c2] - self.prefix[r1][c2] - self.prefix[r2][c1] + self.prefix[r1][c1]
    }
}
