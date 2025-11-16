// 函数: sub_45aed6
// 地址: 0x45aed6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
uint32_t eax = arg1[1]
uint32_t ecx = arg2
int32_t edi
int32_t var_10 = edi

if (ecx u> eax)
    if (eax == 0)
        arg2 = 0x10
        goto label_45aeff
    
    while (true)
        arg2 = eax * 2
    label_45aeff:
        
        if (arg2 u>= ecx)
            break
        
        eax = arg2
    
    int32_t eax_2 = sub_745f3f(arg2)
    
    if (eax_2 == 0)
        return 0x8007000e
    
    if (arg3 == 0)
        int32_t ecx_2 = arg1[1]
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(eax_2, *arg1, ecx_2 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, ecx_2 & 3)
    
    j__free(*arg1)
    *arg1 = eax_2
    arg1[1] = arg2

return 0
