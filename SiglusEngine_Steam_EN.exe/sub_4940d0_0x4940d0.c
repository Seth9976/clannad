// 函数: sub_4940d0
// 地址: 0x4940d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1374758 == 0)
    return 

int32_t esi_1 = 0
void* eax = &data_1b8c8ac
BOOL i_3 = 0x7d0
BOOL i

do
    if (*(eax - 0x1c) != 0)
        int32_t ecx_1 = *eax
        
        if (ecx_1 s> 0)
            esi_1 = esi_1 + 4 + ecx_1
    
    if (*(eax + 8) != 0)
        int32_t ecx_2 = *(eax + 0x24)
        
        if (ecx_2 s> 0)
            esi_1 = esi_1 + 4 + ecx_2
    
    if (*(eax + 0x2c) != 0)
        int32_t ecx_3 = *(eax + 0x48)
        
        if (ecx_3 s> 0)
            esi_1 = esi_1 + 4 + ecx_3
    
    if (*(eax + 0x50) != 0)
        int32_t ecx_4 = *(eax + 0x6c)
        
        if (ecx_4 s> 0)
            esi_1 = esi_1 + 4 + ecx_4
    
    if (*(eax + 0x74) != 0)
        int32_t ecx_5 = *(eax + 0x90)
        
        if (ecx_5 s> 0)
            esi_1 = esi_1 + 4 + ecx_5
    
    eax += 0xb4
    i = i_3
    i_3 -= 1
while (i != 1)

if (esi_1 == 0)
    return 

BOOL hMem_1 = i_3
BOOL i_5 = i_3
sub_4d6960(eax, &i_5, &hMem_1, esi_1 + 0x9cd8, "AVG_READ_INI_HED")
BOOL i_6 = i_5
*i_6 = 0x98
*(i_6 + 4) = 0x2712
GetLocalTime(i_6 + 8)
void* eax_2 = sub_4cfd70(i_6 + 0x18, &data_108f5cc)
void** esi_8 = i_6 + 0x98
int32_t i_2 = 0x2710
void** ebx_1 = &esi_8[0x2710]
int32_t i_4 = 0x2710
void* edi_1 = &data_1b8c8ac
int32_t i_1

do
    if (*(edi_1 - 0x1c) != 0)
        eax_2 = *edi_1
        
        if (eax_2 s> 0)
            *esi_8 = eax_2
            eax_2 = *(edi_1 - 4)
            *ebx_1 = eax_2
            sub_4d1c30(eax_2, *(edi_1 - 0x18), &ebx_1[1], *edi_1)
            i_2 = i_4
            ebx_1 = &ebx_1[1] + *edi_1
    
    edi_1 += 0x24
    esi_8 = &esi_8[1]
    i_1 = i_2
    i_2 -= 1
    i_4 = i_2
while (i_1 != 1)
uint8_t* i_7 = i_5
eax = sub_495f70(eax_2, i_7, "read.sav", esi_1 + 0x9cd8)

if (eax.b == 0)
    sub_495f70(Sleep(0x1f4), i_7, "read.sav", esi_1 + 0x9cd8)

BOOL hMem = hMem_1

if (hMem == 0)
    return 

int32_t edi_2 = data_1af413c

if (edi_2 != 0)
    WaitForSingleObject(data_7027a8, 0xffffffff)
    eax = sub_4d6b80(&hMem_1)

if (edi_2 != 0 && eax.b == 0)
    return 

GlobalUnlock(hMem)
GlobalFree(hMem)

if (edi_2 != 0)
    sub_4d6500()
    ReleaseSemaphore(data_7027a8, 1, nullptr)
