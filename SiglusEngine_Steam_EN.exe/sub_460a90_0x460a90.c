// 函数: sub_460a90
// 地址: 0x460a90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg10
*(ebx + 0x2b64) = 0xffffffff
void* eax_19

if (arg3 == 0)
    int32_t ecx_7 = data_1af4e90
    int32_t ecx_8 = ecx_7 - arg2
    
    if (ecx_7 - arg2 s< 0)
        ecx_8 += 0x3e8
    
    *(arg9 + 0x270) = zx.d(*(arg8 * 0x3e8 + ecx_8 + 0x1af4e98))
    int32_t esi_2 = *(arg12 + 4)
    int32_t* esi_3
    
    if (esi_2 != 0)
        esi_3 = *(esi_2 + (ecx_8 << 3) + 4)
    
    if (esi_2 == 0 || esi_3 == 0)
        int32_t eax_16 = sub_576270(ebx)
        *(ebx + 0xa8) = 0
        return eax_16
    
    uint32_t var_24_5 = zx.d(esi_3[3].b)
    char* ecx_10
    eax_19, ecx_10 = sub_460a10(&esi_3[5], arg5, ecx_8, arg6, arg7, arg8, arg9, ebx, arg11, 
        &esi_3[5], *esi_3, esi_3[1], (esi_3[2]).b)
    
    if (arg4 != 0)
        int32_t var_24_6 = esi_3[4]
        char* var_28_6 = ecx_10
        return sub_4608d0(eax_19, arg8, ecx_10)
else
    *(arg9 + 0x270) = *(ebx + 0x3888)
    int32_t eax_1
    eax_1.b = *(ebx + 0x3878)
    void* edi = *(ebx + 0x3874)
    arg10.b = eax_1.b
    int32_t eax_2 = *(ebx + 0x3868)
    void* eax_3 = *(ebx + 0x3864)
    data_135702c = *(ebx + 0x38b8)
    int32_t eax_5 = *(ebx + 0x38bc)
    data_1357028 = eax_5
    char* ecx_3 = sub_460400(sub_45fec0(eax_5, arg9, arg8, ebx, arg11, ebx + 0x3884), arg6, arg5, 
        arg7, arg8, ebx, arg11, ebx + 0x3884, edi, arg10.b)
    
    if (eax_3 != 0)
        ecx_3 = sub_460180(eax_3, arg6, arg5, arg7, arg8, ebx, arg11, eax_3, eax_2)
    
    eax_19 = arg4
    
    if (eax_19 != 0)
        if (eax_19 == 2)
            void* var_24_3 = arg9 + 0x6c
            return sub_460700(arg9 + 0x6c, arg8, arg2, ecx_3)
        
        int32_t eax_11 = *(ebx + 0x3880)
        int32_t var_24_4 = eax_11
        return sub_460700(eax_11, arg8, arg2, ecx_3)

return eax_19
