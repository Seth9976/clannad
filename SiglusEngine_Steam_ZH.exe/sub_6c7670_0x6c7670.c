// 函数: sub_6c7670
// 地址: 0x6c7670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_44 = arg1

if (*arg1 == 0 || *(arg1 + 0xc) s> arg2 || arg2 s> *(arg1 + 0x10))
    return 

int32_t edi_1 = *(arg1 + 0x58)
int32_t* esi_1 = *(arg1 + 0x54)
int128_t var_30

if (esi_1 != edi_1)
    do
        int32_t var_20[0x4]
        var_30 = *sub_6c1350(*esi_1, &var_20)
        int32_t var_40_1
        int32_t edx_1
        
        if (*(var_44 + 0x50) != 0)
            edx_1 = var_30:0xc.d
            var_40_1 = arg2
        else
            edx_1 = arg2
            var_40_1 = var_30:8.d
        
        HWND hWnd = *(*esi_1 + 4)
        
        if (hWnd != 0)
            int32_t Y = var_30:4.d
            int32_t X = var_30.d
            SetWindowPos(hWnd, nullptr, X, Y, var_40_1 - X, edx_1 - Y, 0x14)
        
        esi_1 = &esi_1[1]
    while (esi_1 != edi_1)
    
    arg1 = var_44

int32_t eax = *(arg1 + 0x64)
int32_t* esi_2 = *(arg1 + 0x60)
int32_t edi_3 = arg2 + arg3
uint32_t ecx_5 = (eax - esi_2 + 3) u>> 2
int32_t var_40_2 = 0

if (esi_2 u> eax)
    ecx_5 = 0

if (ecx_5 == 0)
    return 

do
    sub_6c1350(*esi_2, &var_30)
    int32_t Y_1
    int32_t X_1
    
    if (*(var_44 + 0x50) != 0)
        Y_1 = var_30:4.d
        X_1 = edi_3
        var_30.d = X_1
    else
        X_1 = var_30.d
        Y_1 = edi_3
        var_30:4.d = Y_1
    
    HWND hWnd_1 = *(*esi_2 + 4)
    
    if (hWnd_1 != 0)
        SetWindowPos(hWnd_1, nullptr, X_1, Y_1, var_30:8.d - X_1, var_30:0xc.d - Y_1, 0x14)
    
    esi_2 = &esi_2[1]
    eax = var_40_2 + 1
    var_40_2 = eax
while (eax != ecx_5)
