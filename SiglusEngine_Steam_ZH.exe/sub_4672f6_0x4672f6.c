// 函数: sub_4672f6
// 地址: 0x4672f6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_50 = edi
int32_t edi_1 = 0

if (arg2 != 0)
    int32_t var_54_1 = arg2
    sub_466aca(arg1)

if (arg3 != 0)
    int32_t var_54_2 = arg3
    sub_466aca(arg1)

sub_4986aa(arg1, *(arg1 + 0x9c))
sub_4986aa(arg1, *(arg1 + 0xdc))
sub_4986aa(arg1, *(arg1 + 0xd8))
sub_4986aa(arg1, *(arg1 + 0x174))
sub_4986aa(arg1, *(arg1 + 0x178))
sub_4986aa(arg1, *(arg1 + 0x138))

if ((*(arg1 + 0x5d) & 0x10) != 0)
    int32_t var_54_9 = *(arg1 + 0x104)
    void* var_58_9 = arg1
    sub_466a61()

if ((*(arg1 + 0x5d) & 0x20) != 0)
    sub_4986aa(arg1, *(arg1 + 0x15c))

if (*(arg1 + 0x144) != 0)
    int32_t esi_1 = 1 << (8 - (*(arg1 + 0x12c)).b)
    
    if (esi_1 s> 0)
        do
            sub_4986aa(arg1, *(*(arg1 + 0x144) + (edi_1 << 2)))
            edi_1 += 1
        while (edi_1 s< esi_1)
    
    sub_4986aa(arg1, *(arg1 + 0x144))

sub_4992b4(arg1 + 0x64)
int32_t result = *(arg1 + 0x48)
int32_t edx = *(arg1 + 0x40)
void var_44
__builtin_memcpy(&var_44, arg1, 0x40)
int32_t esi_3 = *(arg1 + 0x44)
__builtin_memset(arg1, 0, 0x19c)
*(arg1 + 0x44) = esi_3
__builtin_memcpy(arg1, &var_44, 0x40)
*(arg1 + 0x40) = edx
*(arg1 + 0x48) = result
return result
