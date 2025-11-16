// 函数: sub_41f150
// 地址: 0x41f150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg1 * 9

if (*((eax_2 << 2) + &data_108fec4) == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 2

char var_214
sub_4cfd70(&var_214, (eax_2 << 2) + &data_108fec4)
char* esi = &var_214
int32_t eax_3 = sub_4d1610(&var_214, 0x5c)
void var_213

if (eax_3 != 0xffffffff)
    esi = &var_213 + eax_3
int32_t eax_4 = sub_4d1610(esi, 0x2e)

if (eax_4 == 0xffffffff)
    eax_4 = sub_4cfc80(esi)
    esi -= 1

void* const var_228 = &data_61334c
char* eax_5 = sub_4c84d0(&esi[eax_4], ".%s")
int32_t esi_2 = data_703190:0xc
int32_t eax_6 = sub_4c3da0(eax_5, 5, &var_214, 0xd)

if (eax_6 != 1)
    void* eax_7
    
    if (esi_2 != 0xffffffff)
        eax_7 = sub_4c51f0(eax_6, &var_214, esi_2, nullptr)
    
    if (esi_2 == 0xffffffff || eax_7 == 0)
        int32_t eax_8 = sub_4c3960(&var_214, &data_613350)
        int32_t esi_3 = data_703190:8
        int32_t eax_9 = sub_4c3da0(eax_8, 5, &var_214, 0x19)
        
        if (eax_9 != 1)
            void* eax_10
            
            if (esi_3 != 0xffffffff)
                eax_10 = sub_4c51f0(eax_9, &var_214, esi_3, nullptr)
            
            if (esi_3 == 0xffffffff || eax_10 == 0)
                if (arg2 != 0)
                    sub_4cfd70(arg2, (eax_2 << 2) + &data_108fec4)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
