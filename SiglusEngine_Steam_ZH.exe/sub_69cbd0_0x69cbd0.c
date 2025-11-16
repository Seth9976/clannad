// 函数: sub_69cbd0
// 地址: 0x69cbd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = __aligned_offset_recalloc(*arg1, arg1[2] + 1, 4)

if (eax_2 != 0)
    *arg1 = eax_2
    int32_t eax_6 = __aligned_offset_recalloc(arg1[1], arg1[2] + 1, 4)
    
    if (eax_6 != 0)
        void* ecx = *arg1
        arg1[1] = eax_6
        int32_t edx = arg1[2] << 2
        
        if (ecx != neg.d(edx))
            *(ecx + edx) = *arg2
        
        void* ecx_2 = arg1[1]
        
        if (ecx_2 != neg.d(edx))
            *(ecx_2 + edx) = *arg3
        
        arg1[2] += 1
        return 1

return 0
