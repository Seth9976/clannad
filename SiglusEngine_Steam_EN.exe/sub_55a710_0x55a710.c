// 函数: sub_55a710
// 地址: 0x55a710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg2
HWND hDlg = arg3
int32_t lParam

if (arg4 != 0)
    arg4 = nullptr
    
    if (arg6 s> 0)
        int32_t* ebx_1 = arg8
        void* var_8_2 = arg5 + 0x20
        arg1 = arg7 - ebx_1
        int32_t* var_14_1 = arg1
        WPARAM wParam_1
        
        do
            int32_t esi_2 = *ebx_1
            int32_t edi_2 = *(arg1 + ebx_1)
            HWND hWnd_1 = GetDlgItem(arg3, arg2)
            int32_t var_38_2 = esi_2
            wParam_1 = arg4
            lParam = 7
            int32_t var_3c_2 = 0
            int32_t var_34_2 = edi_2
            SendMessageA(hWnd_1, 0x101b, wParam_1, &lParam)
            int32_t* ecx_2 = var_8_2
            ebx_1 = &ebx_1[1]
            arg2 = var_c
            arg4 = wParam_1 + 1
            *ecx_2 = ebx_1[-1]
            arg1 = var_14_1
            var_8_2 = &ecx_2[1]
            arg3 = hDlg
        while (wParam_1 + 1 s< arg6)
else
    WPARAM wParam = 0
    
    if (arg6 s> 0)
        int32_t* ecx = arg7
        int32_t* eax_1 = arg5 + 0x20
        int32_t* var_8_1 = eax_1
        arg4 = ecx
        
        do
            int32_t esi_1 = *eax_1
            int32_t edi_1 = *ecx
            HWND hWnd = GetDlgItem(hDlg, arg2)
            lParam = 7
            int32_t var_3c_1 = 0
            int32_t var_38_1 = esi_1
            int32_t var_34_1 = edi_1
            SendMessageA(hWnd, 0x101b, wParam, &lParam)
            wParam += 1
            ecx = &arg4[1]
            arg2 = var_c
            eax_1 = &var_8_1[1]
            arg4 = ecx
            var_8_1 = eax_1
        while (wParam s< arg6)
