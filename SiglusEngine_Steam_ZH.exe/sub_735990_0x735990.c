// 函数: sub_735990
// 地址: 0x735990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1[0x69]
int32_t eax_1 = arg2

if (arg2 == 0)
    if (*(arg1 + 0x4a) == 0)
        eax_1 = *(arg1[0x6e] + 4)
        *(esi + 4) = eax_1
    else
        bool cond:0_1 = *(esi + 0xc) != 0
        *(esi + 4) = sub_735aa0
        
        if (not(cond:0_1))
            int32_t eax_16 = (*(arg1[1] + 0x1c))(arg1, *(esi + 8), 0, *(esi + 0x10), 1)
            *(esi + 0xc) = eax_16
            *(esi + 0x18) = 0
            *(esi + 0x14) = 0
            return eax_16
    
    *(esi + 0x18) = 0
    *(esi + 0x14) = 0
    return eax_1

int32_t eax_2 = eax_1 - 2

if (eax_1 == 2)
    if (*(esi + 8) == 0)
        *(*arg1 + 0x14) = 3
        eax_2 = (**arg1)(arg1)
    
    *(esi + 4) = sub_735bb0
    *(esi + 0x18) = 0
    *(esi + 0x14) = 0
    return eax_2

int32_t eax_3 = eax_2 - 1

if (eax_2 != 1)
    *(*arg1 + 0x14) = 3
    int32_t eax_7 = (**arg1)(arg1)
    *(esi + 0x18) = 0
    *(esi + 0x14) = 0
    return eax_7

if (*(esi + 8) == 0)
    *(*arg1 + 0x14) = 3
    eax_3 = (**arg1)(arg1)

*(esi + 4) = sub_735b10
*(esi + 0x18) = 0
*(esi + 0x14) = 0
return eax_3
