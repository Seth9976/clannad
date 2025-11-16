// 函数: sub_4268c0
// 地址: 0x4268c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *arg3 != 0
*arg5 = 0xffffffff
*arg6 = 0xffffffff
*arg7 = 0xffffffff
*arg4 = 0xffffffff
int32_t* eax

if (cond:0)
    eax = *(arg3 + 0x14)
    
    if (eax == 0 || eax == 1)
    label_42695b:
        int32_t eax_8 = *(arg3 + 0xc) - 1
        *arg4 = 0
        *arg6 = eax_8
        int32_t eax_10 = *(arg3 + 0x10) - 1
        *arg5 = 0
        *arg7 = eax_10
        eax_10.b = 1
        return eax_10
    
    if (eax == 2)
        eax = *(arg3 + 4)
        
        if (arg2 s>= 0 && arg2 s< *eax)
            void* ecx = eax[arg2 * 2 + 1]
            
            if (ecx != 0 && eax[arg2 * 2 + 2] != 0)
                void* esi_1 = ecx + eax
                
                if (esi_1 != 0)
                    int32_t ecx_2 = neg.d(*(esi_1 + 0x14))
                    int32_t edx = *(esi_1 + 0x18)
                    int32_t eax_3 = *(esi_1 + 0x1c) - 1 + ecx_2
                    *arg4 = ecx_2
                    int32_t edx_1 = neg.d(edx)
                    *arg5 = edx_1
                    *arg6 = eax_3
                    *arg7 = *(esi_1 + 0x20) - 1 + edx_1
                    int32_t eax_6
                    eax_6.b = 1
                    return eax_6
    else if (eax == 3)
        goto label_42695b

eax.b = 0
return eax
