// 函数: sub_52e660
// 地址: 0x52e660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1

if (arg2 u> 0x7ffffffe)
    sub_743191("string too long")
    noreturn

int32_t eax = esi[5]

if (eax u< arg2)
    sub_52e500(arg1, arg2, esi[4])
    return neg.d(sbb.d(0, 0, 0 u< arg2))

if (arg3 == 0 || arg2 u>= 8)
    if (arg2 == 0)
        esi[4] = arg2
        
        if (eax u>= 8)
            esi = *esi
        
        *esi = 0
    
    return neg.d(sbb.d(0, 0, 0 u< arg2))

void* ebx = esi[4]

if (arg2 u< ebx)
    ebx = arg2

if (eax u>= 8)
    int32_t* ecx = *esi
    arg3.d = ecx
    
    if (ebx != 0)
        sub_748840(esi, ecx, ebx * 2)
        ecx = arg3.d
    
    j__free(ecx)

esi[4] = ebx
esi[5] = 7
*(esi + (ebx << 1)) = 0
return neg.d(sbb.d(0, 0, 0 u< arg2))
