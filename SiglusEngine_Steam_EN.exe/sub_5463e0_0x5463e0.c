// 函数: sub_5463e0
// 地址: 0x5463e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx

if (arg2 u> 0x111)
    if (arg2 == 0x113)
        int32_t esi_1 = data_20c1734
        
        if (esi_1 s<= 0)
            ecx.b = 0
            sub_5460e0(ecx.b)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        int32_t var_110_3 = esi_1
        void string
        sub_4c84d0(&string, "The game will return to the previous resolution in %d seconds.")
        data_20c1734 = esi_1 - 1
        SetDlgItemTextA(data_20c1730, 0x4fe9, &string)
else if (arg2 == 0x111)
    uint32_t eax_6 = zx.d(arg3)
    
    if (eax_6 == 0x4e6b)
    label_546433:
        ecx.b = 0
        sub_5460e0(ecx.b)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    if (eax_6 == 0x4e6c)
        ecx.b = 1
        sub_5460e0(ecx.b)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    if (eax_6 == 0x504d)
        BOOL __saved_esi_1
        
        if ((SendDlgItemMessageA(data_20c1730, 0x504d, 0xf2, eax_6 - 0x504d, eax_6 - 0x504d) & 1)
                == 0)
            __saved_esi_1 = 0
        else
            __saved_esi_1 = 1
        
        EnableWindow(GetDlgItem(data_20c1730, 0x4e6c), __saved_esi_1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
else
    if (arg2 == 0x10)
        goto label_546433
    
    if (arg2 == 0x110)
        data_20c1730 = arg1
        sub_5461d0()
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
