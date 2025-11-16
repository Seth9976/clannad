// 函数: sub_5515b0
// 地址: 0x5515b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_20c2ca0 != 0 && data_20c2b80 != 0)
    int32_t* esi_1 = data_20c2ca4 + (data_20c2b7c << 3)
    int32_t eax_3 = *esi_1
    uint8_t string[0x400]
    int32_t ecx_3
    
    if (eax_3 != 0xc && eax_3 != 0x12)
        if (eax_3 == 0xffffff9d)
            GetDlgItemTextA(data_20c2b5c, 0x4ef6, &string, 0x400)
            
            if (string[0] != 0)
                goto label_55162c
            
            goto label_551636
        
        if (eax_3 == 0xffffff9e)
            goto label_551611
        
        BOOL translated
        uint32_t eax_10 = GetDlgItemInt(data_20c2b5c, 0x4ef6, &translated, 1)
        
        if (translated == 0)
            eax_10 = 0
        
        uint32_t eax_11 = sub_550dd0(eax_10, esi_1[1], *esi_1, eax_10)
        
        if (arg1 != 0)
            uint32_t var_498_5 = eax_11
            void var_488
            sub_4c84d0(&var_488, "%$d")
            ecx_3 = data_1333e3c
            
            if (ecx_3 != 0)
                int32_t eax_12 = data_20c2b7c
                int32_t var_498_6 = 0x4f34
                ecx_3(1, &var_488, eax_12, eax_12, data_20c2b5c, 0x4f34)
    else
    label_551611:
        GetDlgItemTextA(data_20c2b5c, 0x4ef6, &string, 0x400)
        
        if (string[0] == 0)
        label_551636:
            int32_t eax_5 = *esi_1
            int32_t* ecx_2
            
            if (eax_5 == 0xc)
                ecx_2 = data_20c2d04 + (esi_1[1] << 3)
                sub_4d6c40(ecx_2, &ecx_2[1])
            else if (eax_5 == 0x12)
                ecx_2 = data_20c2d0c + (esi_1[1] << 3)
                sub_4d6c40(ecx_2, &ecx_2[1])
            else if (eax_5 == 0xffffff9d)
                ecx_2 = data_20c2d14 + (esi_1[1] << 3)
                sub_4d6c40(ecx_2, &ecx_2[1])
            else if (eax_5 == 0xffffff9e)
                ecx_2 = data_20c2d1c + (esi_1[1] << 3)
                sub_4d6c40(ecx_2, &ecx_2[1])
            goto label_551674
        
    label_55162c:
        sub_5506a0(&string, esi_1[1], *esi_1, &string)
    label_551674:
        
        if (arg1 != 0)
            ecx_3 = data_1333e3c
            
            if (string[0] == 0)
                if (ecx_3 != 0)
                    int32_t eax_9 = data_20c2b7c
                    int32_t var_498_3 = 0x4f34
                    ecx_3(1, &data_6138e3, eax_9, eax_9, data_20c2b5c, 0x4f34)
            else if (ecx_3 != 0)
                int32_t eax_7 = data_20c2b7c
                int32_t var_498_2 = 0x4f34
                ecx_3(1, &string, eax_7, eax_7, data_20c2b5c, 0x4f34)

HWND hDlg = data_20c2b5c
data_20c2b80 = 0
ShowWindow(GetDlgItem(hDlg, 0x4ef6), SW_HIDE)
BOOL result = ShowWindow(GetDlgItem(data_20c2b5c, 0x4fbc), SW_HIDE)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
