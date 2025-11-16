// 函数: sub_497c80
// 地址: 0x497c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* edi_1 = arg1[1]

if (arg2 != 1)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0xe
    *(eax_1 + 0x18) = arg2
    (*eax_1)(arg1)

void* result = sub_4978c0(arg1, arg2, 0x248)
*(result + 4) = arg5
*(result + 0xc) = arg6
int32_t ecx_2 = *(edi_1 + 0x48)
*(edi_1 + 0x48) = result
*(result + 8) = arg4
*result = 0
*(result + 0x20) = arg3
*(result + 0x28) = 0
*(result + 0x2c) = ecx_2
return result
