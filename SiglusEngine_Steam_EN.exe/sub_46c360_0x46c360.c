// 函数: sub_46c360
// 地址: 0x46c360
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2
int32_t edi = arg3

if (edi s> ebx)
    arg1 = edi
    edi = ebx
    ebx = arg1

if (edi s< 0)
    return 

int32_t edx = data_7031bc

if (ebx s>= edx)
    return 

int32_t i_1 = ebx - edi + 1

if (i_1 s<= 0)
    return 

int32_t eax_1 = arg4 + (edi << 1)
arg1 = arg9
void* ecx_1 = eax_1 * 0x7a0 + &data_98c1f8
void* var_18_1 = ecx_1
int32_t* esi_2 = eax_1 * 0x650 + 0x72d754
int32_t i

do
    int32_t var_c_1 = arg1
    
    if (edi s>= 0 && edi s< edx)
        int32_t edx_1
        
        if (arg5 s>= 4)
            edx_1 = arg5
            
            if (arg5 s> 0x40)
                edx_1 = 0x40
        else
            edx_1 = 4
        
        if (arg1 s< 0 || arg1 s>= 0x100)
            var_c_1 = 0
        
        int32_t ecx_3
        
        if (arg10 s>= 0xffffffff)
            ecx_3 = arg10
            
            if (arg10 s>= 0x100)
                ecx_3 = 0xff
        else
            ecx_3 = 0xffffffff
        
        int32_t eax_3 = arg11
        
        if (eax_3 s< 0xffffffff)
            eax_3 = 0
        else if (eax_3 s> 2)
            eax_3 = 0
        
        int32_t ecx_8
        
        if (esi_2[-1] == edx_1 && *esi_2 == arg6 && esi_2[1] == arg7 && esi_2[2] == arg8)
            ecx_8 = ecx_3
        
        if (esi_2[-1] != edx_1 || *esi_2 != arg6 || esi_2[1] != arg7 || esi_2[2] != arg8
                || esi_2[3] != var_c_1 || esi_2[4] != ecx_8 || esi_2[5] != eax_3)
            sub_467910(edi, arg4)
            ecx_8 = ecx_3
        
        esi_2[-1] = edx_1
        *esi_2 = arg6
        esi_2[1] = arg7
        esi_2[4] = ecx_8
        ecx_1 = var_18_1
        esi_2[2] = arg8
        esi_2[3] = var_c_1
        *ecx_1 += 1
        edx = data_7031bc
        esi_2[5] = eax_3
        arg1 = arg9
    
    ecx_1 += 0xf40
    edi += 1
    esi_2 = &esi_2[0x328]
    var_18_1 = ecx_1
    i = i_1
    i_1 -= 1
while (i != 1)
