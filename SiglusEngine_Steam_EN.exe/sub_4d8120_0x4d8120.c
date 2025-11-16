// 函数: sub_4d8120
// 地址: 0x4d8120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1

if (*(arg2 + 4) == 0)
    return 

int32_t eax

if (*arg2 != 0)
    *arg2 = 0
else
    eax.b = arg2[0x15]
    
    if (eax.b == 0)
        *(arg2 + 8) += data_1b14a28
    else if (eax.b == 1)
        *(arg2 + 8) += data_1b8a718

sub_4d8010(arg1, arg2)

if (edi[1] != *edi)
    return 

__builtin_memset(&arg2[4], 0, 0x12)
eax = edi[1]
*edi = eax
edi[2] = eax
