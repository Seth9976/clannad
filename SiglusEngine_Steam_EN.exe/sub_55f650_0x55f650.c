// 函数: sub_55f650
// 地址: 0x55f650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = data_20c71e4
int32_t var_50 = result
int32_t esi = data_20c71e0

if (result s> 0)
    HWND hDlg = data_1af0a3c
    int32_t i
    
    do
        int32_t eax_3 = esi << 5
        char* ecx_1 = *(eax_3 + 0x20c7204)
        char* edi_1 = *(eax_3 + &data_20c71f8)
        int32_t ecx_2 = *(eax_3 + 0x20c71f0)
        int32_t eax_4 = *(eax_3 + 0x20c71ec)
        
        if (hDlg != 0)
            SendMessageA(GetDlgItem(hDlg, 0x4f32), 0x1008, 0, 0)
            HWND hWnd
            
            if (eax_4 == 0xffffffff)
                hWnd = GetDlgItem(data_1af0a3c, 0x4f32)
                void* const var_84_2 = &data_6138e3
            else
                int32_t var_a8_1 = ecx_2
                int32_t var_ac_2 = eax_4
                void var_4c
                sub_4c84d0(&var_4c, "Seen%04d(%05d)")
                hWnd = GetDlgItem(data_1af0a3c, 0x4f32)
                void* var_84_1 = &var_4c
            
            int32_t lParam = 5
            int32_t var_94_1 = 0xff
            int32_t var_90_1 = 0
            int32_t var_78_1 = 0xff
            LRESULT eax_7 = SendMessageA(hWnd, 0x1007, 0, &lParam)
            
            if (edi_1 != 0 && *edi_1 != 0)
                HWND hWnd_1 = GetDlgItem(data_1af0a3c, 0x4f32)
                lParam = 5
                int32_t var_94_2 = 0xff
                int32_t var_90_2 = 1
                char* var_84_3 = edi_1
                int32_t var_78_2 = 0xff
                eax_7 = SendMessageA(hWnd_1, 0x102e, 0xff, &lParam)
            
            if (ecx_1 != 0 && *ecx_1 != 0)
                HWND hWnd_2 = GetDlgItem(data_1af0a3c, 0x4f32)
                lParam = 5
                int32_t var_94_3 = 0xff
                int32_t var_90_3 = 2
                char* var_84_4 = ecx_1
                int32_t var_78_3 = 0xff
                eax_7 = SendMessageA(hWnd_2, 0x102e, 0xff, &lParam)
            
            sub_4c1300(eax_7, data_1af0a3c, 0xff, 0x4f32, 0)
            hDlg = data_1af0a3c
        
        esi += 1
        result = 0
        
        if (esi s>= 0x100)
            esi = 0
        
        i = var_50
        var_50 -= 1
    while (i != 1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
