// 函数: sub_49eecd
// 地址: 0x49eecd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg2

if (eax == 0)
    return 0x80004005

*arg1 = *eax
int32_t ecx_1 = eax[1]

if (ecx_1 u> arg1[1])
    if (ecx_1 u> 8)
        int32_t eax_1 = sub_49ec06(ecx_1)
        arg1[2] = eax_1
        
        if (eax_1 == 0)
            return 0x8007000e
        
        eax = arg2
    else
        arg1[2] = &arg1[0x10]

int32_t ecx_3 = eax[1]
arg1[1] = ecx_3
int32_t edi
int32_t var_10_1 = edi
__builtin_memcpy(arg1[2], eax[2], ecx_3 << 2)
int32_t ecx_4 = eax[3]

if (ecx_4 u<= arg1[3])
    goto label_49ef52

int32_t result

if (ecx_4 u> 4)
    int32_t eax_2 = sub_49ec06(ecx_4)
    arg1[4] = eax_2
    
    if (eax_2 != 0)
        eax = arg2
        goto label_49ef52
    
    result = 0x8007000e
else
    arg1[4] = &arg1[0x18]
label_49ef52:
    int32_t ecx_6 = eax[3]
    int32_t edi_2 = arg1[4]
    arg1[3] = ecx_6
    __builtin_memcpy(edi_2, eax[4], ecx_6 << 2)
    arg1[9] = eax[9]
    arg1[0xa] = eax[0xa]
    arg1[0xc] = eax[0xc]
    arg1[0xf] = eax[0xf]
    result = 0

return result
