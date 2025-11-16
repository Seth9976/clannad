// 函数: sub_459600
// 地址: 0x459600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 == 0 || *arg1 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 2

char var_214[0x20c]
sub_4cfd70(&var_214, arg1)
int32_t eax_2 = sub_4c3960(&var_214, &data_61953c)
int32_t edi = data_7031a4
int32_t eax_3 = sub_4c3da0(eax_2, 5, &var_214, 0xe)

if (eax_3 != 1)
    void* eax_4
    
    if (edi != 0xffffffff)
        eax_4 = sub_4c51f0(eax_3, &var_214, edi, nullptr)
    
    if (edi == 0xffffffff || eax_4 == 0)
        int32_t eax_5 = sub_4c3960(&var_214, &data_61334c)
        int32_t edi_1 = data_703190:0xc
        int32_t eax_6 = sub_4c3da0(eax_5, 5, &var_214, 0xd)
        
        if (eax_6 != 1)
            void* eax_7
            
            if (edi_1 != 0xffffffff)
                eax_7 = sub_4c51f0(eax_6, &var_214, edi_1, nullptr)
            
            if ((edi_1 == 0xffffffff || eax_7 == 0) &&
                    sub_4c54e0(sub_4c3960(&var_214, &data_613350), &var_214, data_703190:8, 5, 0x19) == 0)
                if (arg2 != 0)
                    sub_4cfd70(arg2, arg1)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
