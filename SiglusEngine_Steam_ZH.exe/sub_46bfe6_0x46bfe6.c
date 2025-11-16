// 函数: sub_46bfe6
// 地址: 0x46bfe6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
sub_46b54f(arg1, 0xe)
*arg1 = &data_ac4824
arg1[4] = *arg2
void* edi_2 = &arg1[5]
void* esi_1 = arg2 + 4
*edi_2 = *esi_1
void* edi_3 = edi_2 + 4
void* esi_2 = esi_1 + 4
*edi_3 = *esi_2
*(edi_3 + 4) = *(esi_2 + 4)
bool cond:0 = arg1[4] != 4
__builtin_memcpy(&arg1[8], arg3, 0x20)

if (not(cond:0))
    int32_t* eax_1 = arg1[6]
    
    if (eax_1 != 0)
        arg1[6] = sub_46b5aa(eax_1)

return arg1
