// 函数: sub_4a48e0
// 地址: 0x4a48e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg5
char* eax

if (edi == 0xc || edi == 0x12)
    arg5 = (&data_63ecb0)[edi]
    char* var_10
    char* var_c
    void* var_8
    int32_t eax_6
    void var_18
    
    if (arg3 s>= 0)
        eax_6 = sub_4a44b0(&arg5, arg3, edi, &arg5, &var_8, &var_c, &var_18, &var_10)
    
    if (arg3 s< 0 || eax_6 == 0)
        return sub_4a40a0(arg3, edi)
    
    eax = var_8
    
    if (*eax != 0)
        eax = var_c
        char* ebx_1 = *eax
        
        if (ebx_1 != 0)
            uint32_t eax_7 = sub_4cfc80(ebx_1)
            BOOL eax_8 = sub_4d6960(eax_7, arg4, arg2, eax_7, var_10)
            sub_4d1c30(eax_8, ebx_1, *arg4, eax_7)
            return eax_8
else
    if (edi != 0xa)
        return sub_4a3fe0()
    
    if (arg3 u> 0xf)
        return sub_4a40a0(arg3, 0xa)
    
    int32_t esi_1 = arg3 << 6
    eax = esi_1 + 0x715f3c
    
    if (*(esi_1 + 0x715f3c) != 0)
        return sub_4cfe90(eax, arg4, arg2, eax, "AVG_K")

return eax
