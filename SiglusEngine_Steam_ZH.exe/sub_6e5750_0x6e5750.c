// 函数: sub_6e5750
// 地址: 0x6e5750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0xc9f0)
int32_t eax = *(arg1 + 0xc9ec)

if (edx s< 1)
    eax = sub_6ec810(arg1 + 0xc9e4, 1)
    edx = *(arg1 + 0xc9f0)

*(arg1 + 0xc9ec) = eax * 2
*(arg1 + 0xc9f0) = edx - 1

if (eax s< 0)
    return 0xffffffe8

int32_t edx_1 = *(arg1 + 0xc9ec)
int32_t eax_2 = edx - 1

if (eax_2 s< 1)
    edx_1 = sub_6ec810(arg1 + 0xc9e4, 1)
    eax_2 = *(arg1 + 0xc9f0)

*(arg1 + 0xc9ec) = edx_1 * 2
*(arg1 + 0xc9f0) = eax_2 - 1
*(arg1 + 0x390) = (edx_1 u>> 0x1f).b
int32_t edx_3 = *(arg1 + 0xc9f0)
int32_t eax_4 = *(arg1 + 0xc9ec)

if (edx_3 s< 6)
    eax_4 = sub_6ec810(arg1 + 0xc9e4, 6)
    edx_3 = *(arg1 + 0xc9f0)

*(arg1 + 0xc9ec) = eax_4 << 6
*(arg1 + 0xc9f0) = edx_3 - 6
*(arg1 + 0x393) = (eax_4 u>> 0x1a).b
int32_t edx_4 = *(arg1 + 0xc9f0)
int32_t eax_6 = *(arg1 + 0xc9ec)

if (edx_4 s< 1)
    eax_6 = sub_6ec810(arg1 + 0xc9e4, 1)
    edx_4 = *(arg1 + 0xc9f0)

*(arg1 + 0xc9ec) = eax_6 * 2
*(arg1 + 0xc9f0) = edx_4 - 1

if (eax_6 s< 0)
    int32_t eax_7 = *(arg1 + 0xc9ec)
    int32_t edx_5 = edx_4 - 1
    
    if (edx_5 s< 6)
        eax_7 = sub_6ec810(arg1 + 0xc9e4, 6)
        edx_5 = *(arg1 + 0xc9f0)
    
    *(arg1 + 0xc9ec) = eax_7 << 6
    *(arg1 + 0xc9f0) = edx_5 - 6
    *(arg1 + 0x394) = (eax_7 u>> 0x1a).b
    int32_t edx_6 = *(arg1 + 0xc9f0)
    int32_t eax_9 = *(arg1 + 0xc9ec)
    
    if (edx_6 s< 1)
        eax_9 = sub_6ec810(arg1 + 0xc9e4, 1)
        edx_6 = *(arg1 + 0xc9f0)
    
    *(arg1 + 0xc9ec) = eax_9 * 2
    *(arg1 + 0xc9f0) = edx_6 - 1
    
    if (eax_9 s< 0)
        int32_t eax_10 = *(arg1 + 0xc9ec)
        int32_t edx_7 = edx_6 - 1
        
        if (edx_7 s< 6)
            eax_10 = sub_6ec810(arg1 + 0xc9e4, 6)
            edx_7 = *(arg1 + 0xc9f0)
        
        *(arg1 + 0xc9ec) = eax_10 << 6
        *(arg1 + 0xc9f0) = edx_7 - 6
        *(arg1 + 0x395) = (eax_10 u>> 0x1a).b
        *(arg1 + 0x392) = 3
    else
        *(arg1 + 0x392) = 2
else
    *(arg1 + 0x392) = 1

if (*(arg1 + 0x390) == 0)
    int32_t edx_8 = *(arg1 + 0xc9f0)
    int32_t eax_12 = *(arg1 + 0xc9ec)
    
    if (edx_8 s< 3)
        eax_12 = sub_6ec810(arg1 + 0xc9e4, 3)
        edx_8 = *(arg1 + 0xc9f0)
    
    *(arg1 + 0xc9ec) = eax_12 << 3
    *(arg1 + 0xc9f0) = edx_8 - 3
    
    if ((eax_12 & 0xe0000000) != 0)
        return 0xffffffe9

return 0
