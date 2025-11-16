// 函数: sub_5752d0
// 地址: 0x5752d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_108

if (arg4 s< 0)
    sub_4cfd70(&var_108, "(TC:-1)")
else
    void var_308
    sub_4a7f60(arg4, &var_308)
    void* var_350_1 = &var_308
    sub_4c84d0(&var_108, "(%s)")

void* var_350_2 = &var_108
char const* const var_354

if (arg2 == 0)
    var_354 = "OFF %s"
else
    var_354 = "ON %s"

void var_208
sub_4c84d0(&var_208, var_354)
LRESULT hDlg = data_1af0a7c

if (hDlg != 0)
    HWND hWnd = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    void* var_330_1 = &var_208
    WPARAM var_340_1 = arg3
    int32_t var_33c_1 = 1
    WPARAM var_324_1 = arg3
    hDlg = SendMessageA(hWnd, 0x102e, arg3, &lParam)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return hDlg
