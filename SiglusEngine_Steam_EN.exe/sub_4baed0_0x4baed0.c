// 函数: sub_4baed0
// 地址: 0x4baed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1 * 3
int32_t edx = (&data_2074450)[edi]

if (edx == 0x1001)
    return 

int32_t ecx = (&data_2074458)[edi]

if (ecx == 0x1001)
    int32_t ecx_1 = (&data_2074454)[edi]
    (&data_2074450)[ecx_1 * 3] = edx
    int32_t eax_2 = edx * 3
    
    if ((&data_2074458)[eax_2] != arg1)
        (&data_2074454)[eax_2] = ecx_1
        (&data_2074450)[edi] = 0x1001
        return 
    
    (&data_2074458)[eax_2] = ecx_1
    (&data_2074450)[edi] = 0x1001
    return 

int32_t esi_1 = (&data_2074454)[edi]

if (esi_1 == 0x1001)
    (&data_2074450)[ecx * 3] = edx
    int32_t eax_4 = edx * 3
    
    if ((&data_2074458)[eax_4] != arg1)
        (&data_2074454)[eax_4] = ecx
        (&data_2074450)[edi] = 0x1001
        return 
    
    (&data_2074458)[eax_4] = ecx
    (&data_2074450)[edi] = 0x1001
    return 

int32_t eax_5 = esi_1 * 3
void* eax_6 = &(&data_2074458)[eax_5]

if ((&data_2074458)[eax_5] != 0x1001)
    int32_t eax_7
    
    do
        esi_1 = *eax_6
        eax_7 = esi_1 * 3
        eax_6 = &(&data_2074458)[eax_7]
    while ((&data_2074458)[eax_7] != 0x1001)

sub_4baed0()
int32_t eax_9 = (&data_2074450)[edi] * 3

if ((&data_2074454)[eax_9] != arg1)
    (&data_2074458)[eax_9] = esi_1
else
    (&data_2074454)[eax_9] = esi_1

int32_t ecx_3 = esi_1 * 3
*((ecx_3 << 2) + &data_2074450) = *((edi << 2) + &data_2074450)
(&data_2074458)[ecx_3] = (&data_2074458)[edi]
(&data_2074450)[(&data_2074454)[ecx_3] * 3] = esi_1
(&data_2074450)[(&data_2074458)[ecx_3] * 3] = esi_1
(&data_2074450)[edi] = 0x1001
