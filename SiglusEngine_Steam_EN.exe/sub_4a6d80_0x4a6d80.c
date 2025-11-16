// 函数: sub_4a6d80
// 地址: 0x4a6d80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 u<= 7)
    int32_t eax_4 = (arg4 + (arg2 << 3)) * 9
    void* ebx_1 = arg3 * 0xfcc + 0x129aa8c + (eax_4 << 2)
    
    if (*(arg3 * 0xfcc + 0x129aa8c + (eax_4 << 2) + 0x6cc) == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 2
    
    char var_214[0x20c]
    sub_4cfd70(&var_214, ebx_1 + 0x6cc)
    int32_t eax_5 = sub_4c3960(&var_214, &data_61334c)
    int32_t edi_1 = data_703190:0xc
    int32_t eax_6 = sub_4c3da0(eax_5, 5, &var_214, 0xd)
    
    if (eax_6 != 1)
        void* eax_7
        
        if (edi_1 != 0xffffffff)
            eax_7 = sub_4c51f0(eax_6, &var_214, edi_1, nullptr)
        
        if (edi_1 == 0xffffffff || eax_7 == 0)
            if (arg5 != 0)
                sub_4cfd70(arg5, ebx_1 + 0x6cc)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
