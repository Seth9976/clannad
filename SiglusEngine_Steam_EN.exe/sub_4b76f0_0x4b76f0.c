// 函数: sub_4b76f0
// 地址: 0x4b76f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_5 = ((arg4 << 3) + 0x31 + arg5) * 9
void* edi_1 = (arg2 + (arg3 << 3)) * 0xff8 + &data_109a7e4 + (eax_5 << 2)

if (*((arg2 + (arg3 << 3)) * 0xff8 + &data_109a7e4 + (eax_5 << 2)) == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 2

char var_218
sub_4cfd70(&var_218, edi_1)
char* esi_1 = &var_218
int32_t eax_6 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_6 != 0xffffffff)
    esi_1 = &var_217 + eax_6
int32_t eax_7 = sub_4d1610(esi_1, 0x2e)

if (eax_7 == 0xffffffff)
    eax_7 = sub_4cfc80(esi_1)
    esi_1 -= 1

void* const var_22c = &data_61334c
char* eax_8 = sub_4c84d0(&esi_1[eax_7], ".%s")
int32_t esi_3 = data_703190:0xc
int32_t eax_9 = sub_4c3da0(eax_8, 5, &var_218, 0xd)

if (eax_9 != 1)
    void* eax_10
    
    if (esi_3 != 0xffffffff)
        eax_10 = sub_4c51f0(eax_9, &var_218, esi_3, nullptr)
    
    if (esi_3 == 0xffffffff || eax_10 == 0)
        if (arg6 != 0)
            sub_4cfd70(arg6, edi_1)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
