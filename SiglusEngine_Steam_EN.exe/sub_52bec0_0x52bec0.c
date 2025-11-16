// 函数: sub_52bec0
// 地址: 0x52bec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t eax = data_703678
data_1af1794 = 1
data_13701d8 = 0

if (eax == 1)
    eax = 2

data_1af17b4 = 0
data_703678 = eax
int32_t i_3 = 0x40
data_70367c = 0
int32_t* eax_1 = &data_f8c790
int32_t i

do
    *eax_1 = 0xffffffff
    eax_1 = &eax_1[0xe48]
    i = i_3
    i_3 -= 1
while (i != 1)
void* eax_2 = &data_8fcb08
int32_t i_4 = 0x40
int32_t i_1

do
    *(eax_2 - 4) = 0xffffffff
    eax_2 += 0x2d0
    *(eax_2 - 0x2d0) = 0xffffffff
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* eax_3 = &data_8fcb20
int32_t i_5 = 0x40
int32_t i_2

do
    *eax_3 = 0
    eax_3 += 0x2d0
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
int32_t edx

if (arg4 == i_5)
    edx = *(arg3 + 0x13b3c)

void* ecx_10

if (arg4 != i_5 || edx u> 0x3f || *(edx * 0x1d4 + 0x1090b28) == i_5)
    int32_t edx_4 = *(arg3 + 0x13b3c)
    
    if (edx_4 u> 0x3f)
        goto label_52c21c
    
    if (data_7037bc u> 0x1f || *(edx_4 * 0x2d0 + 0x8fcb0c) + *(edx_4 * 0x3920 + 0xf8d2ec)
            s> *(edx_4 * 0x3920 + 0xf89b0c))
        if (edx_4 u> 0x3f)
            goto label_52c21c
        
        *(edx_4 * 0x3920 + 0xf8d320) = 1
    label_52c21c:
        int32_t edi_2 = *(arg3 + 0x13b3c)
        
        if (edi_2 u<= 0x3f)
            *(edi_2 * 0x2d0 + 0x8fcb0c) = *(edi_2 * 0x2d0 + 0x8fcb14)
            void* eax_26 = edi_2 * 0x3920
            *(edi_2 * 0x2d0 + 0x8fcb10) += *(eax_26 + 0xf8d2f0)
            sub_57ea10(edi_2)
            
            if (data_702fc0 != 0)
                sub_41bcb0()
                sub_4200a0(
                    sub_460e20(eax_26, 0, eax_26 + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 0xffffffff, 
                        0), 
                    3, edi_2, 0, 0, 0)
    
    void* eax_30
    int32_t edx_6
    eax_30, edx_6 = sub_57fbb0()
    
    if (data_1b8a6f4 == 0)
        sub_4ef700(eax_30, edx_6, arg3, 0, 0)
    else
        int32_t edx_7 = data_63e16c
        data_1af1714 = 0
        data_187c51f = 0
        data_1af1710 = 0
        data_187c51e = 0
        data_187c51d = 0
        sub_49e720(eax_30, edx_7, 0x976380, 0x64)
        data_1393190 = 0
        data_1af0f3c = 0xffffffff
        data_1370100 = 0xffffffff
        data_703660 = 0xffffffff
        data_1af17ac = 0
        data_1af178c = 0
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
    
    data_1333e48 = 1
else
    if (edx u> 0x3f)
        goto label_52c013
    
    void* eax_7
    
    if (data_7037c0 u<= 0x1f)
        eax_7 = *(edx * 0x2d0 + 0x8fcb0c) + *(edx * 0x3920 + 0xf8d2ec)
    
    if (data_7037c0 u> 0x1f || eax_7 s> *(edx * 0x3920 + 0xf89b0c))
        if (edx u> 0x3f)
            goto label_52c013
        
        *(edx * 0x2d0 + 0x8fcb14) = 0
        *(edx * 0x3920 + 0xf8d324) = 2
    label_52c013:
        eax_7 = sub_57e8b0(*(arg3 + 0x13b3c))
        int32_t edi_1 = *(arg3 + 0x13b3c)
        
        if (edi_1 u<= 0x3f)
            *(edi_1 * 0x2d0 + 0x8fcb0c) = *(edi_1 * 0x2d0 + 0x8fcb14)
            void* eax_11 = edi_1 * 0x3920
            *(edi_1 * 0x2d0 + 0x8fcb10) += *(eax_11 + 0xf8d2f0)
            eax_7 = sub_57ea10(edi_1)
            
            if (data_702fc0 != 0)
                sub_41bcb0()
                eax_7 = sub_4200a0(
                    sub_460e20(eax_11, 0, eax_11 + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 0xffffffff, 
                        0), 
                    3, edi_1, 0, 0, 0)
    else if (edx u<= 0x3f)
        eax_7 = edx * 0x3920
        *(eax_7 + 0xf8d314) = 1
    
    if (data_1b8a6f4 != 0 || (data_1af425c == 2 && data_1af1714 == 0))
        int32_t edx_3 = data_63e16c
        data_1af1714 = 0
        data_187c51f = 0
        data_1af1710 = 0
        data_187c51e = 0
        data_187c51d = 0
        sub_49e720(eax_7, edx_3, 0x976380, 0x64)
        data_1393190 = 0
        data_703660 = 0xffffffff
        int32_t ecx_11 = *(arg3 + 0x13b3c)
        data_1af0f3c = 0xffffffff
        data_1370100 = 0xffffffff
        data_1af17ac = 0
        int32_t eax_18
        eax_18, ecx_10 = sub_57fa80(ecx_11)
        
        if (eax_18 == 0)
            data_71929c = 5
            data_7192a0 = eax_18
            data_7192e0 = eax_18
    else
        int32_t eax_15 = *(arg3 + 0x13b3c)
        
        if (eax_15 u<= 0x3f)
            *(eax_15 * 0x3920 + 0xf8d318) = 1
        
        int32_t eax_17
        int32_t edx_2
        eax_17, edx_2 = sub_57fa80(*(arg3 + 0x13b3c))
        
        if (eax_17 != 0)
            sub_4ef700(eax_17, edx_2, arg3, 1, 0)
        else
            sub_4ef700(eax_17, edx_2, arg3, eax_17, 0)
    
    int32_t eax_19 = *(arg3 + 0x13b3c)
    
    if (eax_19 u<= 0x3f)
        int32_t eax_20 = *(eax_19 * 0x3920 + 0xf8d32c)
        *(eax_19 * 0x3920 + 0xf8d328) = 1
        *(eax_19 * 0x3920 + 0xf8d330) = eax_20
        *(eax_19 * 0x3920 + 0xf8d32c) = 0

if (data_1311178 == 0)
    data_1606d78 = 1
    data_1606c68 = 1

ecx_10.b = 0
return sub_420350(ecx_10)
