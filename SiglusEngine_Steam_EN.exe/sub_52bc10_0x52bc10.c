// 函数: sub_52bc10
// 地址: 0x52bc10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_703678
data_1af1794 = 1
data_13701d8 = 0
data_1af17b4 = 0
data_70367c = 0
int32_t edi = data_1bfdd30

if (eax == 1)
    eax = 2

data_703678 = eax
int32_t i_1

if (edi != 0xcf)
    i_1 = 1
else
    sub_542980(*(arg1 + 0x13b3c))
    eax = *(arg1 + 0x13b3c)
    
    if (eax != 0xffffffff)
        if (eax u<= 0x3f)
            eax *= 0x2d0
            *(eax + &data_8fcb20) = 0
        
        i_1 = 0
    else
        eax = &data_8fcb20
        i_1 = 0x40
        int32_t i
        
        do
            *eax = 0
            eax += 0x2d0
            i = i_1
            i_1 -= 1
        while (i != 1)

int32_t edx = *(arg1 + 0x13b3c)

if (edx u> 0x3f)
    goto label_52bd1c

eax = data_7037c0

if (i_1 == 0)
    eax = data_7037bc

if (eax u> 0x1f)
label_52bd07:
    
    if (edx u> 0x3f)
        goto label_52bd1c
    
    eax = edx * 0x3920
    *(eax + 0xf8d320) = 1
label_52bd1c:
    edx = *(arg1 + 0x13b3c)
    int32_t var_10_1 = edx
    
    if (edx u<= 0x3f)
        *(edx * 0x2d0 + 0x8fcb0c) = *(edx * 0x2d0 + 0x8fcb14)
        void* eax_4 = edx * 0x3920
        *(edx * 0x2d0 + 0x8fcb10) += *(eax_4 + 0xf8d2f0)
        eax, edx = sub_57ea10(edx)
        
        if (data_702fc0 != 0)
            sub_41bcb0()
            eax, edx = sub_4200a0(
                sub_460e20(eax_4, 0, eax_4 + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 0xffffffff, 0), 3, 
                var_10_1, 0, 0, 0)
            edi = data_1bfdd30
else
    eax = *(edx * 0x2d0 + 0x8fcb0c) + *(edx * 0x3920 + 0xf8d2ec)
    
    if (eax s> *(edx * 0x3920 + 0xf89b0c))
        goto label_52bd07

BOOL result
int32_t ecx_9

if (data_1b8a6f4 != 0 || (edi != 0xcf && data_1af425c == 2 && data_1af1714 == 0))
    int32_t edx_2 = data_63e16c
    data_1af1714 = 0
    data_187c51f = 0
    data_1af1710 = 0
    data_187c51e = 0
    data_187c51d = 0
    result, ecx_9 = sub_49e720(eax, edx_2, 0x976380, 0x64)
    edi = data_1bfdd30
    data_1393190 = 0
    data_1af0f3c = 0xffffffff
    data_1370100 = 0xffffffff
    data_703660 = 0xffffffff
    data_1af17ac = 0
else
    void* eax_8 = *(arg1 + 0x13b3c)
    
    if (eax_8 u<= 0x3f)
        eax_8 *= 0x3920
        *(eax_8 + 0xf8d318) = 1
    
    result, ecx_9 = sub_4ef700(eax_8, edx, arg1, i_1, 0)

if (edi != 0xcf)
    return result

int32_t eax_9 = *(arg1 + 0x13b3c)

if (eax_9 u<= 0x3f)
    *(eax_9 * 0x2d0 + &data_8fcb18) = 1

if (data_1311178 == 0)
    data_1606d78 = 1
    data_1606c68 = 1

ecx_9.b = 0
return sub_420350(ecx_9)
