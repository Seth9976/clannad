// 函数: sub_4868b0
// 地址: 0x4868b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_1af17c0
data_1af17c0 = 0
sub_57e1f0()
int32_t eax
int32_t ecx
eax, ecx = sub_486580()

if (esi != 0)
    ecx = data_1af1740
    
    if (data_1af17c0 == 0)
        ecx = 1
    
    data_1af1740 = ecx

int32_t eax_1 = eax - 1
int32_t edx_3
bool cond:0_1

if (eax == 1)
    int32_t edx_4 = data_1311170
    edx_3 = edx_4 + 1
    cond:0_1 = edx_4 + 1 s< 0
label_486a04:
    data_13740f0 = 0
    data_1311170 = edx_3
    
    if (not(cond:0_1))
        ecx.b = 0
        eax_1 = sub_460c30(eax_1, edx_3, ecx.b, 1, 1)
    
    data_1b14568 += 1
else
    int32_t temp2_1 = eax_1
    eax_1 -= 1
    
    if (temp2_1 == 1)
        int32_t edx_2 = data_1311170
        edx_3 = edx_2 - 1
        cond:0_1 = edx_2 - 1 s< 0
        goto label_486a04
    
    int32_t temp4_1 = eax_1
    eax_1 -= 1
    
    if (temp4_1 == 1)
        sub_42d590()
        data_13740a8 = 0
        data_1311170 = 0
        void* eax_2 = sub_57d3c0()
        data_13740f0 = 0
        sub_460c30(eax_2, 0, 0, 1, 0)
        sub_445260()
        BOOL eax_3 = data_1372c1c
        
        if (eax_3 != data_1372c18)
            int32_t edx_1 = data_63e16c
            data_1af1714 = 0
            data_187c51f = 0
            data_1af1710 = 0
            data_187c51e = 0
            data_187c51d = 0
            eax_3 = sub_49e720(eax_3, edx_1, 0x976380, 0x64)
            data_1393190 = 0
        
        data_1372c14 = 1
        data_13130dc = 0xffffffff
        data_13130e0 = 0xffffffff
        data_13130e4 = 0xffffffff
        data_13130e8 = 0
        data_13701dc = 0
        data_1b144c8 = 0
        data_703008 = 1
        data_13701d8 = 0
        data_137010c = 1
        return eax_3
return eax_1
