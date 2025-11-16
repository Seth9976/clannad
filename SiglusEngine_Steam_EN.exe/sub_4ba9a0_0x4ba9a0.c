// 函数: sub_4ba9a0
// 地址: 0x4ba9a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x1c)

if (ecx != 0)
    *(arg1 + 0x20) = modu.dp.d(0:(*(arg1 + 0x20)), ecx)
else
    *(arg1 + 0x20) = ecx

int32_t eax_3 = *(arg1 + 0x24)

if (eax_3 u< *(arg1 + 0x28))
    *(arg1 + 0x24) = eax_3 + 1
    return 0

uint32_t edi = *(arg1 + 0x18)

if (modu.dp.d(0:(sub_4d18c0(2)), 0x64) s>= 0x32)
    int32_t eax_8 = sub_4d18c0(2)
    int32_t edx_5 = 0
    
    if (edi != 0)
        edi = modu.dp.d(edx_5:eax_8, 5)
        int32_t ebx_2 = sub_4d18c0(2) & 1
        
        if (modu.dp.d(0:(sub_4d18c0(2)), 0x64) s< 0x50)
            edi = 0
        else if (ebx_2 == 0)
            edi = neg.d(edi)
    else
        edi = modu.dp.d(edx_5:eax_8, 5)
        
        if ((sub_4d18c0(2) & 1) == 0)
            edi = neg.d(edi)

if (*(arg1 + 0x18) == edi)
    *(arg1 + 0x24) += 1
    return 0

*(arg1 + 0x18) = edi
*(arg1 + 0x24) = 0

if (edi + 4 u<= 8)
    switch (edi)
        case 0, 4, 0xfffffffc
            *(arg1 + 0x28) = 0xa
        case 1, 0xffffffff
            *(arg1 + 0x28) = 4
        case 2, 0xfffffffe
            *(arg1 + 0x28) = 6
        case 3, 0xfffffffd
            *(arg1 + 0x28) = 8

return 1
