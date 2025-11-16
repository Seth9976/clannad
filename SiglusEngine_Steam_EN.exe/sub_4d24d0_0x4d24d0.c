// 函数: sub_4d24d0
// 地址: 0x4d24d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result
int32_t ecx_1
int32_t ebx
int32_t esi
void* edi

if (*arg3 != 0)
    int32_t eax_5 = *arg2
    esi = 0
    ebx = *eax_5
    int32_t* eax_6 = eax_5 + 4
    edi = (ebx << 3) + 4
    
    if (ebx s> 0)
        while (*eax_6 != 0)
            int32_t ecx = eax_6[1]
            eax_6 = &eax_6[2]
            
            if (ecx s> 0)
                edi += ecx
            
            esi += 1
            
            if (esi s>= ebx)
                return 0
        
        ecx_1 = arg6
        void* result_1 = edi + ecx_1
        result = result_1
        
        if (ecx_1 == 0)
            goto label_4d2565
        
        sub_4d6ae0(result_1 + 1, arg2, arg3, result_1 + 1)
        goto label_4d2562
else
    ebx = arg4
    result = arg6 + (ebx << 3) + 4
    sub_4d6960(arg6 + (ebx << 3) + 5, arg2, arg3, arg6 + (ebx << 3) + 5, arg7)
    edi = (ebx << 3) + 4
    esi = 0
    **arg2 = ebx
label_4d2562:
    ecx_1 = arg6
label_4d2565:
    
    if (esi s< ebx)
        int32_t eax_9 = *arg2
        *(eax_9 + (esi << 3) + 4) = edi
        int32_t eax_10 = eax_9 + (esi << 3)
        
        if (arg5 == 0 || ecx_1 == 0)
            *(eax_10 + 8) = 0
            return result
        
        *(eax_10 + 8) = ecx_1
        sub_4d1c30(eax_10, arg5, *arg2 + edi, ecx_1)
        return result
return 0
