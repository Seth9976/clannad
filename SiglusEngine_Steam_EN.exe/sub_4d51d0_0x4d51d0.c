// 函数: sub_4d51d0
// 地址: 0x4d51d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HDC eax = GetDC(nullptr)
int32_t eax_1 = GetDeviceCaps(eax, 0xc)
int32_t eax_2
int32_t edx
eax_2, edx = ReleaseDC(nullptr, eax)
int32_t var_28_1 = eax_1
void var_34
BOOL i_5 = sub_4d50d0(eax_2, edx, 0, var_34)
BOOL i_3 = i_5

if (i_3 s<= 0)
    return i_5

HGLOBAL hMem_1 = nullptr
void* var_8 = nullptr
BOOL eax_3
int32_t edx_2
eax_3, edx_2 = sub_4d6960(i_5, &var_8, &hMem_1, i_3 * 0x9c, "DisplaySettings")
void* esi_1 = var_8
void* var_18_1 = esi_1
int32_t var_28_2 = eax_1
sub_4d50d0(eax_3, edx_2, esi_1)
BOOL eax_4 = 0
BOOL var_c_1 = 0
BOOL i_4

if (i_3 s> 0)
    int32_t* edx_3 = esi_1 + 0x68
    i_4 = i_3
    int32_t edi_1 = 1
    BOOL i_2 = i_3
    BOOL i
    
    do
        if (*edx_3 != 0)
            if (edi_1 s< i_3)
                int32_t* eax_5 = &edx_3[0x27]
                int32_t j_1 = i_3 - edi_1
                int32_t j
                
                do
                    if (edx_3[1] == eax_5[1] && edx_3[2] == eax_5[2] && *edx_3 == *eax_5)
                        *eax_5 = 0
                    
                    eax_5 = &eax_5[0x27]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                eax_4 = var_c_1
                i_2 = i_4
            
            eax_4 += 1
            var_c_1 = eax_4
        
        edx_3 = &edx_3[0x27]
        edi_1 += 1
        i = i_2
        i_2 -= 1
        i_4 = i_2
    while (i != 1)
    esi_1 = var_8

uint32_t eax_6 = eax_4 * 0x9c
var_8 = nullptr
i_4 = 0
sub_4d6960(eax_6, &i_4, &var_8, eax_6, "DisplaySettings")
BOOL i_6 = i_4
BOOL i_7 = i_6

if (i_3 s> 0)
    BOOL i_1
    
    do
        if (*(esi_1 + 0x68) != 0)
            __builtin_memcpy(i_7, esi_1, 0x9c)
            esi_1 = var_18_1
            i_7 += 0x9c
        
        esi_1 += 0x9c
        var_18_1 = esi_1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

HGLOBAL hMem = hMem_1
data_1c054e4 = var_8
data_1c054e0 = i_6
data_1c054e8 = var_c_1

if (hMem != 0)
    int32_t edi_3 = data_1af413c
    char eax_8
    
    if (edi_3 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_8 = sub_4d6b80(&hMem_1)
    
    if (edi_3 == 0 || eax_8 != 0)
        GlobalUnlock(hMem)
        GlobalFree(hMem)
        
        if (edi_3 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

return var_c_1
