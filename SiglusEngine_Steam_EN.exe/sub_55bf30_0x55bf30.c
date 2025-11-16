// 函数: sub_55bf30
// 地址: 0x55bf30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = arg4[1]
int32_t var_e4 = *arg4
void var_88
sub_4c84d0(&var_88, "%04d [%02d]")
HWND hWnd = GetDlgItem(arg2, 0x4f32)
int32_t lParam = 5
void* var_b8 = &var_88
WPARAM var_c8 = arg3
int32_t var_c4 = 1
WPARAM var_ac = arg3
SendMessageA(hWnd, 0x102e, arg3, &lParam)

if (arg5 != 0)
    HWND hWnd_11 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_11 = arg3
    int32_t var_c4_11 = 2
    void* const var_b8_11 = &data_6138e3
    WPARAM var_ac_11 = arg3
    SendMessageA(hWnd_11, 0x102e, arg3, &lParam)
    HWND hWnd_12 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_12 = arg3
    int32_t var_c4_12 = 3
    void* const var_b8_12 = &data_6138e3
    WPARAM var_ac_12 = arg3
    SendMessageA(hWnd_12, 0x102e, arg3, &lParam)
    HWND hWnd_13 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_13 = arg3
    int32_t var_c4_13 = 4
    void* const var_b8_13 = &data_6138e3
    WPARAM var_ac_13 = arg3
    SendMessageA(hWnd_13, 0x102e, arg3, &lParam)
    HWND hWnd_14 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_14 = arg3
    int32_t var_c4_14 = 5
    void* const var_b8_14 = &data_6138e3
    WPARAM var_ac_14 = arg3
    SendMessageA(hWnd_14, 0x102e, arg3, &lParam)
    int32_t i = 0x715f3c
    int32_t var_8c = 0
    int32_t i_5 = 0x715f3c
    
    do
        int32_t i_4 = i
        sub_4c84d0(&var_88, "%s")
        HWND hWnd_15 = GetDlgItem(arg2, 0x4f32)
        lParam = 5
        int32_t var_c4_15 = var_8c + 6
        void* var_b8_15 = &var_88
        WPARAM var_c8_15 = arg3
        WPARAM var_ac_15 = arg3
        SendMessageA(hWnd_15, 0x102e, arg3, &lParam)
        var_8c += 1
        i = i_5 + 0x40
        i_5 = i
    while (i s< 0x71633c)
    
    int32_t i_1 = 0
    int32_t i_8 = 0
    
    do
        int32_t var_e0_21 = *((i_1 << 2) + &data_715e9c)
        sub_4c84d0(&var_88, "%$d")
        HWND hWnd_16 = GetDlgItem(arg2, 0x4f32)
        lParam = 5
        int32_t var_c4_16 = i_8 + 0x16
        void* var_b8_16 = &var_88
        WPARAM var_c8_16 = arg3
        WPARAM var_ac_16 = arg3
        SendMessageA(hWnd_16, 0x102e, arg3, &lParam)
        i_1 = i_8 + 1
        i_8 = i_1
    while (i_1 s< 0x28)
    
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return i_1

int32_t var_e0_2 = arg4[5]
sub_4c84d0(&var_88, "%d")
HWND hWnd_1 = GetDlgItem(arg2, 0x4f32)
lParam = 5
void* var_b8_1 = &var_88
WPARAM var_c8_1 = arg3
int32_t var_c4_1 = 2
WPARAM var_ac_1 = arg3
SendMessageA(hWnd_1, 0x102e, arg3, &lParam)
HWND hWnd_2 = GetDlgItem(arg2, 0x4f32)
lParam = 5
WPARAM var_c8_2 = arg3
int32_t var_c4_2 = 3
int32_t var_b8_2 = 0x6215bc
WPARAM var_ac_2 = arg3
SendMessageA(hWnd_2, 0x102e, arg3, &lParam)
int32_t ecx = arg4[0x11]

if (ecx == 0xffffffff)
    HWND hWnd_3 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_3 = arg3
    int32_t var_c4_3 = 4
    void* const var_b8_3 = &data_6138e3
    WPARAM var_ac_3 = arg3
    SendMessageA(hWnd_3, 0x102e, arg3, &lParam)
    HWND hWnd_4 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_4 = arg3
    int32_t var_c4_4 = 5
    int32_t var_b8_4 = 0x6215c0
    WPARAM var_ac_4 = arg3
    SendMessageA(hWnd_4, 0x102e, arg3, &lParam)
else if (ecx != 0)
    int32_t var_e0_9 = arg4[0xf]
    int32_t var_e4_15 = arg4[0xe]
    sub_4c84d0(&var_88, "%04d [%02d]")
    HWND hWnd_7 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    void* var_b8_7 = &var_88
    WPARAM var_c8_7 = arg3
    int32_t var_c4_7 = 4
    WPARAM var_ac_7 = arg3
    SendMessageA(hWnd_7, 0x102e, arg3, &lParam)
    int32_t esi_1 = 8
    int32_t eax_6 = arg4[0x12]
    
    if (eax_6 s>= 0 && eax_6 s< 8)
        esi_1 = eax_6
    
    int32_t esi_2 = (&data_6114f8)[esi_1]
    HWND hWnd_8 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_8 = arg3
    int32_t var_c4_8 = 5
    int32_t var_b8_8 = esi_2
    WPARAM var_ac_8 = arg3
    SendMessageA(hWnd_8, 0x102e, arg3, &lParam)
else
    HWND hWnd_5 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_5 = arg3
    int32_t var_c4_5 = 4
    void* const var_b8_5 = &data_6138e3
    WPARAM var_ac_5 = arg3
    SendMessageA(hWnd_5, 0x102e, arg3, &lParam)
    HWND hWnd_6 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    WPARAM var_c8_6 = arg3
    int32_t var_c4_6 = 5
    char const* const var_b8_6 = "GOSUB"
    WPARAM var_ac_6 = arg3
    SendMessageA(hWnd_6, 0x102e, arg3, &lParam)

void* ecx_2 = &arg4[0x3b]
int32_t i_6 = 0
void* var_90 = ecx_2
int32_t i_2

do
    void* var_e0_12 = ecx_2
    sub_4c84d0(&var_88, "%s")
    HWND hWnd_9 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    int32_t var_c4_9 = i_6 + 6
    void* var_b8_9 = &var_88
    WPARAM var_c8_9 = arg3
    WPARAM var_ac_9 = arg3
    SendMessageA(hWnd_9, 0x102e, arg3, &lParam)
    i_2 = i_6 + 1
    ecx_2 = var_90 + 0x40
    i_6 = i_2
    var_90 = ecx_2
while (i_2 s< 0x10)
void* ecx_7 = &arg4[0x13]
int32_t i_7 = 0
void* var_90_1 = ecx_7
int32_t i_3

do
    int32_t var_e0_14 = *ecx_7
    sub_4c84d0(&var_88, "%$d")
    HWND hWnd_10 = GetDlgItem(arg2, 0x4f32)
    lParam = 5
    int32_t var_c4_10 = i_7 + 0x16
    void* var_b8_10 = &var_88
    WPARAM var_c8_10 = arg3
    WPARAM var_ac_10 = arg3
    SendMessageA(hWnd_10, 0x102e, arg3, &lParam)
    i_3 = i_7 + 1
    ecx_7 = var_90_1 + 4
    i_7 = i_3
    var_90_1 = ecx_7
while (i_3 s< 0x28)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return i_3
