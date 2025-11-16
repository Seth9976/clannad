// 函数: sub_46b840
// 地址: 0x46b840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2
int32_t edi = arg3

if (edi s> ebx)
    arg1 = edi
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

int32_t* esi_2 = (arg4 + (edi << 1)) * 0x650 + 0x72d830
int32_t* var_c_1 = esi_2
int32_t ecx_1 = ecx
int32_t i

do
    if (edi s>= 0 && edi s< ecx_1)
        int32_t eax_1 = esi_2[-1]
        int32_t var_18_1
        int32_t var_8_1
        int32_t ecx_5
        
        if (eax_1 != 0xffffffff || *esi_2 != eax_1 || esi_2[1] != eax_1 || esi_2[2] != eax_1)
            var_8_1 = *esi_2
            var_18_1 = esi_2[1]
            ecx_5 = esi_2[2]
        else
            eax_1 = 0
            var_8_1 = 0
            var_18_1 = data_70300c - 1
            ecx_5 = data_7030dc - 1
        
        int32_t edx = arg6
        int32_t ecx_8 = arg5
        int32_t var_1c_1
        int32_t esi_6
        
        if (ecx_8 != 0xffffffff || edx != ecx_8 || arg7 != ecx_8 || arg8 != ecx_8)
            var_1c_1 = arg7
            esi_6 = arg8
        else
            ecx_8 = 0
            edx = 0
            var_1c_1 = data_70300c - 1
            esi_6 = data_7030dc - 1
        
        int32_t eax_2 = eax_1 - ecx_8
        esi_2 = var_c_1
        sub_466780(eax_2, arg9, &esi_2[0xe6], arg10, arg11, 0x70, 0, eax_2, var_8_1 - edx, 
            var_18_1 - var_1c_1, ecx_5 - esi_6)
        ecx_1 = data_7031bc
        esi_2[-1] = arg5
        *esi_2 = arg6
        esi_2[1] = arg7
        esi_2[2] = arg8
    
    esi_2 = &esi_2[0x328]
    edi += 1
    var_c_1 = esi_2
    i = i_1
    i_1 -= 1
while (i != 1)
