// 函数: sub_4d6560
// 地址: 0x4d6560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (data_1af413c == 0)
    return 

WaitForSingleObject(data_7027a8, 0xffffffff)
int32_t eax = data_20c0500
int32_t edi_1 = 0
int32_t* esi_1 = data_20c04fc

if (eax s> 0)
    while (*esi_1 != 0)
        edi_1 += 1
        esi_1 = &esi_1[5]
        
        if (edi_1 s>= eax)
            break

if (edi_1 == eax)
    sub_4d62d0()
    esi_1 = data_20c04fc + edi_1 * 0x14

int32_t edx = 0
*esi_1 = arg3
esi_1[1] = arg2
char* eax_5
char* edx_1
int32_t ecx

if (arg4 == 0)
    char const* const eax_6 = "NoName"
    
    do
        ecx.b = *eax_6
        
        if (ecx.b u< 0x80)
            edx += 1
            eax_6 = &eax_6[1]
        else if (ecx.b u< 0xa0)
            if (ecx.b u>= 0xfe)
                edx += 1
                eax_6 = &eax_6[1]
            else
                edx += 2
                eax_6 = &eax_6[2]
        else if (ecx.b u<= 0xdf || ecx.b u>= 0xfe)
            edx += 1
            eax_6 = &eax_6[1]
        else
            edx += 2
            eax_6 = &eax_6[2]
    while (*eax_6 != 0)
    
    esi_1[4] = edx + 1
    HGLOBAL hMem_1 = GlobalAlloc(GHND, edx + 1)
    esi_1[2] = hMem_1
    eax_5 = GlobalLock(hMem_1)
    edx_1 = "NoName"
else
    char* eax_3 = arg4
    
    if (*arg4 != 0)
        do
            ecx.b = *eax_3
            
            if (ecx.b u< 0x80)
                edx += 1
                eax_3 = &eax_3[1]
            else if (ecx.b u< 0xa0)
                if (ecx.b u>= 0xfe)
                    edx += 1
                    eax_3 = &eax_3[1]
                else
                    edx += 2
                    eax_3 = &eax_3[2]
            else if (ecx.b u<= 0xdf || ecx.b u>= 0xfe)
                edx += 1
                eax_3 = &eax_3[1]
            else
                edx += 2
                eax_3 = &eax_3[2]
        while (*eax_3 != 0)
    
    esi_1[4] = edx + 1
    HGLOBAL hMem = GlobalAlloc(GHND, edx + 1)
    esi_1[2] = hMem
    eax_5 = GlobalLock(hMem)
    edx_1 = arg4
esi_1[3] = eax_5
sub_4cfd70(eax_5, edx_1)
sub_4d6500()
int32_t eax_8 = data_1c04c50

if (eax_8 == 0)
    int32_t ecx_2 = data_1af4140
    
    if (ecx_2 != 0)
        if (data_1c04c5c u>= ecx_2)
            eax_8 = 1
        
        data_1c04c50 = eax_8

ReleaseSemaphore(data_7027a8, 1, nullptr)
