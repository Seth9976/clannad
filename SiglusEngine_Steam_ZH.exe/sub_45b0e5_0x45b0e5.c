// 函数: sub_45b0e5
// 地址: 0x45b0e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** var_8 = arg1
int32_t* eax = arg1[2]
*arg1 = &data_ac3570

if (eax != 0)
    (*(*eax + 8))(eax)
    arg1[2] = 0

int32_t* eax_1 = arg1[3]

if (eax_1 != 0)
    (*(*eax_1 + 8))(eax_1)
    arg1[3] = 0

HDC hdc = arg1[4]
int32_t edi
int32_t var_10_3 = edi

if (hdc != 0)
    HGDIOBJ h_1 = arg1[6]
    
    if (h_1 != 0)
        SelectObject(hdc, h_1)

HGDIOBJ ho = arg1[5]

if (ho != 0)
    DeleteObject(ho)

HDC hdc_2 = arg1[4]

if (hdc_2 != 0)
    HGDIOBJ h = arg1[8]
    
    if (h != 0)
        SelectObject(hdc_2, h)

HGDIOBJ ho_1 = arg1[7]

if (ho_1 != 0)
    DeleteObject(ho_1)

HDC hdc_1 = arg1[4]

if (hdc_1 != 0)
    DeleteDC(hdc_1)

int32_t i = 0

if (arg1[0x23] u> 0)
    void* ebx_1 = &arg1[0x24]
    
    do
        j__free(*ebx_1)
        i += 1
        ebx_1 += 4
    while (i u< arg1[0x23])

int32_t i_1 = 0

if (arg1[0x126] u> 0)
    do
        int32_t* eax_4 = arg1[0x127][i_1]
        
        if (eax_4 != 0)
            (*(*eax_4 + 8))(eax_4)
        
        i_1 += 1
    while (i_1 u< arg1[0x126])

if (arg1[0x1c] != 0)
    data_b9732c(&arg1[0x1c])

j__free(arg1[0x13e])
void* ecx_4 = arg1[0x124]

if (ecx_4 != 0)
    sub_45aeb5(ecx_4, 1)

j__free(arg1[0x15f])
j__free(arg1[0x15c])
j__free(arg1[0x15a])
j__free(arg1[0x158])
j__free(arg1[0x156])
j__free(arg1[0x154])
j__free(arg1[0x152])
j__free(arg1[0x150])
j__free(arg1[0x14e])
j__free(arg1[0x14c])
j__free(arg1[0x14a])
j__free(arg1[0x148])
j__free(arg1[0x146])
j__free(arg1[0x144])
j__free(arg1[0x142])
j__free(arg1[0x140])
return j__free(arg1[0x127])
