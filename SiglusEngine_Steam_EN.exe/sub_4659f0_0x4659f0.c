// 函数: sub_4659f0
// 地址: 0x4659f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_7031bc
int32_t edi = 0

if (edx s<= 0)
    return 

void* esi_2 = arg1 * 0x650 + &data_72d8f8

do
    enum MESSAGEBOX_RESULT eax = *(esi_2 - 0x23c)
    
    if (eax != IDCLOSE)
        int32_t ecx_1 = *esi_2
        
        if (ecx_1 != 0 && ecx_1 != 1 && ecx_1 != 2 && ecx_1 != 3)
            if (eax == IDOK)
                *esi_2 = 3
            else if (eax == IDCANCEL)
                *esi_2 = 2
    else
        sub_477f90(edi, arg1)
        edx = data_7031bc
    
    edi += 1
    esi_2 += 0xca0
while (edi s< edx)
