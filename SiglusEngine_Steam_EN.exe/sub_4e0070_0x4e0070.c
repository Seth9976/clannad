// 函数: sub_4e0070
// 地址: 0x4e0070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg5
int32_t eax_9

if (ebx != 3)
    *(arg1 + 8) = arg2
    eax_9 = arg3
else
    int32_t* i = arg2
    int32_t eax_2 = (arg3 - i) s>> 2
    int32_t var_14_1 = 0x640fa8
    int32_t ecx
    ecx.b = mulu.dp.d(eax_2, 4) u>> 0x20 != 0
    int32_t var_18_1 = neg.d(ecx) | (eax_2 * 4)
    int32_t eax_4 = sub_5f1a14()
    *(arg1 + 8) = eax_4
    *(arg1 + 0x10) = eax_4
    
    if (eax_4 == 0)
        return 0x8007000e
    
    for (; i != arg3; i = &i[1])
        int32_t* eax_6 = *(arg1 + 0x10)
        
        if (eax_6 == 0 || i == 0)
            sub_4d9320(0x80004005)
            noreturn
        
        int32_t* ecx_3 = *i
        *eax_6 = ecx_3
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 4))(ecx_3)
        
        *(arg1 + 0x10) += 4
    
    ebx = arg5
    eax_9 = *(arg1 + 8) + (eax_2 << 2)

*(arg1 + 0xc) = eax_9

if (*(arg1 + 4) != arg4)
    if (arg4 != 0)
        (*(*arg4 + 4))(arg4)
    
    int32_t* eax_12 = *(arg1 + 4)
    *(arg1 + 4) = arg4
    
    if (eax_12 != 0)
        (*(*eax_12 + 8))(eax_12)

*(arg1 + 0x10) = *(arg1 + 8)
*(arg1 + 0x14) = ebx
return 0
