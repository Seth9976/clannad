// 函数: sub_45b052
// 地址: 0x45b052
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t eax = arg1[1]
int32_t ecx = arg2
int32_t edi
int32_t var_14 = edi

if (ecx u> eax)
    int32_t esi_1
    
    if (eax == 0)
        arg2 = 0x10
        esi_1 = 0x10
    else
        esi_1 = eax * 2
        arg2 = esi_1
    
    if (esi_1 u< ecx)
        int32_t eax_1
        
        do
            eax_1 = esi_1 * 2
            arg2 = eax_1
            esi_1 = eax_1
        while (eax_1 u< ecx)
    
    int32_t eax_4 = sub_745f3f(esi_1 * 0xc)
    
    if (eax_4 == 0)
        return 0x8007000e
    
    if (arg3 == 0)
        int32_t ecx_3 = arg1[1] * 0xc
        int32_t esi_3
        int32_t edi_2
        edi_2, esi_3 = __builtin_memcpy(eax_4, *arg1, ecx_3 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_3, ecx_3 & 3)
        esi_1 = arg2
    
    j__free(*arg1)
    *arg1 = eax_4
    arg1[1] = esi_1

return 0
