// 函数: sub_4b74c0
// 地址: 0x4b74c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (*((arg2 + (arg3 << 3)) * 0xff8 + 0x109a82c) == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 2

char var_218
sub_4cfd70(&var_218, (arg2 + (arg3 << 3)) * 0xff8 + 0x109a82c)
char* esi = &var_218
int32_t eax_3 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_3 != 0xffffffff)
    esi = &var_217 + eax_3
int32_t eax_4 = sub_4d1610(esi, 0x2e)

if (eax_4 == 0xffffffff)
    eax_4 = sub_4cfc80(esi)
    esi -= 1

void* const var_22c = &data_61334c
char* eax_5 = sub_4c84d0(&esi[eax_4], ".%s")
int32_t esi_2 = data_703190:0xc
int32_t eax_6 = sub_4c3da0(eax_5, 5, &var_218, 0xd)

if (eax_6 != 1)
    void* eax_7
    
    if (esi_2 != 0xffffffff)
        eax_7 = sub_4c51f0(eax_6, &var_218, esi_2, nullptr)
    
    if (esi_2 == 0xffffffff || eax_7 == 0)
        if (arg4 != 0)
            sub_4cfd70(arg4, (arg2 + (arg3 << 3)) * 0xff8 + 0x109a82c)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
