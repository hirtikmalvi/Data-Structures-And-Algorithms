/*
Love Babbar: L22
Leetcode: 567 Permutation In string

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
*/

// Code with Explanation
// Uncomment for code

/*

class Solution {

public:
    bool isAllZero(int count[]) { // Array ke saare elements Zero hai k nahi
                                  // check karne k liye
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }
        return true;
    }

    // Humara ans TRUE tab hoga jab count Array Zero hoga. Is kam ke liye hum Sliding Window(Parallel  Checking) method use karenge.
    //Size of s1 = Window Size, means s1.length = 2, then hum window size ke steps me aage badhenge in s2(means will be comparing s1 with s2 in windowSize steps.)

public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length(), len2 = s2.length(); // Size store kardo

        if (len1 >
            len2) // Agar s1 ki size > s2 ki size, to possible hi nahi hai!!!
            return false;

        // Possible Hai to Niche wala execute karo..
        int count[26] = {0};

        // s1 ke each characters ki frequency count kardo in the array of 26
        // ele. (a to z)
        for (int i = 0; i < len1; i++) {
            count[s1[i] - 'a']++;
        }

        // s2 me traverse karo
        for (int i = 0; i < len2; i++) {
            count[s2[i] -
                  'a']--; // Current ele. ka count - kardo...(Jo Window
                          // (windowSize = s1 ki size(len1)) me include hai...)

            if (i - len1 >=
                0) { // Agar Humari Window aage badh rahi hai to jo previously
                     // include tha ele. uska count again + kardo, kyuki kuchh
                     // kam bana nai uska include karna so...
                count[s2[i - len1] - 'a']++;
            }
            if (isAllZero(count)) // Agar count Array ke saare ele. Zero ho gaye
                                  // process karte karte to humara ans TRUE
                                  // hai(s1's permutation is in s2).
                return true;
        }
        return false; // agar itna process karne k baad bhi kam nahi bana to
                      // false return kardo.
    }
};

*/