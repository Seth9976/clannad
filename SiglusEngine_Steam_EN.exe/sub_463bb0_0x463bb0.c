// 函数: sub_463bb0
// 地址: 0x463bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 == 0 || *arg1 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

char var_210
sub_4cfd70(&var_210, arg1)
char* esi = &var_210
int32_t eax_2 = sub_4d1610(&var_210, 0x5c)
void var_20f

if (eax_2 != 0xffffffff)
    esi = &var_20f + eax_2
int32_t eax_3 = sub_4d1610(esi, 0x2e)

if (eax_3 == 0xffffffff)
    eax_3 = sub_4cfc80(esi)
    esi -= 1

esi[eax_3] = 0

if (sub_418050() == 0xffffffff)
    int32_t eax_5 = sub_4c3960(&var_210, &data_61334c)
    int32_t esi_2 = data_703190:0xc
    int32_t eax_6 = sub_4c3da0(eax_5, 5, &var_210, 0xd)
    
    if (eax_6 != 1)
        void* eax_7
        
        if (esi_2 != 0xffffffff)
            eax_7 = sub_4c51f0(eax_6, &var_210, esi_2, nullptr)
        
        if (esi_2 == 0xffffffff || eax_7 == 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
