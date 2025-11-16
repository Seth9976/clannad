// 函数: sub_7548a5
// 地址: 0x7548a5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx = arg1
int32_t result = 0

while (true)
    int16_t eax_1 = *ecx
    ecx = &ecx[1]
    
    if ((eax_1 u< 0x41 || eax_1 u> 0x5a) && eax_1 - 0x61 u> 0x19)
        return result
    
    result += 1
