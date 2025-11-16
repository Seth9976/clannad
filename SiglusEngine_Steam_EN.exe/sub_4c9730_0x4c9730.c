// 函数: sub_4c9730
// 地址: 0x4c9730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg6
int32_t* edi = arg5
*edi = 0
*ebx = 0
int32_t var_c
void* var_8
char result = sub_4c95f0(arg2, arg2, arg3, &var_8, &var_c)

if (result == 0)
    return result

int32_t edx_1 = var_c
int32_t ecx = 0
void* eax_1 = var_8
arg6 = nullptr
arg5 = 0

if (edx_1 s> 0)
    while (*(eax_1 + 8) != arg4)
        ecx += 1
        eax_1 += 0xc
        
        if (ecx s>= edx_1)
            return sub_4d6c40(&arg6, &arg5)
    
    char* eax_6 = sub_4c4a00(&arg5, &arg6, arg3, &arg5, "NWKDATA", *(eax_1 + 4) + arg2, *eax_1, 
        0xffffffff, 0xffffffff)
    
    if (arg6 != 0)
        sub_4bde10(eax_6, edi, arg5, ebx, arg7, arg8, arg9, arg10)

return sub_4d6c40(&arg6, &arg5)
