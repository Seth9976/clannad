// 函数: sub_4285d0
// 地址: 0x4285d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_21c = nullptr
int32_t var_218 = 0
char var_214
char* edx
sub_4cfd70(&var_214, edx)
char* esi = &var_214
int32_t eax_2 = sub_4d1610(&var_214, 0x5c)
void var_213

if (eax_2 != 0xffffffff)
    esi = &var_213 + eax_2
int32_t eax_3 = sub_4d1610(esi, 0x2e)

if (eax_3 == 0xffffffff)
    eax_3 = sub_4cfc80(esi)
    esi -= 1

void* const var_228 = &data_6141e4
char* eax_4 = sub_4c84d0(&esi[eax_3], ".%s")
int32_t esi_2 = data_703190:4
int32_t eax_5
char* ecx_5
eax_5, ecx_5 = sub_4c3da0(eax_4, 5, &var_214, 0x22)

if (eax_5 == 1)
label_428688:
    char* var_228_1 = ecx_5
    int32_t var_22c_1 = 0x22
    sub_4c5340(&var_218, &var_214, data_703190:4, &var_218, &var_21c, ecx_5)
    
    if (var_218 != 0)
        int32_t result = sub_4284d0(arg1, var_21c)
        sub_4d6c40(&var_218, &var_21c)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result
else if (esi_2 != 0xffffffff)
    void* eax_6
    eax_6, ecx_5 = sub_4c51f0(eax_5, &var_214, esi_2, nullptr)
    
    if (eax_6 != 0)
        goto label_428688

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
