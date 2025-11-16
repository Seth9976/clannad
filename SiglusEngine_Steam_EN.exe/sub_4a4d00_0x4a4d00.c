// 函数: sub_4a4d00
// 地址: 0x4a4d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg3
int32_t* var_c = arg2
sub_4d1ba0(arg1, arg8, arg3, 0)
int32_t eax_1 = arg7 << 2
BOOL var_18 = 0
HGLOBAL hMem_1 = nullptr
sub_4d6960(eax_1, &var_18, &hMem_1, eax_1, "str_flag_saveformat")
BOOL ebx = var_18
int32_t i_2 = 0
int32_t* ecx_1 = arg4
BOOL edx_2 = ebx
int32_t esi = 0
BOOL var_10 = edx_2
int32_t i_3 = 0
int32_t var_14 = 0

if (arg7 s> 0)
    int32_t* edi_1 = ecx_1
    int32_t* ecx_3 = var_c
    
    do
        if (*ecx_3 == 0)
            *edx_2 = 0
            esi += 1
        else
            char* ecx_4 = *edi_1
            int32_t edx_3 = 0
            
            if (ecx_4 != 0)
                i_2.b = *ecx_4
                
                while (i_2.b != 0)
                    if (i_2.b u< 0x80)
                        edx_3 += 1
                        ecx_4 = &ecx_4[1]
                    else if (i_2.b u< 0xa0)
                        if (i_2.b u>= 0xfe)
                            edx_3 += 1
                            ecx_4 = &ecx_4[1]
                        else
                            edx_3 += 2
                            ecx_4 = &ecx_4[2]
                    else if (i_2.b u<= 0xdf || i_2.b u>= 0xfe)
                        edx_3 += 1
                        ecx_4 = &ecx_4[1]
                    else
                        edx_3 += 2
                        ecx_4 = &ecx_4[2]
                    
                    i_2.b = *ecx_4
                
                i_2 = i_3
                esi += edx_3 + 1
                *var_10 = edx_3 + 1
                edx_2 = var_10
                ecx_3 = var_c
            else
                *var_10 = 0
                edx_2 = var_10
                ecx_3 = var_c
        
        if (esi s>= arg8)
            break
        
        ecx_3 += arg5
        edx_2 += 4
        var_14 += 1
        i_2 += 1
        edi_1 += arg6
        var_c = ecx_3
        var_10 = edx_2
        i_3 = i_2
    while (var_14 s< arg7)
    
    ebx = var_18
    ecx_1 = arg4

if (i_2 s> 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t eax_2 = *ebx
        
        if (eax_2 == 0)
            *edi = 0
            edi += 1
        else
            sub_4d1c30(eax_2, *ecx_1, edi, eax_2)
            ecx_1 = arg4
            edi += *ebx
        
        ecx_1 += arg6
        ebx += 4
        arg4 = ecx_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_2 = i_3

HGLOBAL hMem = hMem_1

if (hMem == 0)
    return i_2

int32_t edi_2 = data_1af413c
char eax_3

if (edi_2 != 0)
    WaitForSingleObject(data_7027a8, 0xffffffff)
    eax_3 = sub_4d6b80(&hMem_1)

if (edi_2 == 0 || eax_3 != 0)
    GlobalUnlock(hMem)
    GlobalFree(hMem)
    
    if (edi_2 != 0)
        sub_4d6500()
        ReleaseSemaphore(data_7027a8, 1, nullptr)

return i_3
