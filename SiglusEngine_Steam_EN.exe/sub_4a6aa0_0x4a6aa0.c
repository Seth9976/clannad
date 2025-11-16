// 函数: sub_4a6aa0
// 地址: 0x4a6aa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 u<= 7)
    if (*(arg1 * 0xfcc + 0x129aa8c) == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 2
    
    char var_214[0x20c]
    sub_4cfd70(&var_214, arg1 * 0xfcc + 0x129aa8c)
    int32_t eax_2 = sub_4c3960(&var_214, &data_61334c)
    int32_t ebx_1 = data_703190:0xc
    int32_t eax_3 = sub_4c3da0(eax_2, 5, &var_214, 0xd)
    
    if (eax_3 != 1)
        void* eax_4
        
        if (ebx_1 != 0xffffffff)
            eax_4 = sub_4c51f0(eax_3, &var_214, ebx_1, nullptr)
        
        if ((ebx_1 == 0xffffffff || eax_4 == 0)
                && sub_4c54e0(sub_4c3960(&var_214, &data_613350), &var_214, data_703190:8, 5, 0x19)
                == 0)
            if (arg2 != 0)
                sub_4cfd70(arg2, arg1 * 0xfcc + 0x129aa8c)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
