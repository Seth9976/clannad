// 函数: sub_4adec0
// 地址: 0x4adec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_703058
int32_t eax = data_70305c

if (ecx != 0)
    if (ecx s>= 4)
        if (ecx s> 0x50)
            ecx = 0x50
        
        data_1bfe2e0 = ecx
    else
        data_1bfe2e0 = 4
    
    goto label_4adf16

if (eax != 0)
    data_1bfe2e0 = 0
label_4adf16:
    
    if (eax == 0)
        data_1bfe2e4 = eax
    else if (eax s>= 4)
        if (eax s> 0x50)
            eax = 0x50
        
        data_1bfe2e4 = eax
    else
        data_1bfe2e4 = 4
else
    data_1bfe2e0 = 0x10
    data_1bfe2e4 = 0x10

int32_t ecx_1 = data_7030bc
int32_t eax_1 = data_7030c0
data_1bfe2e8 = 3

if (ecx_1 s<= eax_1)
    ecx_1 = eax_1

int32_t ecx_3 = ecx_1 << 8

if (data_703060 != 0)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(ecx_3)
    ecx_3 = ((edx_1 & 7) + eax_3) s>> 3

int32_t edx_3 = 0
int32_t esi = 0

if (ecx_3 s> 0)
    int32_t edi_1 = 0
    
    do
        edi_1 += 3
        edx_3 += 1
        esi += edi_1 * edx_3
    while (esi s< ecx_3)

bool cond:0 = data_703050 == 0xbf
int32_t eax_6 = data_7030c4
data_1bff978 = eax_6

if (cond:0)
    data_1bff970 = 0
    data_1bff974 = edx_3
    data_1bff8a0 = 0x1fe
    data_1bff8a4 = 0
    data_1bff8a8 = eax_6
    return eax_6

uint32_t eax_7 = eax_6 u>> 1
data_1bff970 = edx_3
data_1bff974 = 0
data_1bff8a0 = 0
data_1bff8a4 = 0xff
data_1bff8a8 = eax_7
return eax_7
