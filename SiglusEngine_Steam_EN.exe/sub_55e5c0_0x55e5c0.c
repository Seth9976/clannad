// 函数: sub_55e5c0
// 地址: 0x55e5c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x31, 0x621c38)
HWND hDlg_2 = data_1af0ad4
HWND hDlg = hDlg_2

if (data_13173f8 == 0)
    UpdateWindow(hDlg_2)
    SetWindowPos(hDlg_2, 0xfffffffe, data_1317400, data_1317404, data_1317408, data_131740c, 
        SWP_SHOWWINDOW)
    hDlg_2 = data_1af0ad4

HWND eax_2
int32_t ecx
eax_2, ecx = GetDlgItem(hDlg_2, 0x4f32)

if (eax_2 != 0)
    HWND hWnd = GetDlgItem(hDlg_2, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_2, data_13173f8, &data_13173f8, 4, &data_63fe10, (<<<")

WPARAM wParam = 0
void* var_410 = &data_1301b58
WPARAM wParam_6 = 0
LRESULT hDlg_1

do
    WPARAM wParam_1 = wParam
    void var_40c
    sub_4c84d0(&var_40c, "%03d")
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    void* var_440_1 = &var_40c
    WPARAM wParam_2 = wParam
    int32_t var_44c_1 = 0
    WPARAM wParam_4 = wParam
    hDlg_1 = SendMessageA(hWnd_1, 0x1007, 0, &lParam)
    int32_t j_2 = *((wParam << 2) + &data_1301a58)
    
    if (j_2 s> 0)
        void* edi = var_410
        void* esi_2 = &var_40c
        int32_t j_1 = j_2
        int32_t j
        
        do
            int32_t var_468_4 = *edi
            sub_4c84d0(esi_2, "%d, ")
            int32_t edx_1 = 0
            void* eax_6 = esi_2
            
            if (esi_2 != 0)
                if (*esi_2 != 0)
                    do
                        char ecx_3 = *eax_6
                        
                        if (ecx_3 u< 0x80)
                            edx_1 += 1
                            eax_6 += 1
                        else if (ecx_3 u< 0xa0)
                            if (ecx_3 u>= 0xfe)
                                edx_1 += 1
                                eax_6 += 1
                            else
                                edx_1 += 2
                                eax_6 += 2
                        else if (ecx_3 u<= 0xdf || ecx_3 u>= 0xfe)
                            edx_1 += 1
                            eax_6 += 1
                        else
                            edx_1 += 2
                            eax_6 += 2
                    while (*eax_6 != 0)
                
                edx_1 += 1
            
            edi += 4
            esi_2 = esi_2 - 1 + edx_1
            j = j_1
            j_1 -= 1
        while (j != 1)
        hDlg_1 = data_1af0ad4
        wParam = wParam_6
        
        if (hDlg_1 != 0)
            HWND hWnd_2 = GetDlgItem(hDlg_1, 0x4f32)
            void* var_440_2 = &var_40c
            lParam = 5
            WPARAM wParam_3 = wParam
            int32_t var_44c_2 = 1
            WPARAM wParam_5 = wParam
            hDlg_1 = SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
    
    var_410 += 0x100
    wParam += 1
    wParam_6 = wParam
while (wParam s< 0x40)

int32_t result
int32_t ecx_4
result, ecx_4 = sub_4d1ba0(hDlg_1, 0x200, &data_20c5500, 0xa5)

if (data_13173f8 == 0)
    int32_t var_468_6 = ecx_4
    result = sub_4c1470(result, data_1317414, data_1317410, hDlg, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
