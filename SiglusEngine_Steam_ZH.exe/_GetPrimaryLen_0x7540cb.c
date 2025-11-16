// 函数: _GetPrimaryLen
// 地址: 0x7540cb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx = arg1
int32_t result = 0

if (ecx == 0)
    return 0

while (true)
    int16_t eax_2 = *ecx
    ecx = &ecx[1]
    
    if ((eax_2 u< 0x41 || eax_2 u> 0x5a) && eax_2 - 0x61 u> 0x19)
        return result
    
    result += 1
