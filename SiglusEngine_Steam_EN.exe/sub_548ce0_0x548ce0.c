// 函数: sub_548ce0
// 地址: 0x548ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = sub_4956b0(0)
int32_t esi = data_12dc5ec
HWND hWnd = GetDlgItem(data_20c17c4, 0x4f1b)
int32_t lParam_2 = 7
int32_t var_4c8 = 0
int32_t var_4c4 = 0x1e
void* const var_4c0 = &data_6138e3
SendMessageA(hWnd, 0x101b, 0, &lParam_2)
HWND hWnd_1 = GetDlgItem(data_20c17c4, 0x4f1b)
int32_t lParam_1 = 7
int32_t var_504 = 0
int32_t var_500 = esi
void* const var_4fc = &data_6138e3
SendMessageA(hWnd_1, 0x101b, 1, &lParam_1)
LRESULT result = data_12dc4d0
WPARAM wParam = 0

if (result s> 0)
    do
        void* eax_3 = sub_495490(wParam)
        void var_48c
        sub_45a350(eax_3, wParam, &var_48c, eax_3, data_12dc4cc)
        HWND hWnd_2 = GetDlgItem(data_20c17c4, 0x4f1b)
        int32_t* lParam_4
        
        if (wParam != eax_2)
            int32_t var_580 = 5
            lParam_4 = &var_580
            WPARAM wParam_1 = wParam
            int32_t var_578_1 = 0
            void* const var_56c_1 = &data_6138e3
            WPARAM wParam_2 = wParam
        else
            int32_t var_4dc = 5
            lParam_4 = &var_4dc
            WPARAM wParam_5 = wParam
            int32_t var_4d4_1 = 0
            void* const var_4c8_1 = &data_6200d8
            WPARAM wParam_6 = wParam
        
        SendMessageA(hWnd_2, 0x1007, 0, lParam_4)
        HWND hWnd_3 = GetDlgItem(data_20c17c4, 0x4f1b)
        int32_t lParam = 5
        void* var_530_1 = &var_48c
        WPARAM wParam_3 = wParam
        int32_t var_53c_1 = 1
        WPARAM wParam_4 = wParam
        SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
        result = data_12dc4d0
        wParam += 1
    while (wParam s< result)

if (data_1313ca8 != 0)
    int32_t ecx_4 = data_1313cc4
    
    if (ecx_4 s>= 0 && ecx_4 s< result)
        HWND hWnd_4 = GetDlgItem(data_20c17c4, 0x4f1b)
        LRESULT eax_4 = SendMessageA(hWnd_4, 0x1027, 0, 0)
        int32_t lParam_3 = 2
        SendMessageA(hWnd_4, 0x100e, 0, &lParam_3)
        int32_t var_498
        int32_t var_490
        SendMessageA(hWnd_4, 0x1014, 0, (var_490 - var_498) * (ecx_4 - eax_4))
        result = data_12dc4d0
    
    WPARAM ecx_8 = data_1313cc8
    
    if (ecx_8 s>= 0 && ecx_8 s< result)
        result = sub_4c1300(result, data_20c17c4, ecx_8, 0x4f1b, 0xfffffffe)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
