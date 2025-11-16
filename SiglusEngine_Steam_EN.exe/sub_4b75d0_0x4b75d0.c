// 函数: sub_4b75d0
// 地址: 0x4b75d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_4 = (arg4 + 0x27) * 9
void* ebx = (arg2 + (arg3 << 3)) * 0xff8 + &data_109a7e4 + (eax_4 << 2)

if (*((arg2 + (arg3 << 3)) * 0xff8 + &data_109a7e4 + (eax_4 << 2)) == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 2

char var_214
sub_4cfd70(&var_214, ebx)
char* esi_1 = &var_214
int32_t eax_5 = sub_4d1610(&var_214, 0x5c)
void var_213

if (eax_5 != 0xffffffff)
    esi_1 = &var_213 + eax_5
int32_t eax_6 = sub_4d1610(esi_1, 0x2e)

if (eax_6 == 0xffffffff)
    eax_6 = sub_4cfc80(esi_1)
    esi_1 -= 1

void* const var_228 = &data_61334c
char* eax_7 = sub_4c84d0(&esi_1[eax_6], ".%s")
int32_t esi_3 = data_703190:0xc
int32_t eax_8 = sub_4c3da0(eax_7, 5, &var_214, 0xd)

if (eax_8 != 1)
    void* eax_9
    
    if (esi_3 != 0xffffffff)
        eax_9 = sub_4c51f0(eax_8, &var_214, esi_3, nullptr)
    
    if (esi_3 == 0xffffffff || eax_9 == 0)
        if (arg5 != 0)
            sub_4cfd70(arg5, ebx)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
