// unsigned int a= ~0 ;// 將 a 用二進位表示出來，會得到所有 bit 都是 1 將每個 bit 的值反轉
unsigned char a = 190;   // 1011 1110
unsigned char b = 162;   // 1010 0010
unsigned char c = a & b; // 1010 0010 = 162
//& (bitwise AND)
//將兩個 operand 對應的 bit 進行 AND 運算
// 假設 char 是 8 bit
unsigned char a = 190; // 1011 1110
unsigned char b = 162; // 1010 0010
unsigned char c = a&b; // 1010 0010 = 162
//| (bitwise OR)
//將兩個 operand 對應的 bit 進行 OR 運算
// 假設 char 是 8 bit
unsigned char a = 190; // 1011 1110
unsigned char b = 162; // 1010 0010
unsigned char c = a|b; // 1011 1110 = 190
//^ (bitwise XOR)
//將兩個 operand 對應的 bit 進行 XOR 運算
// 假設 char 是 8 bit
unsigned char a = 190; // 1011 1110
unsigned char b = 162; // 1010 0010
unsigned char c = a^b; // 0001 1100 = 28
//<< (left shift)
// 假設 char 是 8 bit
unsigned char x = 5; // 0000 0101 = 5
unsigned char y = x << 3; // 0010 1000 = 40 = 5 * (2^3)
//>> (right shift)
// 假設 char 是 8 bit
unsigned char x = 59; // 0011 1011 = 59
unsigned char y = x >> 1; // 0001 1101 = 29 = 59 / (2^1)