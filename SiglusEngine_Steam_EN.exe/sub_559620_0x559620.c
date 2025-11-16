// 函数: sub_559620
// 地址: 0x559620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
LRESULT result = arg2 + (arg1 << 1)
void* edi_1 = &(&data_8d02b4)[result * 0xb20]

if (*edi_1 != 0)
    WPARAM wParam = 0
    
    if (*(edi_1 + 0x2c64) s> 0)
        void* ebx_1 = edi_1 + 0x68
        
        do
            HWND hWnd = GetDlgItem(data_20c3888, 0x4f34)
            int32_t lParam = 5
            void* var_ec_1 = ebx_1 + 4
            WPARAM wParam_1 = wParam
            int32_t var_f8_1 = 0
            WPARAM wParam_2 = wParam
            SendMessageA(hWnd, 0x1007, 0, &lParam)
            int32_t var_110_2 = *ebx_1
            void var_88
            sub_4c84d0(&var_88, "%d")
            HWND hWnd_1 = GetDlgItem(data_20c3888, 0x4f34)
            int32_t lParam_1 = 5
            void* var_b0_1 = &var_88
            WPARAM wParam_3 = wParam
            int32_t var_bc_1 = 1
            WPARAM wParam_4 = wParam
            result = SendMessageA(hWnd_1, 0x102e, wParam, &lParam_1)
            wParam += 1
            ebx_1 += 0x2c
        while (wParam s< *(edi_1 + 0x2c64))

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
