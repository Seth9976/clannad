// 函数: sub_5585b0
// 地址: 0x5585b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = GetDlgItem(data_20c35dc, 0x4f32)
LRESULT result
int32_t ecx
result, ecx = SendMessageA(hWnd, 0x184, 0, 0)
int32_t* edi = data_20c36d4
int32_t i = 0

if (data_20c36d8 s> 0)
    int32_t ebx_1 = data_1333e34
    
    do
        int32_t var_5c_1 = *edi
        void var_48
        result = sub_4c84d0(&var_48, "Seen%04d")
        
        if (ebx_1 != 0)
            result = ebx_1(hWnd, 0x180, 0, &var_48)
            ebx_1 = data_1333e34
        
        i += 1
        edi = &edi[1]
    while (i s< data_20c36d8)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
