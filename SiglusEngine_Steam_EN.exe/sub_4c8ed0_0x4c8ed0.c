// 函数: sub_4c8ed0
// 地址: 0x4c8ed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = zx.d(*(arg4 + 2))
int32_t esi = 0
int32_t edi = 0
int32_t eax_3 = *(arg4 + 4) + arg2
HGLOBAL hMem_3 = nullptr
BOOL var_18 = 0
sub_4c4a00(&var_18, &hMem_3, arg3, &var_18, "KOESIZE", eax_3, eax * 2, 0xffffffff, 0xffffffff)
BOOL ebx_1 = var_18
BOOL ecx = ebx_1
HGLOBAL hMem_2 = nullptr
BOOL var_8 = 0
uint32_t edx_1 = zx.d(*(arg4 + 2))
BOOL eax_6 = 0
uint32_t var_c = 0
BOOL var_1c = ebx_1
uint32_t var_20 = edx_1

if (edx_1 s>= 2)
    int32_t i_3 = ((edx_1 - 2) u>> 1) + 1
    var_18 = i_3 * 2
    int32_t i
    
    do
        esi += zx.d(*ecx)
        edi += zx.d(*(ecx + 2))
        ecx += 4
        i = i_3
        i_3 -= 1
    while (i != 1)
    edx_1 = var_20
    eax_6 = var_18

if (eax_6 s< edx_1)
    var_c = zx.d(*ecx)

sub_4c4a00(&var_8, &hMem_2, arg3, &var_8, "KOESRC", *(arg4 + 4) + (edx_1 << 1) + arg2, 
    esi + edi + var_c, 0xffffffff, 0xffffffff)
uint32_t eax_18 = zx.d(*(arg4 + 2)) << 0xb
var_20 = 0
var_18 = 0
sub_4d6960(eax_18, &var_18, &var_20, eax_18, "KOEDST")
int32_t i_1 = 0
BOOL edi_2 = var_8
uint32_t ecx_3 = var_18
var_8 = ecx_3
int32_t i_2 = 0

if (0 u< *(arg4 + 2))
    do
        int16_t eax_20 = *ebx_1
        
        if (eax_20 != 0)
            if (eax_20 != 0x400)
                BOOL eax_29 = edi_2
                uint32_t edx_7 = ecx_3
                ebx_1.b = 0
                int32_t j_3 = 0x200
                int32_t j
                
                do
                    ecx_3.b = *eax_29
                    ecx_3.b &= 0xf
                    
                    if (ecx_3.b == 0xf)
                        ecx_3.w = *eax_29
                        ecx_3.w u>>= 4
                        eax_29 += 1
                    
                    ebx_1.b -= *(zx.d(ecx_3.b) + 0x610b70)
                    uint32_t ecx_6
                    ecx_6.w = *((zx.d(ebx_1.b) << 1) + &data_610c70)
                    *edx_7 = ecx_6.w
                    ecx_6.b = *eax_29
                    eax_29 += 1
                    ecx_6.b &= 0xf0
                    
                    if (ecx_6.b != 0xf0)
                        ecx_6.b u>>= 4
                    else
                        ecx_6.b = *eax_29
                        eax_29 += 1
                    
                    ebx_1.b -= *(zx.d(ecx_6.b) + 0x610b70)
                    ecx_3.w = *((zx.d(ebx_1.b) << 1) + &data_610c70)
                    *(edx_7 + 2) = ecx_3.w
                    edx_7 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                ebx_1 = var_1c
            else
                void* ecx_4 = ecx_3 + 4
                void* edx_6 = edi_2 + 2
                int32_t j_2 = 0x100
                int32_t j_1
                
                do
                    uint32_t eax_21 = zx.d(*(edx_6 - 2))
                    ecx_4 += 8
                    edx_6 += 4
                    *(ecx_4 - 0xc) = *((eax_21 << 1) + &data_610c70)
                    *(ecx_4 - 0xa) = *((zx.d(*(edx_6 - 5)) << 1) + &data_610c70)
                    *(ecx_4 - 8) = *((zx.d(*(edx_6 - 4)) << 1) + &data_610c70)
                    *(ecx_4 - 6) = *((zx.d(*(edx_6 - 3)) << 1) + &data_610c70)
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            i_1 = i_2
            ecx_3 = var_8
        
        i_1 += 1
        edi_2 += zx.d(*ebx_1)
        i_2 = i_1
        ecx_3 += 0x800
        ebx_1 += 2
        var_8 = ecx_3
        var_1c = ebx_1
    while (i_1 s< zx.d(*(arg4 + 2)))

HGLOBAL hMem = hMem_3

if (hMem != 0)
    int32_t edi_3 = data_1af413c
    char eax_33
    
    if (edi_3 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_33 = sub_4d6b80(&hMem_3)
    
    if (edi_3 == 0 || eax_33 != 0)
        GlobalUnlock(hMem)
        GlobalFree(hMem)
        
        if (edi_3 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

HGLOBAL hMem_1 = hMem_2

if (hMem_1 != 0)
    int32_t edi_4 = data_1af413c
    char eax_34
    
    if (edi_4 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_34 = sub_4d6b80(&hMem_2)
    
    if (edi_4 == 0 || eax_34 != 0)
        GlobalUnlock(hMem_1)
        GlobalFree(hMem_1)
        
        if (edi_4 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

*arg6 = var_20
*arg7 = var_18
*arg8 = eax_18
*arg9 = arg5
return arg5
