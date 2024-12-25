function recur(n) {
    if (n == 1 || n == 2) return 1;

    return recur(n - 1) + recur(n - 2);
}
function findNthFibonacci(n) {
    return recur(n);
}

module.exports.findNthFibonacci = findNthFibonacci;