// 函数: sub_5363d0
// 地址: 0x5363d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == *(arg1 + 0xb0))
    LRESULT hWnd = *(arg1 + 0xb0)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
    
    hWnd.b &= 1
    *(data_bac4e4 + 0x16c) = hWnd.b
    hWnd.b = 1
    return hWnd

char* i = nullptr
void* eax = arg1 + 0x140

do
    if (arg3 == *eax)
        LRESULT hWnd_3 = *(arg1 + i * 0x90 + 0x140)
        
        if (hWnd_3 != 0)
            hWnd_3 = SendMessageW(hWnd_3, 0xf0, 0, 0)
        
        hWnd_3.b &= 1
        i[*(data_bac4e4 + 0x170)] = hWnd_3.b
        hWnd_3.b = 1
        return hWnd_3
    
    i = &i[1]
    eax += 0x90
while (i s< 4)

char* i_1 = nullptr
void* eax_1 = arg1 + 0x380

do
    if (arg3 == *eax_1)
        LRESULT hWnd_2 = *(arg1 + i_1 * 0x90 + 0x380)
        
        if (hWnd_2 != 0)
            hWnd_2 = SendMessageW(hWnd_2, 0xf0, 0, 0)
        
        hWnd_2.b &= 1
        i_1[*(data_bac4e4 + 0x17c)] = hWnd_2.b
        hWnd_2.b = 1
        return hWnd_2
    
    i_1 = &i_1[1]
    eax_1 += 0x90
while (i_1 s< 4)

int32_t i_2 = 0
void* edi = arg1 + 0x800
int32_t j

do
    j = 0
    void* eax_2 = edi
    
    do
        if (arg3 == *eax_2)
            *(*(data_bac4e4 + 0x188) + (i_2 << 2)) = j
            int32_t eax_12
            eax_12.b = 1
            return eax_12
        
        j += 1
        eax_2 += 0x90
    while (j s< 8)
    
    i_2 += 1
    edi += 0x480
while (i_2 s< 4)

uint32_t eax_4 = zx.d(arg2)
HWND hWnd_1

if (eax_4 == 0x3f3)
    hWnd_1 = *(*(arg1 + 4) + 4)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x10, 0, 0)
        LRESULT eax_10
        eax_10.b = 1
        return eax_10
else
    if (eax_4 != 0x3f4)
        int32_t eax_6
        eax_6.b = 0
        return eax_6
    
    j.b = *(data_bac510 + 0x1040d)
    *(data_bac4e4 + 0x16c) = j.b
    sub_60cc40()
    sub_60ccc0()
    sub_60cd40()
    sub_536700(arg1)

hWnd_1.b = 1
return hWnd_1
