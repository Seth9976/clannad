// 函数: sub_45f070
// 地址: 0x45f070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg3 + 0x14) == 2)
    return 

HGLOBAL hMem_1 = nullptr
BOOL var_c = 0
BOOL eax
int32_t ecx_1
eax, ecx_1 = sub_4d6960(arg1, &var_c, &hMem_1, 0x1000, "GRDAT_MW_MOUSECUR_HOTSPOTTMP")
int32_t var_1c_1 = 0
int32_t var_20_1 = 0xff
int32_t var_24_1 = 0
int32_t var_28_1 = 0
int32_t var_2c_1 = 0
BOOL esi_1 = var_c
sub_584980(eax, 0x20, esi_1, 0x20, *(arg3 + 4), *(arg3 + 0xc), *(arg3 + 0x10), 8, 0x30, 0, 0, 0, 0, 
    0, 0x1f, 0x1f, ecx_1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)

for (int32_t i = 0; i s< 0x20; i += 1)
    for (int32_t j = 0; j s< 0x20; )
        if (zx.d(*(esi_1 + 2)) + zx.d(*(esi_1 + 1)) + zx.d(*esi_1) s>= 0xff)
            *arg2 = j
            *arg4 = i
            goto label_45f141
        
        j += 1
        esi_1 += 4

label_45f141:
HGLOBAL hMem = hMem_1

if (hMem == 0)
    return 

int32_t edi_1 = data_1af413c

if (edi_1 != 0)
    WaitForSingleObject(data_7027a8, 0xffffffff)
    arg1 = sub_4d6b80(&hMem_1)

if (edi_1 != 0 && arg1.b == 0)
    return 

GlobalUnlock(hMem)
GlobalFree(hMem)

if (edi_1 != 0)
    sub_4d6500()
    ReleaseSemaphore(data_7027a8, 1, nullptr)
