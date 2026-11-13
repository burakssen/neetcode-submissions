impl Solution {
    pub fn encode(strs: Vec<String>) -> String {
        strs.into_iter()
            .map(|s| format!("{}#{}", s.len(), s))
            .collect()
    }

    pub fn decode(s: String) -> Vec<String> {
        let mut result = Vec::new();
        let mut i = 0;

        while i < s.len() {
            let j = i + s[i..].find('#').unwrap();
            let len: usize = s[i..j].parse().unwrap();

            i = j + 1;
            result.push(s[i..i + len].to_string());
            i += len;
        }

        result
    }
}
