// 函数: sub_5584c0
// 地址: 0x5584c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = GetDlgItem(data_20c35dc, 0x4f33)
LRESULT result = SendMessageA(hWnd, 0x184, 0, 0)

if (arg1 != 0xffffffff)
    sub_558390(arg1)
    WPARAM i = 0
    WPARAM edi_1 = 0xffffffff
    
    if (data_20c3878 s> 0)
        int32_t ebx_1 = data_1333e34
        
        do
            int32_t eax_2 = *((i << 2) + &data_20c36e8)
            int32_t var_5c_1 = eax_2
            
            if (data_20c3884 == eax_2)
                edi_1 = i
            
            void var_48
            sub_4c84d0(&var_48, "#Z%02d")
            
            if (ebx_1 != 0)
                ebx_1(hWnd, 0x180, 0, &var_48)
                ebx_1 = data_1333e34
            
            i += 1
        while (i s< data_20c3878)
    
    WPARAM wParam
    
    if (data_20c3878 s<= 0 || edi_1 == 0xffffffff)
        int32_t __saved_ebx_2 = 0
        data_20c3884 = 0xffffffff
        wParam = 0
    else
        int32_t __saved_ebx_1 = 0
        wParam = edi_1
    
    result = SendMessageA(GetDlgItem(data_20c35dc, 0x4f33), 0x186, wParam, 0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
