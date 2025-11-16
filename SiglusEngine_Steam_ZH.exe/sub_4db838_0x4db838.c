// 函数: sub_4db838
// 地址: 0x4db838
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t ebx
int32_t esi_1

if (arg3 == 0)
    int32_t edi_1 = *(arg2 + 0x28)
    int32_t ecx_1 = edi_1 & 7
    uint32_t ebx_2 = *(arg2 + 0x24) u>> ecx_1.b
    int32_t i
    
    for (i = edi_1 - ecx_1; i u< 0x10; i += 8)
        int32_t esi_2 = *(arg2 + 0x18)
        int32_t ecx_2 = *(arg2 + 0x14)
        char ecx_4
        
        if (esi_2 u>= ecx_2)
            if (esi_2 != ecx_2)
                *(arg2 + 4) = 1
            
            ecx_4 = 0
        else
            ecx_4 = (*(arg2 + 8))[esi_2]
            *(arg2 + 0x18) = esi_2 + 1
        
        ebx_2 |= zx.d(ecx_4) << i.b
    
    ebx = ebx_2 & 0xffff
    
    if (*(arg2 + 4) != 0 || i != 0x10)
        return 1
    
    int32_t esi_6 = *(arg2 + 8)
    *(arg2 + 0x28) = 0
    *(arg2 + 0x24) = 0
    int32_t eax_1 = *(arg2 + 0x18)
    esi_1 = esi_6 + eax_1
    *(arg2 + 0x18) = eax_1 + ebx
else
    esi_1 = *(arg2 + 0x34)
    ebx = *(arg2 + 0x30)
    *(arg2 + 0x2c) = 0

int32_t ecx_6 = *(arg2 + 0x1c)
int32_t edi_3 = *(arg2 + 0xc)
arg3.d = esi_1

if (ebx u> ecx_6)
    int32_t esi_8
    int32_t edi_5
    edi_5, esi_8 = __builtin_memcpy(edi_3, esi_1, ecx_6 u>> 2 << 2)
    __builtin_memcpy(edi_5, esi_8, ecx_6 & 3)
    int32_t eax_5 = *(arg2 + 0x1c)
    *(arg2 + 0xc) += eax_5
    *(arg2 + 0x1c) = 0
    *(arg2 + 0x2c) = 1
    *(arg2 + 0x30) = ebx - eax_5
    *(arg2 + 0x34) = eax_5 + arg3.d
else
    *(arg2 + 0x1c) = ecx_6 - ebx
    int32_t esi_7
    int32_t edi_4
    edi_4, esi_7 = __builtin_memcpy(edi_3, esi_1, ebx u>> 2 << 2)
    __builtin_memcpy(edi_4, esi_7, ebx & 3)
    *(arg2 + 0xc) += ebx

return 0
