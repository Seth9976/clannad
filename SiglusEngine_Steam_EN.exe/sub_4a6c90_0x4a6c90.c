// 函数: sub_4a6c90
// 地址: 0x4a6c90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 u<= 7)
    int32_t eax_2 = arg2 * 9
    void* edi_1 = arg3 * 0xfcc + 0x129aa8c + (eax_2 << 2)
    
    if (*(arg3 * 0xfcc + 0x129aa8c + (eax_2 << 2) + 0x564) == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 2
    
    char var_218[0x20c]
    sub_4cfd70(&var_218, edi_1 + 0x564)
    int32_t eax_3 = sub_4c3960(&var_218, &data_61334c)
    int32_t ebx_1 = data_703190:0xc
    int32_t eax_4 = sub_4c3da0(eax_3, 5, &var_218, 0xd)
    
    if (eax_4 != 1)
        void* eax_5
        
        if (ebx_1 != 0xffffffff)
            eax_5 = sub_4c51f0(eax_4, &var_218, ebx_1, nullptr)
        
        if (ebx_1 == 0xffffffff || eax_5 == 0)
            if (arg4 != 0)
                sub_4cfd70(arg4, edi_1 + 0x564)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
