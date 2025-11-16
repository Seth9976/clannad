// 函数: sub_430240
// 地址: 0x430240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

arg1.b = *(arg3 + 0x144)
int32_t var_c = arg1

if (arg1.b != 0)
    int32_t edi_1 = arg7
    void* esi_1 = arg10
    void* edx = arg8
    int32_t ebx_1 = arg9
    
    if (edi_1 != 0xffffffff || edx != 0xffffffff || ebx_1 != edx)
        if (edi_1 s<= ebx_1)
            goto label_430290
        
        int32_t eax = edi_1
        edi_1 = ebx_1
        ebx_1 = eax
        arg7 = edi_1
        arg9 = ebx_1
    label_430290:
        
        if (edx s> esi_1)
            void* eax_1 = edx
            edx = esi_1
            arg8 = edx
            esi_1 = eax_1
    else if (esi_1 != edx)
        goto label_430290
    
    int32_t var_10_1
    int32_t eax_2
    
    if (*(arg3 + 0x120) != 0)
        edi_1 = *(arg3 + 0x54)
        ebx_1 = *(arg3 + 0x5c)
        eax_2 = *(arg3 + 0x60)
        edx = *(arg3 + 0x58)
        var_10_1 = eax_2
        
        if (edi_1 s> ebx_1)
            int32_t eax_3 = edi_1
            edi_1 = ebx_1
            ebx_1 = eax_3
            eax_2 = *(arg3 + 0x60)
        
        if (edx s> eax_2)
            eax_2 = edx
            edx = *(arg3 + 0x60)
            var_10_1 = eax_2
        
        if (arg7 != 0xffffffff || arg8 != 0xffffffff || arg9 != 0xffffffff || esi_1 != 0xffffffff)
            if (edi_1 s< arg7)
                edi_1 = arg7
            
            if (edx s< arg8)
                edx = arg8
            
            if (ebx_1 s> arg9)
                ebx_1 = arg9
    
    if (*(arg3 + 0x120) != 0 && ((arg7 == 0xffffffff && arg8 == 0xffffffff && arg9 == 0xffffffff
            && esi_1 == 0xffffffff) || eax_2 s<= esi_1))
        arg1 = var_10_1
    else
        arg1 = esi_1
    
    if (edi_1 s<= ebx_1 && edx s<= arg1)
        int32_t var_10_2 = 0
        int32_t esi_3 = *(arg2 + 0x28)
        
        if (esi_3 s< 0)
            esi_3 = 0
        
        if (*(arg3 + 0xc0) == 0)
            if (*(arg3 + 0xec) != 0)
                var_10_2.b = var_c.b
                int32_t eax_7 = sub_426050(arg2, esi_3, *(arg2 + 4), arg4, arg5, arg6, 
                    *(arg3 + 0x44), *(arg3 + 0x48), *(arg3 + 0x4c), *(arg3 + 0x50), edi_1.b, edx, 
                    ebx_1, arg1, 0)
                return eax_7
            
            return sub_425ed0(arg2, esi_3, *(arg2 + 4), arg4, arg5, arg6, *(arg3 + 0x3c), 
                *(arg3 + 0x40), edi_1, edx, ebx_1, arg1, var_c, *(arg3 + 0xbc))
        
        if (*(arg3 + 0xec) == 0)
            int32_t eax_9 = sub_426240(arg2, esi_3, *(arg2 + 4), arg4, arg5, arg6, *(arg3 + 0x6c), 
                *(arg3 + 0x70), *(arg3 + 0x44), *(arg3 + 0x48), *(arg3 + 0x4c), *(arg3 + 0x50), 
                edi_1, edx, ebx_1, arg1, var_c.b, *(arg3 + 0xbc))
            return eax_9
        
        void* var_24_3 = arg3
        int32_t eax_10 = arg2
        return sub_426450(eax_10, esi_3, *(eax_10 + 4), arg4, arg5, arg6, *(arg3 + 0x6c), 
            *(arg3 + 0x70), *(arg3 + 0x7c), *(arg3 + 0x80), *(arg3 + 0x44), *(arg3 + 0x48), 
            *(arg3 + 0x4c), *(arg3 + 0x50), edi_1, edx, ebx_1, arg1, var_c.b)

return arg1
