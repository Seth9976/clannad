// 函数: sub_4ed130
// 地址: 0x4ed130
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3
int32_t ebx = *edi
int32_t result = sub_4ec600(arg2, ebx)

if (result.b == 0)
    int32_t ecx_1 = *edi
    void* esi_1 = edi[9]
    arg3 = esi_1
    
    if (ecx_1 u<= 0x3f)
        *(ecx_1 * 0x2d0 + 0x8fcb0c) = edi[0xa]
        *(ecx_1 * 0x2d0 + 0x8fcb10) = edi[0xb]
        *(ecx_1 * 0x3920 + 0xf8d324) = edi[0xc]
        *(ecx_1 * 0x2d0 + 0x8fcb14) = edi[0xd]
    
    int32_t eax_4 = *edi
    int32_t ecx_3 = edi[8]
    
    if (eax_4 u<= 0x3f)
        if (ecx_3 != 0xffffffff)
            int32_t ecx_5 = *(ecx_3 * 0x98 + 0x12c9340)
            
            if (ecx_5 == 0)
                *(eax_4 * 0x2d0 + &data_8fcb08) = 0xffffffff
                *(eax_4 * 0x2d0 + 0x8fcb04) = 0xffffffff
            else if (ecx_5 == 1 || ecx_5 == 2)
                sub_57d6a0(eax_4, *(ecx_3 * 0x98 + 0x12c9344), eax_4, *(ecx_3 * 0x98 + 0x12c9348))
            else if (ecx_5 == 3)
                *(eax_4 * 0x2d0 + &data_8fcb08) = 0xffffffff
                *(eax_4 * 0x2d0 + 0x8fcb04) = 0xffffffff
        else
            sub_542980(eax_4)
    
    uint32_t var_2c
    uint32_t var_28
    uint32_t var_24
    int32_t var_1c
    uint32_t var_18
    uint32_t var_14
    int32_t var_10
    int32_t eax_8 = sub_4ec690(&var_14, &arg3, esi_1, 0xffffffff, &var_14, &var_2c, &var_28, 
        &var_24, &var_1c, &var_18, &var_10)
    bool cond:0_1 = var_10 == 0
    edi[9] = arg3
    void* eax_9
    
    if (cond:0_1)
        if (*(ebx * 0x1d4 + 0x1090c0c) == 0)
            eax_9 = nullptr
        else if (sub_4cf900(var_14.w, eax_8) == 0)
            eax_9 = nullptr
        else
            void* const eax_12
            eax_12.b = eax_8 != 0
            eax_9 = eax_12 + 1
    else if (data_108febc == 0)
        eax_9 = nullptr
    else
        eax_9 = 1
    
    data_1af178c += 1
    arg3 = eax_9
    int32_t var_8_1 = 0
    uint32_t eax_13 = sub_57fa10(ebx, eax_9)
    
    if (eax_13 == 0)
        eax_13 = sub_57f8f0(eax_13, arg4.b, ebx, arg6)
        var_8_1 = 1
    else if (*esi_1 == 0x20 && ebx u<= 0x3f)
        eax_13.b = *(esi_1 + 1)
        void* esi_2 = esi_1 + 1
        int32_t ecx_11 = 0
        
        if (eax_13.b != 0)
            while (eax_13.b != 0x20)
                if (eax_13.b u>= 0x80 && (eax_13.b u< 0xa0 || eax_13.b u> 0xdf) && eax_13.b u< 0xfe)
                    break
                
                eax_13.b = *(esi_2 + 1)
                esi_2 += 1
                ecx_11 += 1
                
                if (eax_13.b == 0)
                    break
            
            if (ecx_11 s> 0)
                uint32_t edx_10 = *(ebx * 0x2d0 + 0x8fcb0c)
                void* edx_11 = arg3
                *(ebx * 0x2d0 + 0x8fcb0c) = (*(ebx * 0x3920 + 0xf8d2ec) s>> 1) * ecx_11 + edx_10
                bool cond:1_1 = sub_57fa10(ebx, edx_11) != 0
                eax_13 = edx_10
                *(ebx * 0x2d0 + 0x8fcb0c) = eax_13
                
                if (not(cond:1_1))
                    eax_13 = sub_57f8f0(eax_13, arg4.b, ebx, 1)
                    var_8_1 = 1
    
    int32_t esi_5 = var_10
    uint32_t edx_12 = var_14
    result = sub_4ec860(sub_4ec980(eax_13, edx_12, ebx, esi_5), var_8_1, ebx, edx_12, var_2c.w, 
        var_28.w, var_24.w, eax_8, esi_5, var_1c, var_18, arg4, arg5, arg6, 0, 0)
    
    if (*(ebx * 0x3920 + 0xf8d324) != 0)
        result = ebx * 0x1d4
        
        if (*(result + 0x1090c04) != 0)
            result = *(ebx * 0x2d0 + 0x8fcb0c)
            *(ebx * 0x2d0 + 0x8fcb14) = result
        
        *(ebx * 0x3920 + 0xf8d324) = 0
    
    int32_t edx_16 = *edi
    
    if (edx_16 u<= 0x3f)
        edi[0xa] = *(edx_16 * 0x2d0 + 0x8fcb0c)
        edi[0xb] = *(edx_16 * 0x2d0 + 0x8fcb10)
        edi[0xc] = *(edx_16 * 0x3920 + 0xf8d324)
        result = *(edx_16 * 0x2d0 + 0x8fcb14)
        edi[0xd] = result

return result
