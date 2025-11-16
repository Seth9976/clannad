// 函数: sub_6d7ff0
// 地址: 0x6d7ff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1

if (esi == 0)
    return 

if ((*(esi + 0x7c) & 0x100000) != 0)
    arg1 = *(esi + 0x68)
    
    if (arg1 != 0)
        arg1(esi, arg2, *(esi + 0x124) + 1)

if ((*(esi + 0x7c) & 0x8000) != 0)
    int32_t eax_6 = not.d(*(esi + 0x78) u>> 7) & 1
    sub_6cf370(eax_6, *(esi + 0x124) + 1, arg2, eax_6)

if ((*(esi + 0x7c) & 0x10000) != 0)
    sub_6cf310(arg2, *(esi + 0x124) + 1)

if ((*(esi + 0x7c) & 4) != 0)
    uint32_t eax_7 = zx.d(*(esi + 0x150))
    sub_6d7ae0(eax_7, *(esi + 0x124) + 1, arg2, eax_7)

char eax = (*(esi + 0x7c)).b

if ((eax & 0x10) != 0 && *(arg2 + 9) == 0x10)
    void* edx_7 = *(esi + 0x124) + 1
    int32_t i_1 = zx.d(*(arg2 + 0xa)) * *arg2
    
    if (i_1 != 0)
        int32_t i
        
        do
            arg1.b = *edx_7
            edx_7 += 2
            *(edx_7 - 2) = *(edx_7 - 1)
            *(edx_7 - 1) = arg1.b
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax = (*(esi + 0x7c)).b

if ((eax & 8) != 0)
    sub_6d7c00(esi + 0x1a5, *(esi + 0x124) + 1, arg2, esi + 0x1a5)

if ((*(esi + 0x7c) & 0x20000) != 0)
    sub_6d7e70(arg2, *(esi + 0x124) + 1)

if ((*(esi + 0x7c) & 0x80000) != 0)
    sub_6d7f60(arg2, *(esi + 0x124) + 1)

if ((*(esi + 0x7c) & 1) != 0)
    sub_6cf4f0(arg2, *(esi + 0x124) + 1)

if ((*(esi + 0x7c) & 0x20) != 0)
    return sub_6cf230(arg2, *(esi + 0x124) + 1) __tailcall
