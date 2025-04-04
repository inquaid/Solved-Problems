fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        tTestCase()
    }
}

fun tTestCase() {
    val n = readLine()!!.toInt()
    val s = readLine()!!
    val low = s.count { it == '-' }.toLong()
    val high = s.count { it == '_' }.toLong()

    if (low < 2 || high < 1) {
        println(0)
    } else {
        val left = low / 2        
        val right = low - left      
        println(high * left * right)
    }
}