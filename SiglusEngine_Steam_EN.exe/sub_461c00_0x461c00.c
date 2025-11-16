// 函数: sub_461c00
// 地址: 0x461c00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* eax = &arg1[1]
int32_t i = 0

if (arg1[2] s> 0)
    void* esi_1 = arg1[1] + 8
    
    do
        sub_4d6c40(esi_1, esi_1 + 4)
        sub_4d6c40(esi_1 + 0xc, esi_1 + 0x10)
        i += 1
        esi_1 += 0x58
    while (i s< arg1[2])
    
    eax = &arg1[1]

sub_4d6c40(arg1, eax)
sub_4d6c40(&arg1[6], &arg1[7])
int32_t i_3 = 0x40
void* esi_2 = &arg1[0xa]
int32_t i_5 = 0x40
int32_t i_1

do
    if (*esi_2 != 0)
        int32_t edi = data_1af413c
        
        if (edi == 0)
        label_461c96:
            HGLOBAL hMem = *esi_2
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*esi_2)
                *esi_2 = 0
            
            goto label_461cb1
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi_2 == 0)
        label_461cb1:
            *(esi_2 + 4) = 0
            
            if (edi != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else if (sub_4d6b80(esi_2) != 0)
            goto label_461c96
        
        i_3 = i_5
    else
        *(esi_2 + 4) = 0
    
    esi_2 += 0x10
    i_1 = i_3
    i_3 -= 1
    i_5 = i_3
while (i_1 != 1)
*arg1 = 0
void* result = &arg1[0xb]
arg1[1] = 0
int32_t i_4 = 0x40
arg1[2] = 0
arg1[6] = 0
arg1[7] = 0
int32_t i_2

do
    *(result - 4) = 0
    result += 0x10
    *(result - 0x10) = 0
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
return result
