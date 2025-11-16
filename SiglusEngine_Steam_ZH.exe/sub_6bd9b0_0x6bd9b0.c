// 函数: sub_6bd9b0
// 地址: 0x6bd9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_28 = 0
char ecx = (*(arg1 + 0x3c)).b
int32_t eax_3

if ((ecx & 2) == 0)
    eax_3 = **(arg1 + 0x20)

char var_24
int32_t var_10

if ((ecx & 2) != 0 || eax_3 == 0)
    int32_t edi_1
    
    if ((ecx & 4) == 0)
        edi_1 = **(arg1 + 0x1c)
    
    if ((ecx & 4) != 0 || edi_1 == 0)
        var_10 = 0xf
        int32_t var_14_2 = 0
        var_24 = 0
    else
        int32_t* eax_9 = **(arg1 + 0xc)
        void* ecx_6 = **(arg1 + 0x2c) + edi_1 - eax_9
        var_10 = 0xf
        int32_t var_14_1 = 0
        var_24 = 0
        sub_541eb0(&var_24, eax_9, ecx_6)
else
    int32_t ecx_1 = *(arg1 + 0x38)
    
    if (ecx_1 u< eax_3)
        ecx_1 = eax_3
    
    int32_t* eax_5 = **(arg1 + 0x10)
    var_10 = 0xf
    int32_t var_14 = 0
    var_24 = 0
    sub_541eb0(&var_24, eax_5, ecx_1 - eax_5)

sub_607ff0(arg2, &var_24)

if (var_10 u>= 0x10)
    j__free(var_24.d)

sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2
