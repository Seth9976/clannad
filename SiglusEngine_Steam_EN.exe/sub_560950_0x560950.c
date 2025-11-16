// 函数: sub_560950
// 地址: 0x560950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edx = data_134ce60
int32_t result = 0
WPARAM wParam = 0
int32_t result_1 = 0

if (edx s> 0)
    int32_t ecx = arg4
    int32_t* edi_1 = data_134ce68 + 8
    int32_t* var_110_1 = edi_1
    
    do
        if (edi_1[1] == ecx)
            void var_108
            sub_551c50(&var_108, *edi_1, edi_1[-1], &var_108)
            HWND hWnd = GetDlgItem(arg3, 0x4f32)
            int32_t lParam = 5
            void* var_13c_1 = &var_108
            WPARAM wParam_1 = wParam
            int32_t var_148_1 = 0
            WPARAM wParam_3 = wParam
            SendMessageA(hWnd, 0x1007, 0, &lParam)
            int32_t ecx_2 = edi_1[5]
            
            if (ecx_2 != 0xffffffff)
                int32_t edi_3 = data_134ce50:4 + ecx_2
                HWND hWnd_1 = GetDlgItem(arg3, 0x4f32)
                lParam = 5
                WPARAM wParam_2 = wParam
                int32_t var_148_2 = 2
                int32_t var_13c_2 = edi_3
                WPARAM wParam_4 = wParam
                SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                edi_1 = var_110_1
            
            edx = data_134ce60
            wParam += 1
            result = result_1
            ecx = arg4
        
        result += 1
        edi_1 = &edi_1[8]
        var_110_1 = edi_1
        result_1 = result
    while (result s< edx)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
