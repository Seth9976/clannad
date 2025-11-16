// 函数: sub_425be0
// 地址: 0x425be0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3

if (arg3 u<= 0x1ff)
    void* eax = sub_425430(arg3, 1)
    void* esi_1 = arg3 * 0x74
    
    if (*(esi_1 + 0x13747d0) == 0)
        *(esi_1 + 0x13747d0) = 1
        eax = sub_423710(esi_1 + 0x13747b0)
        
        if (eax s> 0)
            *(esi_1 + 0x13747cc) = eax
    
    if (*(esi_1 + 0x13747b0) != 0)
        int32_t var_14 = arg10
        int32_t var_18 = arg9
        int32_t var_1c = arg8
        return sub_427fb0(eax, arg2, esi_1 + 0x13747b0, arg4, arg5, arg6, arg7)

return 0
