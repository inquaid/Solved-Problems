fun tTestCase() {
    val (n, m) = readLine()!!.split(" ").map { it.toInt() }
    
    val mtx = mutableListOf<List<Int>>()
    repeat(n) {
        val row = readLine()!!.split(" ").map { it.toInt() }.sorted()
        mtx.add(row)
    }
    
    for (i in 0 until n) {
        for (j in 0 until m) {
            if (kotlin.math.abs(mtx[i][j] - mtx[i][0]) % n != 0) {
                println(-1)
                return
            }
        }
    }
    
    val res = mutableListOf<Pair<Int, Int>>()
    for (i in 0 until n) {
        res.add(Pair(mtx[i][0], i + 1))
    }
    
    res.sortBy { it.first }
    println(res.joinToString(" ") { it.second.toString() })
}

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        tTestCase()
    }
}
