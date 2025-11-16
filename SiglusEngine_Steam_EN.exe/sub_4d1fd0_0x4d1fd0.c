// 函数: sub_4d1fd0
// 地址: 0x4d1fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1[8]
arg1[7] = arg2

if (edi == 0)
    int32_t eax = *arg1
    arg1[1] = eax
    return eax

int32_t eax_2 = zx.d(arg1[2].b) - 1

if (eax_2 u> 3)
    int32_t eax_9 = *arg1
    
    if (arg2 u< edi)
        int32_t eax_10 = eax_9 - arg1[3]
        double xmm0_3 = _mm_cvtepi32_pd(zx.q(arg2)) f+ *((arg2 u>> 0x1f << 3) + &data_624a10)
        eax_9 = int.d(_mm_cvtepi32_pd(zx.q(eax_10)) * xmm0_3
            / (_mm_cvtepi32_pd(zx.q(edi)) f+ *((edi u>> 0x1f << 3) + &data_624a10))) + arg1[3]
    
    arg1[1] = eax_9
    return eax_9

switch (eax_2)
    case 0
        int32_t eax_3 = arg1[4]
        
        if (*arg1 != eax_3)
            *arg1 = eax_3
        
        return sub_4d1cf0(arg1)
    case 1
        int32_t ecx = *arg1
        int32_t eax_5 = arg1[4]
        
        if (ecx != eax_5 && ecx != arg1[5])
            *arg1 = eax_5
        
        return sub_4d1d70(arg1)
    case 2
        return sub_4d1e20(arg1)
    case 3
        return sub_4d1f10(arg1)
