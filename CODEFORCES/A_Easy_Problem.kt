fun tTestCase(t: Int) {
    val n = readLine()?.toIntOrNull() ?: return
    var cnt = 0
    for (a in 1..n) {
        for (b in 1..n) {
            if (a + b == n) {
                cnt++
            }
        }
    }
    println(cnt)
}

fun solve() {
    val t = readLine()?.toIntOrNull() ?: return
    for (i in 1..t) {
        tTestCase(i)
    }
}

fun main() {
    solve()
}
