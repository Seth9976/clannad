// 函数: sub_4e3fbc
// 地址: 0x4e3fbc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_4e30d3(*(arg1 + 0xb14), arg1 + 0x8c, arg1)
sub_4e30d3(*(arg1 + 0xb20), arg1 + 0x980, arg1)
sub_4e3dd4(arg1, arg1 + 0xb28)
void* result = 0x12

while (*(arg1 + (zx.d(*(result + 0xace0f4)) << 2) + 0xa76) == 0)
    result -= 1
    
    if (result s< 3)
        break

*(arg1 + 0x16a0) += result * 3 + 0x11
return result
