// 函数: sub_6980b0
// 地址: 0x6980b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t var_24
int16_t* eax_2 = sub_6ae650(&var_24, arg2)
void** eax_3 = sub_669720(arg1 + 0x3c, eax_2)
int32_t eax_5

if (eax_3 != *(arg1 + 0x3c))
    void* eax_4 = &eax_3[4]
    int32_t ecx_2 = *(eax_4 + 0x10)
    
    if (eax_3[9] u>= 8)
        eax_4 = *eax_4
    
    int32_t var_3c_1 = ecx_2
    eax_5 = sub_536340(eax_2, ecx_2, *(eax_2 + 0x10), eax_4)

void** var_28

if (eax_3 == *(arg1 + 0x3c) || eax_5 s< 0)
    var_28 = *(arg1 + 0x3c)
else
    var_28 = eax_3

int32_t var_10

if (var_10 u>= 8)
    j__free(var_24.d)

int32_t var_10_1 = 7
int32_t var_14 = 0
var_24 = 0

if (var_28 == *(arg1 + 0x3c))
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0xffffffff

int32_t result = var_28[0xa]
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
