// 函数: sub_4baae0
// 地址: 0x4baae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x38)

if (ecx != 0)
    *(arg1 + 0x3c) = modu.dp.d(0:(*(arg1 + 0x3c)), ecx)
else
    *(arg1 + 0x3c) = ecx

int32_t eax_3 = *(arg1 + 0x40)

if (eax_3 u< 2 || eax_3 u< *(arg1 + 0x44))
    *(arg1 + 0x40) = eax_3 + 1
    return 0

uint32_t i = *(arg1 + 0x34)

if (i == 0 || modu.dp.d(0:(sub_4d18c0(2)), 0x64) s>= 0x32)
    do
        i = modu.dp.d(0:(sub_4d18c0(2)), 5)
        
        if ((sub_4d18c0(2) & 1) == 0)
            i = neg.d(i)
    while (i == 0)

if (*(arg1 + 0x34) == i)
    *(arg1 + 0x40) += 1
    return 0

*(arg1 + 0x34) = i
*(arg1 + 0x40) = 0

if (i + 4 u<= 8)
    switch (i)
        case 0, 1, 0xffffffff
            *(arg1 + 0x44) = 4
        case 2, 0xfffffffe
            *(arg1 + 0x44) = 8
        case 3, 0xfffffffd
            *(arg1 + 0x44) = 0xc
        case 4, 0xfffffffc
            *(arg1 + 0x44) = 0x10

return 1
