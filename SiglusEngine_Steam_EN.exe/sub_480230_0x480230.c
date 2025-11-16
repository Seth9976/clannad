// 函数: sub_480230
// 地址: 0x480230
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t var_8_1 = arg2

if (arg3 s>= 0 && arg3 s< data_7031bc)
    enum MESSAGEBOX_RESULT esi_1 = arg5
    arg1 = arg2 + (arg3 << 1)
    enum MESSAGEBOX_RESULT ecx = arg4
    void* ebx_2 = arg1 * 0x7a0 + &data_98c178
    
    if (ecx s> esi_1)
        arg1 = ecx
        ecx = esi_1
        esi_1 = arg1
    
    if (*(ebx_2 + 8) != 0)
        arg1 = *ebx_2
        
        if (arg1 s> 0 && ecx s>= 0 && esi_1 s< arg1)
            int32_t i_1 = esi_1 - ecx + 1
            
            if (i_1 s<= 0)
                return arg1
            
            enum MESSAGEBOX_RESULT ecx_1 = ecx - arg9
            arg4 = ecx_1
            int32_t ebx_4 = arg9
            enum MESSAGEBOX_RESULT eax_1
            int32_t i
            
            do
                enum MESSAGEBOX_RESULT eax = ecx_1 + ebx_4
                eax_1 = sub_480190(eax, arg2, arg3, eax, arg6, arg7, arg8, ebx_4)
                ecx_1 = arg4
                arg2 = var_8_1
                ebx_4 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
            return eax_1

return sub_476410(arg1, arg2, arg3, 0)
