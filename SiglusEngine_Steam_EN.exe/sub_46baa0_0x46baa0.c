// 函数: sub_46baa0
// 地址: 0x46baa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg3
int32_t ebx = arg2
int32_t var_14 = edi

if (edi s> ebx)
    arg1 = edi
    var_14 = ebx
    edi = ebx
    ebx = arg1

if (edi s< 0)
    return 

int32_t ecx = data_7031bc

if (ebx s>= ecx)
    return 

int32_t i_1 = ebx - edi + 1

if (i_1 s<= 0)
    return 

int32_t* esi_2 = (arg4 + (edi << 1)) * 0x650 + 0x72d840
int32_t* var_18_1 = esi_2
int32_t i

do
    if (edi s>= 0 && edi s< ecx)
        int32_t edx_1 = data_70300c - 1
        int32_t eax_1 = esi_2[-1]
        int32_t ecx_2 = data_7030dc - 1
        int32_t var_8_1 = ecx_2
        int32_t var_1c_1
        int32_t var_c_1
        int32_t ecx_3
        
        if (eax_1 != 0xfff0bdc1 || *esi_2 != eax_1 || esi_2[1] != eax_1 || esi_2[2] != eax_1)
            ecx_3 = *esi_2
            var_c_1 = esi_2[1]
            var_1c_1 = esi_2[2]
        else
            eax_1 = neg.d(edx_1)
            var_1c_1 = var_8_1
            esi_2 = var_18_1
            ecx_3 = neg.d(ecx_2)
            var_c_1 = edx_1
        
        int32_t var_20_1
        int32_t var_10_2
        
        if (arg5 != 0xfff0bdc1 || arg6 != 0xfff0bdc1 || arg7 != 0xfff0bdc1 || arg8 != 0xfff0bdc1)
            var_10_2 = arg5
            var_20_1 = arg6
            edx_1 = arg7
            var_8_1 = arg8
        else
            var_10_2 = neg.d(edx_1)
            var_20_1 = neg.d(var_8_1)
            esi_2 = var_18_1
        
        int32_t eax_3 = eax_1 - var_10_2
        sub_466780(eax_3, arg9, &esi_2[0xe2], arg10, arg11, 0x71, 0, eax_3, ecx_3 - var_20_1, 
            var_c_1 - edx_1, var_1c_1 - var_8_1)
        edi = var_14
        ecx = data_7031bc
        esi_2[-1] = arg5
        *esi_2 = arg6
        esi_2[1] = arg7
        esi_2[2] = arg8
    
    edi += 1
    esi_2 = &esi_2[0x328]
    var_14 = edi
    var_18_1 = esi_2
    i = i_1
    i_1 -= 1
while (i != 1)
