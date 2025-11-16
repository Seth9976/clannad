// 函数: sub_4013c0
// 地址: 0x4013c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3
int32_t edi = arg4

if (edi s>= 0 && (edi s> 0 || ebx u> 0))
    int32_t eax_1 = arg1[2]
    int32_t temp2_1 = ebx
    ebx += eax_1
    edi = adc.d(edi, arg1[3], temp2_1 + eax_1 u< temp2_1)

while (true)
    if (edi s< 0 || (edi s<= 0 && ebx u<= 0))
    label_401407:
        void* eax_3 = sub_410310(&arg1[6], arg2)
        
        if (eax_3 s>= 0)
            if (eax_3 != 0)
                int32_t result = arg1[2]
                int32_t eax_11
                int32_t edx_8
                edx_8:eax_11 = sx.q(eax_3)
                int32_t edx_9 = adc.d(edx_8, arg1[3], eax_11 + result u< eax_11)
                arg1[2] = eax_11 + result
                arg1[3] = edx_9
                return result
            
            if ((ebx | edi) != 0)
                int32_t eax_7 = sub_401480(arg1)
                
                if (eax_7 == 0)
                    return 0xfffffffe
                
                if (eax_7 s< 0)
                    break
                
                continue
        else
            int32_t ecx_3 = arg1[2]
            int32_t eax_4
            int32_t edx_2
            edx_2:eax_4 = sx.q(eax_3)
            arg1[2] = ecx_3 - eax_4
            arg1[3] = sbb.d(arg1[3], edx_2, ecx_3 u< eax_4)
            continue
    else
        int32_t edx_1 = arg1[3]
        
        if (edx_1 s<= edi && (edx_1 s< edi || arg1[2] u< ebx))
            goto label_401407
    
    return 0xffffffff

return 0xffffff80
