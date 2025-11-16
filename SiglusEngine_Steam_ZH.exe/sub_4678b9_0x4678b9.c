// 函数: sub_4678b9
// 地址: 0x4678b9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax

if ((*(arg1 + 0x61) & 0x10) != 0)
    eax.b = *(arg2 + 0x19)
    
    if (eax.b != 3)
        if (*(arg1 + 0x10a) != 0)
            eax.b |= 4
            *(arg2 + 0x19) = eax.b
        
        if (arg2[6].b u< 8)
            arg2[6].b = 8
    else
        eax.b = *(arg1 + 0x10a) != 0
        *(arg2 + 0x19) = ((eax << 2) + 2).b
        arg2[6].b = 8
    
    *(arg2 + 0x16) = 0

if ((*(arg1 + 0x61) & 0x20) != 0)
    arg2[0xa] = *(arg1 + 0x130)

if ((*(arg1 + 0x61) & 4) != 0 && arg2[6].b == 0x10)
    arg2[6].b = 8

if ((*(arg1 + 0x60) & 0x40) != 0)
    eax.b = *(arg2 + 0x19)
    
    if ((eax.b == 2 || eax.b == 6) && *(arg1 + 0x174) != 0 && arg2[6].b == 8)
        *(arg2 + 0x19) = 3

if ((*(arg1 + 0x60) & 4) != 0 && arg2[6].b u< 8)
    arg2[6].b = 8

eax.b = *(arg2 + 0x19)

if (eax.b == 3 || (eax.b & 2) == 0)
    *(arg2 + 0x1d) = 1
else
    *(arg2 + 0x1d) = 3

if ((eax.b & 4) != 0)
    *(arg2 + 0x1d) += 1

if ((*(arg1 + 0x61) & 0x80) != 0 && (eax.b == 2 || eax.b == 0))
    *(arg2 + 0x1d) += 1

eax.b = arg2[6].b
eax.w = muls.dp.b(eax.b, *(arg2 + 0x1d))
*(arg2 + 0x1e) = eax.b
uint32_t result = (zx.d(eax.b) * *arg2 + 7) u>> 3
arg2[3] = result
return result
