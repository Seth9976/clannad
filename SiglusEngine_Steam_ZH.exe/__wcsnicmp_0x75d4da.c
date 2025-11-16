// 函数: __wcsnicmp
// 地址: 0x75d4da
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (data_b94eec != 0)
    return __wcsnicmp_l(arg1, arg2, arg3, nullptr)

int32_t edi_1 = arg3

if (edi_1 == 0)
    return 0

if (arg1 != 0)
    int16_t* ecx_1 = arg2
    
    if (ecx_1 != 0)
        int16_t* edx_2 = arg1 - ecx_1
        int32_t var_8_1 = 0x5a
        int16_t eax_5
        int16_t esi_1
        
        do
            int16_t eax_2 = *(edx_2 + ecx_1)
            
            if (eax_2 u< 0x41 || eax_2 u> 0x5a)
                esi_1 = eax_2
            else
                esi_1 = eax_2 + 0x20
            
            eax_5 = *ecx_1
            
            if (eax_5 u>= 0x41 && eax_5 u<= 0x5a)
                eax_5 += 0x20
            
            ecx_1 = &ecx_1[1]
            int32_t temp0_1 = edi_1
            edi_1 -= 1
            
            if (temp0_1 == 1)
                break
            
            if (esi_1 == 0)
                break
        while (esi_1 == eax_5)
        
        return zx.d(esi_1) - zx.d(eax_5)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x7fffffff
