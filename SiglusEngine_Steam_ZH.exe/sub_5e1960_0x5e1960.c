// 函数: sub_5e1960
// 地址: 0x5e1960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = *arg1

if (result == 1 || result == 2)
    int32_t ecx_2 = arg2[3] + *(data_bac510 + 0xa2ebb0)
    int32_t eax_3 = int.d(fconvert.t(arg2[5]))
    int32_t ebx_1 = int.d(fconvert.t(arg2[6]))
    int32_t var_30_1 = arg6 + arg1[0xc] + ebx_1
    int32_t var_2c_1 = arg1[0xd] + eax_3 + arg5
    int32_t* ecx_6 = data_bac4e8
    int32_t var_28_1 = arg6 + arg1[0xe] + ebx_1
    int128_t xmm0_1 = (arg5 + arg1[0xb] + eax_3).o
    arg1[0x1b] = arg2[2]
    *(arg1 + 0x40) = xmm0_1
    arg1[0x1c] = ecx_2
    int32_t edx_3 = *ecx_6
    int32_t eax_11
    
    if (edx_3 == 0xffffffff)
        eax_11 = 0
    else
        int32_t eax_10 = arg1[0xf]
        
        if (edx_3 != eax_10)
            eax_11 = 0
        else if (ecx_6[3] == 1)
            eax_11 = 1
        else if (edx_3 != eax_10 || ecx_6[3] != 2)
            eax_11 = 0
        else
            eax_11 = 2
    
    int32_t ecx_7 = 0
    
    if (eax_11 == 0)
        ecx_7 = 0x40
    
    int32_t var_14_2 = 0
    result = (arg1[0x21] - arg1[0x20]) s/ 0x3b4
    
    if (result s> 0)
        int32_t edx_7 = 0
        int32_t var_c_1 = 0
        
        while (true)
            sub_5db450(arg1[0x20] + edx_7, arg2, ecx_7, 0, 0, 0, 0, arg3, arg4, arg1[1] + arg5, 
                arg1[2] + arg6)
            var_14_2 += 1
            var_c_1 += 0x3b4
            result = (arg1[0x21] - arg1[0x20]) s/ 0x3b4
            
            if (var_14_2 s>= result)
                break
            
            edx_7 = var_c_1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
