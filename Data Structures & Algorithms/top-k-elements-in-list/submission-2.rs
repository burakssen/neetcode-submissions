impl Solution {
    pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
        let mut numbers = nums;
        numbers.sort_unstable();
        let mut groups: Vec<_> = numbers.chunk_by(|a, b| a == b).collect();
        groups.sort_unstable_by_key(|group| std::cmp::Reverse(group.len()));
        groups.into_iter().take(k as usize).map(|group| group[0]).collect()
    }
}
