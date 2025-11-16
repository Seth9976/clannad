// 函数: sub_555370
// 地址: 0x555370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
SendMessageA(GetDlgItem(data_20c2d28, 0x4f32), 0x1009, 0, 0)
WPARAM wParam = 0
void* esi = &data_13747ac
int32_t i_1 = 0x200
void string
int32_t i

do
    if (*esi s> 0)
        HWND hWnd = GetDlgItem(data_20c2d28, 0x4f32)
        int32_t lParam = 5
        void* var_46c_1 = esi - 0x48
        WPARAM wParam_2 = wParam
        int32_t var_478_1 = 0
        WPARAM wParam_3 = wParam
        SendMessageA(hWnd, 0x1007, 0, &lParam)
        int32_t var_490_2 = *esi
        sub_4c84d0(&string, "%d")
        HWND hWnd_1 = GetDlgItem(data_20c2d28, 0x4f32)
        int32_t lParam_1 = 5
        void* var_430_1 = &string
        WPARAM wParam_4 = wParam
        int32_t var_43c_1 = 1
        WPARAM wParam_5 = wParam
        SendMessageA(hWnd_1, 0x102e, wParam, &lParam_1)
        wParam += 1
    
    esi += 0x74
    i = i_1
    i_1 -= 1
while (i != 1)
WPARAM wParam_1 = wParam
sub_4c84d0(&string, 0x620cec)
BOOL result = SetDlgItemTextA(data_20c2d28, 0x500d, &string)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
