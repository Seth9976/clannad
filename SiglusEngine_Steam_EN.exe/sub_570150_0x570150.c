// 函数: sub_570150
// 地址: 0x570150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x2f, arg2)
HWND ebx = data_1af0acc
HWND var_110 = ebx

if (data_13171b8 == 0)
    UpdateWindow(ebx)
    SetWindowPos(ebx, 0xfffffffe, data_13171c0, data_13171c4, data_13171c8, data_13171cc, 
        SWP_SHOWWINDOW)
    ebx = data_1af0acc

HWND eax_2
int32_t ecx
eax_2, ecx = GetDlgItem(ebx, 0x4f32)

if (eax_2 != 0)
    HWND hWnd = GetDlgItem(ebx, 0x4f32)
    eax_2, ecx = sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 
        0x4f32, ebx, data_13171b8, &data_13171b8, 3, &data_63ff94, 0x63ff74)

int32_t i = 0

if (data_108f32c s> 0)
    int32_t edi_2 = data_1333e40
    
    do
        int32_t i_1 = i
        void var_10c
        eax_2, ecx = sub_4c84d0(&var_10c, "%02d")
        
        if (edi_2 != 0)
            eax_2, ecx = edi_2(0, &var_10c, i, i, var_110, 0x4f32)
            edi_2 = data_1333e40
        
        i += 1
    while (i s< data_108f32c)

if (data_13171b8 == 0)
    int32_t var_120_3 = ecx
    sub_4c1470(eax_2, data_13171d4, data_13171d0, var_110, 0x4f32)

WPARAM result = sub_56fee0(0)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
