// 函数: sub_7271f0
// 地址: 0x7271f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
sub_726be0(sub_726be0(eax, arg1 + 0x94, arg1, *(arg1 + 0xb1c)), arg1 + 0x988, arg1, *(arg1 + 0xb28))
sub_7269d0(arg1, arg1 + 0xb30)
void* result = 0x12

while (true)
    if (*(arg1 + (zx.d(*(result + 0xaddf50)) << 2) + 0xa7e) == 0)
        if (*(arg1 + (zx.d(*(result + &data_addf4c:3)) << 2) + 0xa7e) != 0)
            result -= 1
        else
            if (*(arg1 + (zx.d(*(result + &data_addf4c:2)) << 2) + 0xa7e) != 0)
                *(arg1 + 0x16a8) += (result - 2) * 3 + 0x11
                return result - 2
            
            if (*(arg1 + (zx.d(*(result + &data_addf4c:1)) << 2) + 0xa7e) != 0)
                *(arg1 + 0x16a8) += (result - 3) * 3 + 0x11
                return result - 3
            
            result -= 4
            
            if (result s< 3)
                break
            
            continue
    
    *(arg1 + 0x16a8) += result * 3 + 0x11
    return result

*(arg1 + 0x16a8) += result * 3 + 0x11
return result
