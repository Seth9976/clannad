// 函数: sub_541df0
// 地址: 0x541df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1

if (arg2 u> 0xfffffffe)
    sub_743191("string too long")
    noreturn

int32_t eax = *(esi + 0x14)

if (eax u< arg2)
    sub_541ca0(arg1, arg2, *(esi + 0x10))
    return neg.d(sbb.d(0, 0, 0 u< arg2))

if (arg3 == 0 || arg2 u>= 0x10)
    if (arg2 == 0)
        *(esi + 0x10) = arg2
        
        if (eax u>= 0x10)
            esi = *esi
        
        *esi = 0
    
    return neg.d(sbb.d(0, 0, 0 u< arg2))

char* ebx = *(esi + 0x10)

if (arg2 u< ebx)
    ebx = arg2

if (eax u>= 0x10)
    int32_t* eax_3 = *esi
    arg3.d = eax_3
    
    if (ebx != 0)
        sub_748840(esi, eax_3, ebx)
        eax_3 = arg3.d
    
    j__free(eax_3)

*(esi + 0x10) = ebx
*(esi + 0x14) = 0xf
*(ebx + esi) = 0
return neg.d(sbb.d(0, 0, 0 u< arg2))
