// 函数: sub_4531b0
// 地址: 0x4531b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
bool cond:0 = data_1af4514 == 1
data_1af40f8 = 1

if (not(cond:0) && data_108fa64 == 1)
    void* var_418_1 = &data_108f5cc
    void caption
    sub_4c84d0(&caption, 0x619190)
    
    if (MessageBoxA(data_7027bc, 0x618fc0, &caption, MB_OKCANCEL) != IDOK)
    label_45327a:
        data_1af40f8 = 0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_4487e0()
    
    if (data_1af4514 != 1)
        enum MESSAGEBOX_RESULT eax_3
        int32_t ecx_1
        eax_3, ecx_1 = MessageBoxA(data_7027bc, 0x619068, &caption, MB_OKCANCEL)
        
        if (eax_3 == IDOK)
            enum MESSAGEBOX_RESULT i
            
            do
                sub_4487e0()
                
                if (data_1af4514 == 1)
                    goto label_4532a0
                
                i = MessageBoxA(data_7027bc, 0x619068, &caption, MB_OKCANCEL)
            while (i == IDOK)
        
        goto label_45327a

label_4532a0:
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
