// 函数: sub_4a38a0
// 地址: 0x4a38a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_628 = arg2
int32_t arg_4
int32_t arg_8
int32_t arg_c

if (arg2 == 0xffffffff && arg_4 == arg2 && arg_8 == arg2 && arg_c == arg2)
    int32_t eax_3 = data_70300c - 1
    var_628 = nullptr
    arg_8 = eax_3
    int32_t eax_5 = data_7030dc - 1
    arg_4 = 0
    arg_c = eax_5

void var_624
char var_214
HWND hWnd
void* __offset(HWND__, 0x3) esi_2

if (sub_4c3da0(sub_4cfd70(&var_214, arg3), 8, &var_214, 0x20) == 1)
    char* var_640_1 = &var_214
    int32_t var_644_1 = 0x1350fc0
    char* var_648_1 = &data_1352820
    sub_4c84d0(&var_624, "%s\%s\%s")
    char var_41c
    sub_4cfd70(&var_41c, arg3)
    char* ecx_3 = &var_41c
    
    while (true)
        char eax_8 = *ecx_3
        
        if (eax_8 u>= 0x80 && (eax_8 u< 0xa0 || eax_8 u> 0xdf) && eax_8 u< 0xfe)
            ecx_3 = &ecx_3[2]
            continue
        
        if (eax_8 == 0)
            break
        
        if (eax_8 u>= 0x41 && eax_8 u<= 0x5a)
            *ecx_3 = eax_8 + 0x20
        
        ecx_3 = &ecx_3[1]
    
    char* esi_1 = &var_41c
    int32_t eax_9 = sub_4d1610(&var_41c, 0x5c)
    void var_41b
    
    if (eax_9 != 0xffffffff)
        esi_1 = &var_41b + eax_9
    void* eax_10 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_10 != 0xffffffff)
        hWnd = sub_4d0f10(eax_10 + 1 + esi_1, "wmv")
    
    if (eax_10 != 0xffffffff && hWnd == 0)
        esi_2 = &hWnd->unused + 3
        goto label_4a3b4d
    
    hWnd = sub_4c3910(&var_41c, "mpg")
    
    if (hWnd == 0)
        esi_2 = &hWnd->unused + 2
        goto label_4a3b4d
    
    hWnd = sub_4c3910(&var_41c, "avi")
    
    if (hWnd == 0)
        goto label_4a3b3c
    
    goto label_4a3a03

label_4a3a03:
char* esi_3 = &var_214
int32_t eax_11 = sub_4d1610(&var_214, 0x5c)
void var_213

if (eax_11 != 0xffffffff)
    esi_3 = &var_213 + eax_11
int32_t eax_12 = sub_4d1610(esi_3, 0x2e)

if (eax_12 == 0xffffffff)
    eax_12 = sub_4cfc80(esi_3)
    esi_3 -= 1

void* const var_640_2 = &data_61b8b0
BOOL eax_29

if (sub_4c3da0(sub_4c84d0(&esi_3[eax_12], ".%s"), 8, &var_214, 0x20) != 1)
    if (sub_4c3da0(sub_4c3960(&var_214, 0x61b8b4), 8, &var_214, 0x20) == 1)
        char* var_640_4 = &var_214
        int32_t var_644_3 = 0x1350fc0
        char* var_648_4 = &data_1352820
        hWnd = sub_4c84d0(&var_624, "%s\%s\%s")
        esi_2 = 2
        goto label_4a3b4d
    
    if (sub_4c3da0(sub_4c3960(&var_214, 0x61b8b8), 8, &var_214, 0x20) == 1)
        char* var_640_5 = &var_214
        int32_t var_644_4 = 0x1350fc0
        char* var_648_5 = &data_1352820
        hWnd = sub_4c84d0(&var_624, "%s\%s\%s")
    label_4a3b3c:
        esi_2 = 1
        goto label_4a3b4d
    
    char* var_640_8 = arg3
    sub_4c84d0(&data_7027c0, 0x61b8bc)
    eax_29 = MessageBoxA(data_7027bc, &data_7027c0, 0x61b8d4, MB_OK)
else
    char* var_640_3 = &var_214
    int32_t var_644_2 = 0x1350fc0
    char* var_648_3 = &data_1352820
    hWnd = sub_4c84d0(&var_624, "%s\%s\%s")
    esi_2 = 3
label_4a3b4d:
    
    if (data_139270c == 0xffffffff)
        hWnd = sub_4c3da0(hWnd, 4, "MoviePlayCheck.sav", 0x1e)
        
        if (hWnd == 1)
            HWND hWnd_1 = data_1c054ec
            
            if (hWnd_1 != 0)
                ShowWindow(hWnd_1, SW_HIDE)
                InvalidateRect(data_1c054ec, nullptr, 1)
            
            data_1af4e70 = 1
            int32_t i
            
            do
                i = ShowCursor(1)
            while (i s<= 0)
            data_1af17a0 = 1
            data_1af17cc = 1
            int32_t eax_19 = sub_547cd0()
            int32_t ebx_1 = eax_19
            
            if (ebx_1 == 0)
                ebx_1 = sub_547c00(data_7027bc, eax_19 + 1)
            
            int32_t eax_21 = data_7037a0
            data_1af17cc = 0
            data_1af17a0 = 0
            data_1af4e70 = eax_21
            
            if (eax_21 != 0)
                int32_t i_1
                
                do
                    i_1 = ShowCursor(1)
                while (i_1 s<= 0)
            else
                int32_t i_2
                
                do
                    i_2 = ShowCursor(0)
                while (i_2 s>= 0)
            
            hWnd = data_1c054ec
            
            if (hWnd != 0)
                ShowWindow(hWnd, SW_SHOW)
                hWnd = InvalidateRect(data_1c054ec, nullptr, 1)
            
            if (ebx_1 != 0)
                var_628 = 1
                int32_t eax_22 = sub_4c4e40(hWnd, &var_628, "MoviePlayCheck.sav", 4, 4, 0x1e)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_22
    
    int32_t var_630 = 0
    sub_4c4e40(hWnd, &var_630, "MoviePlayCheck.sav", 4, 4, 0x1e)
    int32_t edi_1 = data_1af4524
    
    if (esi_2 != 1 && esi_2 != 2 && edi_1 == 0)
        edi_1 = 1
    
    int32_t edx_7 = data_1356ec8
    int32_t ecx_21 = data_1356ec4
    data_976b30 = var_628
    data_976b34 = arg_4
    data_976b38 = arg_8
    data_976b3c = arg_c
    data_976b2c = arg4
    int32_t eax_28
    int32_t ecx_22
    eax_28, ecx_22 = sub_4a3df0(&var_628, edx_7, ecx_21, data_1356ed4, data_1356ec0, &var_628, 
        &arg_4, &arg_8, &arg_c)
    int32_t var_640_7 = edi_1
    int32_t var_644_8 = ecx_22
    eax_29 = sub_4be9a0(eax_28, &var_624, ecx_22, var_628, arg_4, arg_8, arg_c, arg4)
    
    if (data_139270c != 0xffffffff && data_1392708 != 0)
        int32_t eax_30 = sub_4cfdf0(eax_29, arg3, &data_976b08, 0x24)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_30

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_29
