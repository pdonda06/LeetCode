/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
    const mp = {
        I: 1,
        V: 5,
        X: 10,
        L: 50,
        C: 100,
        D: 500,
        M: 1000
    };

    let ans = 0;

    for (let i = 0; i < s.length; i++) {
        let curr = mp[s[i]];
        let next = mp[s[i + 1]];

        if (curr < next) {
            ans -= mp[s[i]];
        }
        else {
            ans += mp[s[i]];
        }

    }

    return ans;
};